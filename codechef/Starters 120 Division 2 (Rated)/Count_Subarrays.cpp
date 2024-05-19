#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &x:v)cin>>x;
    vector<int> ans(n+1);
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum += v[j];
            if(sum > n)break;
            ans[sum]++;
        }
    }
    for(int i = 1; i <= n; i++)cout<<ans[i]<<" ";
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