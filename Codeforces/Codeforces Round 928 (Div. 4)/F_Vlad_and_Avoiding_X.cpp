#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<pair<int,int>> v;
int check_bit(unsigned int n, unsigned int k)
{
    return (n >> k) & 1;
}

void pre(){
    for(int i = 2; i < 5; i++){
        for(int j = 2; j < 5; j++){
            v.push_back({i, j});
        }
    }
}
void solve(){
    string s[7];
    for(auto &x:s)cin>>x;
    ll n = 512;
    int ans = INT_MAX;
    for(int i = 0; i < n; i++){
        int c = 0;
        string t[7];
        for(int j = 0; j < 7; j++)t[j] = s[j];
        for(int b = 0; b < 9; b++){
            if(check_bit(i, b)){
                if(t[v[b].first][v[b].second] == 'B'){
                    t[v[b].first][v[b].second] = 'W';
                    c++;
                }
            }
        }
        bool f = true;
        for(int j = 1; j < 6; j++){
            for(int k = 1; k < 6; k++){
                if(t[j][k] == 'B' and t[j-1][k+1] == 'B' and t[j-1][k-1] == 'B' and t[j+1][k-1] == 'B' and t[j+1][k+1] == 'B'){
                    f = false;
                    break;
                }
            }
        }
        if(f) ans = min(ans, c);
    }
    cout<<ans<<endl;
}
int main(){
    pre();
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}