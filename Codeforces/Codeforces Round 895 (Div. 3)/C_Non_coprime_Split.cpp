#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e9 + 7;
void solve(){
    ll l,r;
    cin>>l>>r;
    if(l<r){
        while(r%2)r--;
        if(r==2){
            cout<<-1<<endl;
            return;
        }
        cout<<r/2<<" "<<r/2<<endl;
        return;
    }
    if(l%2==0 and l!=2){
        cout<<l/2<<" "<<l/2<<endl;
        return;
    }
    else{
        for(int i=2;i*i<=l;i++){
            if(l%i==0){
                cout<<i<<" "<<l-i<<endl;
                return;
            }
        }
    }
    cout<<-1<<endl;

}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}