#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>

void solve(){
    ll n;
    cin>>n;
    string a, b;
    cin>>a>>b;
    vector<int> v(n);
    if(a[0] == 'b' and b[0] == 'b')v[0] = 1;
    for(int i = 1; i < n; i++){
        if(a[i] == b[i] and a[i] == 'b'){
            v[i] = v[i-1] + 1;
        }
        else v[i] = v[i-1];
    }
    vector<int> pa, pc;
    for(int i = 0; i < n; i++){
        if(a[i] != b[i]){
            if(a[i] == 'b' or b[i] == 'b'){
                cout<<"No"<<endl;
                return;
            }
            if(a[i] == 'a'){
                pa.push_back(i);
            }
            else{
                pc.push_back(i);
            }
        }
    }
    if(pa.size() != pc.size()){
        cout<<"No"<<endl;
        return;
    }
    for(int i = 0; i < pa.size(); i++){
        if(pa[i] > pc[i]){
            cout<<"No"<<endl;
            return;
        }
        int pb = v[pc[i]];
        if(pa[i] > 0){
            pb -= v[pa[i] - 1];
        }
        if(pb <= 0){
            cout<<"No"<<endl;
            return;
        }
    }
    cout<<"Yes"<<endl;

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