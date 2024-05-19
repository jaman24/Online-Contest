#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void print(string s, int i, string t){
    if(i >= s.size())return;
    cout<<t<<endl;
    print(s, i + 1, t + s[i]);
    print(s, i + 1, t);

}
void solve(){
    string s;
    cin>>s;
    print(s, 0, "");
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}