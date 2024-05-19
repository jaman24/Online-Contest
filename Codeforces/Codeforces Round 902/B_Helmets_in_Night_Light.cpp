#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,p;
    cin>>n>>p;
    ll a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<pair<ll,ll>> v;
    for(int i=0;i<n;i++){
        cin>>b[i];
        v.push_back({b[i],a[i]});
    }
    sort(v.begin(),v.end());
    ll ans = 0, cn= 0;
    for(int i=0;i<n;i++){
        if(v[i].first<p){
            if(i==0){
                ans+=p;
                cn=1;
                if(cn+v[i].second<n){
                    cn+=v[i].second;
                    ans+=(v[i].first * v[i].second);
                }
                else{
                    ans += (v[i].first * (n-cn));
                    break;;
                }
            }
            else{
                if(cn+v[i].second<n){
                    cn+=v[i].second;
                    ans+=(v[i].first * v[i].second);
                }
                else{
                    ans += (v[i].first * (n-cn));
                    break;;
                }
            }
        }
        else{
            ans+=(n-cn)*p;
            break;
        }
    }
    cout<<ans<<endl;

    
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}