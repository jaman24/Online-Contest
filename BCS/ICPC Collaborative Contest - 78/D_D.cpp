#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int primeFactors(int n) 
{ 
    int ans = 0;
    while (n % 2 == 0) 
    { 
        ans++;
        n = n/2; 
    } 
 
    for (int i = 3; i <= sqrt(n); i = i + 2) 
    { 
        while (n % i == 0) 
        { 
            ans++;
            n = n/i; 
        } 
    } 
 
    if (n > 2) 
        ans++;
    return ans; 
} 
void solve(){
    ll n;
    cin>>n;
    int ans = primeFactors(n);
    cout<<ans<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}