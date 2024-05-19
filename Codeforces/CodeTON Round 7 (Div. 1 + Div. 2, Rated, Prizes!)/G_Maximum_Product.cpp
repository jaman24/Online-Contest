#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll l,r;
    cin>>l>>r;
    string ts = to_string(l);
    string rs = to_string(r);
    string ls;
    ll extra = rs.size() - ts.size();
    while(extra--){
        ls.push_back('0');
    }
    for(auto x:ts)ls.push_back(x);
    cout<<ls<<" "<<rs<<endl;
    ll mul = -1;
    string ans;
    for(int i = 0; i < rs.size(); i++){
        if(rs[i] > ls[i]){
            if(i != 0 and rs[i] == '1')continue;
            ll pre = 1;
            for(int j = 0; j < i; j++){
                pre *= (rs[j] - '0');
            }
            if(i == 0 and ((rs[i] - '0') - 1) == 0){

                }
            else pre *= (rs[i] - '0') - 1;

            ll rem = rs.size() - i - 1;
            if(rem)pre *= (rem * 9);

            for(int j = 0; j < i; j++){
                ans.push_back(rs[j]);
            }
            if(i == 0 and ((rs[i] - '0') - 1) == 0){

            }
            else ans.push_back(char((int)rs[i]) - 1);

            rem = rs.size() - i - 1;
            while(rem--)ans.push_back('9');
            break;
        }
    }
    if(ans.size())cout<<ans<<endl;
    else cout<<rs<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}