#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;
const int BASE = 257;
const int M = 1007;
int sH[101][M],expo[M];
map<int,pair<int,pair<int,int>>> ans;

int add(int a, int b)
{
  if (a >= MOD) a %= MOD;
  if (b >= MOD) b %= MOD;
  int c = a + b;
  if (c >= MOD) c %= MOD;
  return c;
}
int multiply(int a, int b)
{
  if (a >= MOD) a %= MOD;
  if (b >= MOD) b %= MOD;
  int c = ((ll)a * b)%MOD;
  return c;
}
void precalculate_expo(){
    int len = 1007;
    // calculate expos
    expo[0] = 1;
    for(int i = 1; i < len; i++)
    {
        expo[i] = multiply(expo[i - 1], BASE);
    }
}
void precalculate(string &s, int j)
{
  int len = s.size();
  // calculate prefix hashes
  sH[j][0] = s[0];
  for (int i = 1; i < len; i++)
  {
    sH[j][i] = add(multiply(sH[j][i - 1], BASE), s[i]);
  }
}
int rangehash(int l , int r, int i){
    if(l == 0){
        return sH[i][r];
    }
    auto h1=sH[i][r];
    auto h2= multiply(sH[i][l-1], expo[r-l+1]);
    return ((ll)h1-h2 + MOD)%MOD;
}
bool check_length(int n,int mid, vector<string> &s){
    int half = n/2;
    int len = s[0].size();
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++){
        unordered_set<int> st;
        for(int j = 0; j + mid - 1 < len; j++){
            int l = j, r = j + mid - 1;
            int has_value = rangehash(l, r, i);
            if(st.find(has_value) == st.end()){
                mp[has_value]++;
                st.insert(has_value);
                if(mp[has_value] > half){
                    return true;
                }
            }
        }
    }
    return false;
}

void gen_ans(int n,int mid, vector<string>& s){
    int ik = 0;
    int half = n/2;
    int len = s[0].size();
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++){
        unordered_set<int> st;
        for(int j = 0; j + mid - 1 < len; j++){
            int l = j, r = j + mid - 1;
            int has_value = rangehash(l, r, i);
            if(st.find(has_value) == st.end()){
                mp[has_value]++;
                st.insert(has_value);
                if(mp[has_value] > half){
                    ans[ik] = {i,{l,r}};
                    ik++;
                    mp[has_value] = 0;
                }
            }
        }
    }
}

const int N = 10010;
int end_at[N];
int nxt[N][26];
int id = 0;
void insert(string &s){
    int at = 0;
    for(auto c:s){
        int c_id = c-'a';
        if(nxt[at][c_id] == -1){
            nxt[at][c_id] = ++id;
        }
        at = nxt[at][c_id];
    }
    end_at[at]++;
}

string ss;
void dfs(int at){
    if(end_at[at]){
        for(auto x:ss)printf("%c",x);
        printf("\n");
        return;
    }
    for(int c_id=0;c_id<26;c_id++){        
        if(nxt[at][c_id] != -1){
            ss += c_id+'a';
            dfs(nxt[at][c_id]);
            ss.pop_back();
        }
    }
}

void solve(int n){
    id = 0;
    ans.clear();
    vector<string> s(n);
    for(int i = 0;i < n; i++){
        cin>>s[i];
        precalculate(s[i], i);
    }
    int l = 0, r = s[0].size();
    while(l<r){
        int mid = l + (r-l+1)/2;
        if(check_length(n, mid , s)){
            l = mid;
        }
        else{
            r = mid - 1;
        }
    }
    if(l == 0){
        printf("?\n");
    }
    else{
        gen_ans(n, l , s);
        memset(end_at,0,sizeof end_at);
        memset(nxt,-1,sizeof nxt);
        id = 0;
        for(auto [x,y]:ans){
            string t;
            for(int i=y.second.first;i<=y.second.second;i++){
                t.push_back(s[y.first][i]);
            }
            insert(t);
        }
        ss.clear();
        dfs(0);
    }
}

int main(){
    precalculate_expo();
    int cn;
    scanf("%d",&cn);
    while(cn){
        solve(cn);
        scanf("%d",&cn);
        if(cn)printf("\n");
    }
    return 0;
}