#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll N = 1000000;
vector<ll> v;
void SieveOfEratosthenes(int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++)
        if (prime[p])
            v.push_back(p);
}
void solve(){
    ll n;
    cin>>n;
    if(n%2){
        cout<<1<<" ";
    }
    for(int i = 0; i < n/2; i++){
        cout<<v[i]<<" "<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    SieveOfEratosthenes(N);
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}