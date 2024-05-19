#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>
ll inversion = 0;
vector<ll> merge(vector<ll> &a , vector<ll> &b){

    ll x=a.size()+b.size();
    vector<ll> ab(x);
    ll j=0,k = 0;

    for(int i=0;i<a.size();){
        if(j>=b.size() or a[i]<=b[j]){
            ab[k++] = a[i];
            i++;
        }
        else if(j<b.size()){
            ab[k++] = b[j];
            j++;
            inversion += a.size()-i;
        }
    }
    while(j<b.size()){
        ab[k++] = b[j];
        j++;
    }
    return ab;
}
vector<ll> merge_sort(vector<ll> &num){
    ll size = num.size();
    if(size == 1)return num;
    ll mid = (size-1)/2;
    vector<ll> left(num.begin() , num.begin()+mid+1);
    vector<ll> right(num.begin()+mid+1 , num.end());
    vector<ll> sorted_left = merge_sort(left);
    vector<ll> sorted_right = merge_sort(right);
    return merge(sorted_left , sorted_right);

}
void solve(){
    inversion = 0;
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(auto &x:v){
        cin>>x;
    }
    vector<ll> ans = merge_sort(v);
    cout<<inversion<<endl;

}
int main(){
    FastIO;
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}