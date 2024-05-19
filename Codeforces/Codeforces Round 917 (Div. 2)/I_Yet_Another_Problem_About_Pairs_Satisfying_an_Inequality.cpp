#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    vector<int> ind;
    vector<int> v;
    for(int i = 1; i <= n; i++){
        ll x;
        cin>>x;
        v.push_back(x);
        if(x < i)ind.push_back(i);
    }
    int ans = 0;
    for(int i = n-1; i > 0; i--){
        if(v[i] < i+1){
            int x = lower_bound(ind.begin(), ind.end(), v[i]) - ind.begin();
            ans += x;
        }
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

/*
a[i] < i < a[j] < j
{1, 2} < {3, 4}, {4, 8}
{2, 3} < {4, 8}
{3, 4} 
{2, 6}
{1, 7}
{4, 8}
{7, 9}
*/