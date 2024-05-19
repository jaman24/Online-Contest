#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb emplace_back
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
map<ll,ll> memory;
ll f(ll n) {
    if (n == 0)
        return 1;
    if(memory.find(n) != memory.end()){
        return memory[n];
    }
    return memory[n] = f(n/2) + f(n/3);
}

int main() {
    optimize();
    ll tt = 1;
    while (tt--) {
        ll n;
        cin>>n;
        cout<<f(n)<<endl;
    }
    return 0;
}