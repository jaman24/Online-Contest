#include <bits/stdc++.h>
#include <fstream>
// #define ll long long
//#define int unsigned long long

using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(auto &i:arr) cin>>i;
    for(int i=0;i<n;i++) arr[i]*=(-1);
    vector <int> ans(n,0);
    ans[0]=arr[0];
    int len=1;
    for(int i=1;i<n;i++){
        auto it=lower_bound(ans.begin(),ans.begin()+len,arr[i]);
        if(it==ans.begin() + len) ans[len++]=arr[i];
        else *it=arr[i]; 
    }
    cout<<len<<endl;
    //for(auto i:ans) cout<<i<<" ";
}

int32_t main()
{
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}