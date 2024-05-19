#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    string s;
    cin>>s;
    stack<char> st;
    for(auto x:s){
        if(x == 'C' and st.size() >= 2){
            ll b = st.top();
            st.pop();
            ll a = st.top();
            st.pop();
            if(a == 'A' and b == 'B')continue;
            st.push(a);
            st.push(b);
            st.push(x);
        }
        else{
            st.push(x);
        }
    }
    vector<char> ans;
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    for(int i = ans.size()-1;i>=0;i--){
        cout<<ans[i];
    }
    cout<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}