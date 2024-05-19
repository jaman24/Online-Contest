#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool prime(ll j){
    for(int i = 2; i < j; i++){
        if(j % i == 0)return false;
    }
    return true;
}
void solve(){
    bool ans = true;
    int c = 0;
    vector<ll> primes;
    for(int i = 2; i < 100; i++){
        if(prime(i))primes.push_back(i);
    }
    cout<<primes.size()<<endl;
    for(auto x:primes)cout<<x<<" ";
    return;
    for(int i = 2; i <= 10; i++){
        cout<<i<<endl;
        string s;
        cin>>s;
        if(s == "yes"){
            c++;
        }
    }
    cout<<25<<endl;
    string k;
    cin>>k;
    cout<<49<<endl;
    string l;
    cin>>l;

    if(c <= 1 and k == "no" and l == "no"){
        cout<<"prime"<<endl;
        return;
    }
   cout<<"composite"<<endl;

}
int main(){
    int cn = 1;
    // cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}