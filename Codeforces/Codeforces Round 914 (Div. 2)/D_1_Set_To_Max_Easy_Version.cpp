#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n;
    cin>>n;
    set<ll> st;
    vector<ll> a(n),b(n);
    map<ll,vector<ll>> mp;
    for(auto &x:a){
        cin>>x;
    }
    for(int i = 0; i < n; i++){
        ll x;
        cin>>x;
        b[i] = x;
        st.insert(x);
        mp[x].push_back(i);
    }
    for(int i = 0; i < n; i++){
        if(a[i] > b[i]){
            cout<<"NO"<<endl;
            return;
        }
    }

    for(auto num:st){
        int l = -1, r = -1;
        for(auto x:mp[num]){
            if(x <= r)continue;
            bool k = false;
            l = r = x;
            if(a[x] == num){
                k = true;
                continue;
            }

            
            while(r+1 < n and b[r+1] >= num and a[r+1] <= num){
                r++;
                if(a[r] == num){
                    k = true;
                    break;
                }
            }
            if(k == true)continue;

            while(l - 1 >= 0 and b[l-1] >= num and a[l-1] <= num){
                l--;
                if(a[l] == num){
                    k = true;
                    break;
                }
            }
            
            if(k == false){
                cout<<"NO"<<endl;
                return;
            }

        }
    }
    cout<<"YES"<<endl;
    
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}
// 1 1 5 1 3
// 3 2 5 2 5