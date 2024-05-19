#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    map<int, vector<string>> mp;
    for(int i = 0; i < n; i++){
        int p;
        string s;
        cin>>s;
        cin>>p;
        int sum = p * 10;
        vector<int> v(6);
        for(auto &x:v)cin>>x;
        sort(v.begin(), v.end());
        for(int i = 1; i < 5; i++)sum += v[i];
        mp[sum].push_back(s);
    }
    int c = 0;

    for (auto i = mp.rbegin(); i != mp.rend(); ++i) { 
        // cout << i->first << " = " << i->second << endl;
        if(c <= 2){
            for(auto x : i->second){
                cout<<x<<" "<<i->first<<endl;
                c++;
                if(c >= 1000)break;
            }
        }
        if(c >= 1000)break;
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