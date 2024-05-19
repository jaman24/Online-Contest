#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    string ss = s;
    sort(ss.begin(), ss.end());
    if(is_sorted(s.begin(), s.end())){
        cout<<0<<endl;
        return;
    }
    vector<int> v;
    char c = 'a';
    for(int i = 0; i < n; i++){
        c = max(c, s[i]);
    }
    for(int i = 0; i < n; i++){
        if(s[i] < c and s[i] != ss[i]){
            v.push_back(i);
        }
    }
    int i = 0, j = v.size()-1;
    while(i < j){
        swap(s[v[i]], s[v[j]]);
        i++;
        j--;
    }
    if(is_sorted(s.begin(), s.end())){
        cout<<v.size()-1<<endl;
    }
    else cout<<"-1"<<endl;

}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}