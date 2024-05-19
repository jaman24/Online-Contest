#include<bits/stdc++.h>
using namespace std;
const int N = 200005;
const int L = 18;
int st[N][L];
int query(int l, int r){
    int len = r - l + 1;
    int k = 0;
    while((1 << (k + 1)) <= len)k++;
    // cout<< st[l][k] << " " << st[r - (1 << k) + 1][k] << endl;
    return min(st[l][k] , st[r - (1 << k) + 1][k]);
}
void solve(){
    int n, q;
    cin >> n >> q;
    int val[n];
    for(int i = 0; i < n; i++){
        cin>>val[i];
    }
    for(int i = 0; i < n; i++){
        st[i][0] = val[i];
    }
    for(int j = 1; j < L; j++){
        for(int i = 0; i + (1 << j) - 1 < n; i++){
            st[i][j] = min(st[i][j-1] , st[i + (1 << (j-1))][j-1]);
        }
    }
    while(q--){
        int l, r;
        cin >> l >> r;
        l-- , r--;
        cout<<query(l,r)<<endl;
    }

}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}