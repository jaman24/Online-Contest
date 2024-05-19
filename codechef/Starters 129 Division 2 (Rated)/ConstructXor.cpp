#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define PII pair<int, int>

void solve(){
    ll n, s;
    cin>>n>>s;
    if(s%n == 0){
        for(int i = 0; i < n; i++){
            cout<<s/n<<" ";
        
        }
        cout<<endl;
        return;
    }
    for(int k = 0; k < 31; k++){
        for(int i = 2; i < n; i+=2){
            ll rem = n - i;
            ll sum = s - (pow(2, k) * i);
            if(sum <= 0)break;
            if(rem%2){
                rem += 1;
                if(sum % rem == 0 and sum/rem > 0){
                    for(int j = 0; j < i-1; j++){
                        cout<<pow(2, k)<<" ";
                    }
                    cout<<(sum/rem)+pow(2, k)<<" ";
                    for(int j = 0; j < rem-1; j++){
                        cout<<sum/rem<<" ";
                    }
                    cout<<endl;
                    return;
                }
            }
            else{
                if(sum%rem == 0 and sum/rem>0){
                    for(int j = 0; j < i; j++){
                        cout<<pow(2, k)<<" ";
                    }
                    for(int j = 0; j < rem; j++){
                        cout<<sum/rem<<" ";
                    }
                    cout<<endl;
                    return;
                }
            }
        }
    }
    cout<<-1<<endl;
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