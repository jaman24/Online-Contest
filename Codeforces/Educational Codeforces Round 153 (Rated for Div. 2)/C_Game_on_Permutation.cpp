#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll pre[1000000] = {0};
int longest_increasing_subsequence(vector<int>& arr)
{
    vector<int> ans;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        auto it = lower_bound(ans.begin(), ans.end(), arr[i]);
        int id = it - ans.begin();
        pre[arr[i]] = id+1;
        if (it == ans.end()) {
            ans.push_back(arr[i]);
        }
        else {
            *it = arr[i];
        }
    }
    return ans.size();
}
void solve(){
    ll n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    ll x = longest_increasing_subsequence(a);
    // cout<<x<<endl;
    if(x <= 1){
        cout<<"0"<<endl;
        return;
    }
    ll c = 0;
    for(int i = 1; i <= n; i++){
        // cout<<pre[i]<<" ";
        if(pre[i] == x)c++;
    }
    cout<<c<<endl;

}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}