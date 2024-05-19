#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll N = 1000005;
ll sum[N] = {0};

void seive(){
    for(int i = 1;i<N;i++){
        for(int j = i+i; j < N; j+=i){
            sum[j] += i;
        }
    }
}
void solve(){
    ll n;
    cin>>n;
    if(sum[n] > n){
        cout<<"abundant"<<endl;
    }
    else if(sum[n]<n){
        cout<<"deficient"<<endl;
    }
    else{
        cout<<"perfect"<<endl;
    }
}
int main(){
    seive();
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}