#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

void solve(){
    string s;
    cin>>s;
    string y = s.substr(0, 4);
    int yy = stoi(y);
    if(yy > 2019){
        cout<<"TBD"<<endl;
        return;
    }
    string m = s.substr(5, 2);
    int mm = stoi(m);
    if(mm > 4){
        cout<<"TBD"<<endl;
        return;
    }
    string d = s.substr(8, 2);
    int dd = stoi(d);
    if(dd > 30){
        cout<<"TBD"<<endl;
        return;
    }
    cout<<"Heisei"<<endl;
}
int main(){
    FastIO;
    int cn = 1;
    // cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}