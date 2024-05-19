#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


void solve(){
    ll n;
    cin>>n;
    map<int, int> mp;
    while(n--){
        int t, v;
        cin>>t>>v;
        if(t == 1){
            mp[v]++;
        }
        else{
            map<int, int> mq = mp;
            vector<int> b;
            while(v){
                if(v%2)b.push_back(1);
                else b.push_back(0);
                v/=2;
            }
            int k = b.size();
            bool f = true;
            for(int i = k-1; i >= 0; i--){
                if(b[i] == 1){
                    int c = 1;
                    for(int j = i; j >= 0; j--){
                        if(mq.find(j) != mq.end()){
                            if(mq[j] >= c){
                                mq[j] -= c;
                                c = 0;
                                break;
                            }
                            else{
                                c -= mq[j];
                                mq[j] = 0;
                            }
                        }
                        c *= 2;
                    }
                    // cout<<i<<" "<<c<<endl;

                    if(c > 0){
                        f = false;
                        break;
                    }
                }
            }
            if(f)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
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