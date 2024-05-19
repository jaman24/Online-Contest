#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    int x = (n * n)/2;
    int y = (n * (n - 1))/2;
    if(n%2 == 0 and (n/2)%2){
        cout<<"-1"<<endl;
        return;
    }
    int ans[n+1][n+1];
    memset(ans, 0, sizeof ans);
    if(n%2 == 0){
        int od = 1, ev = 2;
        for(int i = 1; i < n; i++){
            for(int j = 1; j <= i; j++){
                ans[i][j] = od;
                od += 2;
            }
        }
        for(int j = 1; j <= x - y; j++){
            ans[n][j] = od;
            od += 2;
        }
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(ans[i][j] == 0){
                    ans[i][j] = ev;
                    ev += 2;
                }
            }
        }
    }
    else{
        int od = 3, ev = 2;
        ans[1][1] = 1;
        for(int i = 2; i <= n; i++){
            if(i % 2){
                for(int j = 1; j < i; j++){
                    ans[i][j] = od;
                    od += 2;
                    ans[j][i] = od;
                    od += 2;
                }
                ans[i][i] = ev;
                ev += 2;
            }
            else{
                for(int j = 1; j < i; j++){
                    ans[i][j] = ev;
                    ev += 2;
                    ans[j][i] = ev;
                    ev += 2;
                }
                ans[i][i] = ev;
                ev += 2;
            }
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;

}