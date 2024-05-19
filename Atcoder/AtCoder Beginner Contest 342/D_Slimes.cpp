#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(auto &x:a)cin>>x;
    vector<int> ans(n, 0);
    bool f = false;
    int l;
    for(int i = 0; i < n-1; i++){
        if(a[i] > a[i+1]){
            f = true;
            l = i+1;
        }
        if(a[i] < a[i+1]){
            if(f){
                while(l <= i){
                    ans[l] = 1;
                    l++;
                }
                f = false;
            }
        }
    }
    for(int i = 0; i < n-1; i++){
        if(a[i] < a[i+1]){
            ans[0] = 1;
            break;
        }
        if(a[i] > a[i+1])break;
    }
    for(int i = n-1; i > 0; i--){
        if(a[i] < a[i-1]){
            ans[n-1] = 1;
            break;
        }
        if(a[i] > a[i-1])break;
    }
    if(n > 1 and a[0] == a[1])ans[0] = 1;
    if(n > 1 and a[n-1] == a[n-2])ans[n-1] = 1;
    for(int i = 1; i < n-1; i++){
        if(a[i-1] == a[i+1] and a[i] == a[i+1])ans[i] = 1;
        if(a[i-1] > a[i] and a[i] == a[i+1])ans[i]=1;
        if(a[i-1] == a[i] and a[i] < a[i+1])ans[i]=1;
    }
    for(auto x:ans)cout<<x<<" ";
    cout<<endl;
    vector<int> res(n, 0);
    for(int i = 0; i < n; i++){
        if(ans[i]){
            int l = i-1, r = i+1;
            res[i] = 1;
            while(l >= 0){
                if(a[l] > a[l+1] and res[l+1] > res[l]){
                    res[l] = res[l+1] + 1;
                }
                else break;
                l--;
            }
            while(r < n){
                if(a[r] > a[r-1] and res[r-1] > res[r]){
                    res[r] = res[r-1] + 1;
                }
                else break;
                r++;
            }
        }
    }
    
    int tot = 0;
    for(auto x:res)cout<<x<<" ",tot += x;
    for(int i = 1; i < n; i++){
        if(a[i] != a[i-1] and res[i] == res[i-1])tot++;
    }
    cout<<tot<<endl;
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
/*
2 4 6 8 10
3 6 9

*/