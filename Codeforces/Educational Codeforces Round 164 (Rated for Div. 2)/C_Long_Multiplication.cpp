#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>

void solve(){
    string x, y;
    cin>>x>>y;
    bool f = false;
    for(int i = 0; i < x.size(); i++){
        if(!f){
            if(x[i] - '0' > y[i] - '0'){
                f = true;
            }
            else if(x[i] - '0' < y[i] - '0'){
                f = true;
                swap(x[i], y[i]);
            }
            continue;
        }
        if(f and x[i] - '0' > y[i] - '0'){
            swap(x[i], y[i]);
        }
    }
    cout<<x<<endl<<y<<endl;

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