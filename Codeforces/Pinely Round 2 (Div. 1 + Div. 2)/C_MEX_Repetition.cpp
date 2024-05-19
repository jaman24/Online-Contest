#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
void solve(){
    ll n,k;
    cin>>n>>k;
    ll a[n],b[n];
    ll mis;
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    bool f=false;
    for(int i=0;i<n;i++){
        if(b[i]!=i){
            mis=i;
            f=true;
            break;;
        }
    }
    if(!f){
        mis=n;
    }
    // cout<<mis<<endl;
    k%=(n+1);
    deque<ll> dq;
    if(k>0){
        dq.push_back(mis);
        k--;
        int ind = n-1;
        while(k--){
            dq.push_front(a[ind--]);
        }
    }
    int ind=0;
    while(dq.size()!=n){
        dq.push_back(a[ind++]);
    }
    for(auto x:dq)cout<<x<<" ";
    cout<<endl;
    

}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}