#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,m;
    cin>>n>>m;
    vector<ll> v1,v2;
    for(int i = 1;i<n;i++){
        cout<<i<<" "<<i+1<<endl;
        v1.push_back(i+1);
    }
    v2.push_back(2);
    ll pre = 0;
    while(m--){
        ll x;
        cin>>x;
        if(v1.size()==x or v2.size()==x){
            cout<<"-1 -1 -1"<<endl;
        }
        else{
            if(v1.size()>x){
                cout<<v1[x]<<" "<<v1[x-1]<<" "<<v2[v2.size()-1]<<endl;
                for(int i = x;i<v1.size();i++){
                    v2.push_back(v1[i]);
                }
                while(v1.size()>x)v1.pop_back();
            }
            else if(v2.size()>x){
                cout<<v2[x]<<" "<<v2[x-1]<<" "<<v1[v1.size()-1]<<endl;
                for(int i = x;i<v2.size();i++){
                    v1.push_back(v2[i]);
                }
                while(v2.size()>x)v2.pop_back();
            }
            else{
                ll need = x - v1.size();
                ll y = v2.size() - need;
                cout<<v2[y]<<" "<<v2[y-1]<<" "<<v1[v1.size()-1]<<endl;
                for(int i = y;i<v2.size();i++){
                    v1.push_back(v2[i]);
                }
                while(v2.size()>y)v2.pop_back();
            }
        }
    }
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}