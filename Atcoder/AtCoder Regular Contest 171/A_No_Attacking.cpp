#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N = 10005;
vector<int> v(N);
void pre(){
    int x = 1;
    v[0] = 0;
    for(int i = 1; i < N; i+=2){
        v[i] = x;
        v[i+1] = x;
        x+=2;
    }
    for(int i = 1; i < N; i++)v[i] = v[i-1] + v[i];
}
void solve(){
    ll n, a, b;
    cin>>n>>a>>b;
    if(n < a){
        cout<<"No"<<endl;
        return;
    }

    ll t = n * n;
    t = (t + 1)/2;
    t -= v[n];
    cout<<t<<" "<<b<<" "<<v[n]<<endl;

    t += v[n-a];
    if(v[n-a] < b){
        cout<<"No"<<endl;
    }
    else cout<<"Yes"<<endl;
}
int main(){
    pre();
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}