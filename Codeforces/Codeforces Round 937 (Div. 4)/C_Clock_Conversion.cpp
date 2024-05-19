#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>

void solve(){
    string s;
    cin>>s;
    int h = (s[0] - '0');
    h *= 10;
    h += (s[1] - '0');
    int m = s[3] - '0';
    m *= 10;
    m += s[4] - '0';
    if(h == 0){
        cout<<"12:"<<s[3]<<s[4]<<" AM"<<endl;
    }
    else if(h < 12){
        cout<<s<<" "<<"AM"<<endl;
    }
    else if(h == 12){
        cout<<s<<" "<<"PM"<<endl;
    }
    else{
        h -= 12;
        if(h >= 10){
            cout<<h<<":"<<s[3]<<s[4]<<" "<<"PM"<<endl;
        }
        else{
            cout<<"0"<<h<<":"<<s[3]<<s[4]<<" "<<"PM"<<endl;
        }
    }
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