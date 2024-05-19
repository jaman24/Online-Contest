#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll ans = 0;
    int i = n-2;
    set<ll> st;
    while(i>=0){
        if(s[i] == 'A' and s[i+1] == 'B'){
            ans++;
            swap(s[i],s[i+1]);
            st.insert(i);
            ll j = i+1;
            while(j+1<n and s[j]=='A' and s[j+1] == 'B'){
                if(st.find(j) == st.end()){
                    ans++;
                    swap(s[j],s[j+1]);
                    st.insert(j);
                    j++;
                }
                else break;
            }
        }
        i--;
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