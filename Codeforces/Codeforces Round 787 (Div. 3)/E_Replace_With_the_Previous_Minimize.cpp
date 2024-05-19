#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char,ll> mp;
    for(int i = 0;i < n; i++){
        if(i == 0){
            ll need = s[i] - 'a';
            if(k>=need){
                s[i] -= need;
                mp[s[i]] = need;
                k-=need;
            }
            else{
                s[i] -= k;
                mp[s[i]] = k;
                k = 0;
            }
            continue;
        }
        if(k > 0){
            ll need = s[i] - 'a';
            bool f = false;
            for(auto [x,y]:mp){
                if(x>=s[i]){
                    f=true;
                    break;
                }
            }
            if(f){
                mp[s[i]] = need;
                s[i] -= need;
            }
            else{
                char c = 'a';
                for(auto [x,y]:mp){
                    c = max(c , x); 
                }
                ll rn = s[i] - c;
                if(k>=rn){
                    mp[s[i]] = need;
                    k -= rn;
                    s[i] -= need;
                }
                else{
                    mp[s[i]] = k;
                    s[i] -= k;
                    k = 0;
                }
            }
        }
        else{
            ll need = s[i] - 'a';
            ll mx = 0;
            for(auto [x,y]:mp){
                if(x>=s[i]){
                    ll z = x - s[i];
                    mx = max(mx , y - z);
                }
            }
            if(mx >= need){
                s[i] -= need;
            }
            else{
                s[i] -= mx;
            }
        }
    }
    cout<<s<<endl;

}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}