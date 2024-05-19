#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,m,k;
    cin>>n>>m>>k;
    set<int> a, b;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        a.insert(x);
    }
    for(int i = 0; i < m; i++){
        int x;
        cin>>x;
        b.insert(x);
    }
    int aa = 0, bb = 0, com = 0;
    for(int i = 1; i <= k ; i++){
        if(a.find(i) != a.end() and b.find(i) != b.end())com++;
        else if(a.find(i) != a.end())aa++;
        else if(b.find(i) != b.end())bb++;
        else{
            cout<<"No"<<endl;
            return;
        }
    }
    int h = k/2;
    if(aa+com < h or bb+com < h){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
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