#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int check_bit(unsigned int n, unsigned int k)
{
    return (n >> k) & 1;
}
int set_bit(int n, int k)
{
    if(check_bit(n,k) == 0){
        n ^= 1 << k;
    }
    return n;
}
int unset_bit(int n, int k){
    if(check_bit(n,k) == 1){
        n ^= 1 << k;
    }
    return n;
}
void solve(){
    int n;
    cin>>n;
    int ans = 0;
    int res = 0;
    bool f = false;
    int x = -1, y = -1;
    for(int i = 30; i >= 0; i--){
        if(check_bit(n, i)){
            f = true;
        }
        else if(f and check_bit(n, i) == 0){
            x = i;
            break;
        }
    }
    for(int i = 0; i <= 30; i++){
        if(check_bit(n, i)){
            y = i;
            break;
        }
    }
    bool d = false;
    for(int b = y; b < x; b++){
        if(d == false){
            ans += set_bit(0, b);
            d = true;
            continue;
        }
        if(check_bit(n, b) == 0){
            ans += set_bit(0, b);
        }
    }
    cout<<ans<<endl;

}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}