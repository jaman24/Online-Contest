#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
void solve(){
    ll n;
    string s;
    cin>>s;
    n=s.size();
    ll c=0,d=0;
    bool f=false;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            if(d){
                c++;
                if(d>1)c++;
            }
            d=0;

        }
        else{
            d++;
        }
    }
    if(d)c++;
    // cout<<"c   -> "<<c<<endl;
    vector<ll> v;
    ll k=0;
    for(int i=0;i<n;i++){
        if(s[i]=='B'){
            if(k)v.push_back(k);
            k=0;
        }
        else{
            k++;
        }
    }
    if(k)v.push_back(k);
    ll sum = 0;
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    // for(auto x:v)cout<<x<<" ";
    // cout<<endl;
    // cout<<"c "<<c<<endl;
    for(int i=0;i<v.size() and i<c;i++)sum+=v[i];
    cout<<sum<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}