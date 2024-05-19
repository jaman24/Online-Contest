#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
bool pos(ll mid, ll m, ll p, ll q){
    ll y = mid;
    ll x = (p+q) - mid;
    ll d = abs(x - 1) + abs(y - m);
    if(d < q)return false;
    return true;
}
bool pos1(ll mid, ll n, ll p, ll r){
    ll y = mid;
    ll x = (p+r) - mid;
    ll d = abs(x - n) + abs(y - 1);
    if(d > r)return false;
    return true;
}
void solve(){
    ll n, m;
    cin>>n>>m;
    
    cout<<"?"<<" "<<1<<" "<<1<<endl;
    ll p;
    cin>>p;
    cout<<"?"<<" "<<1<<" "<<m<<endl;
    ll q;
    cin>>q;
    cout<<'?'<<" "<<n<<" "<<1<<endl;
    ll r;
    cin>>r;

    int y = p + r - (n - 1);
	int x = 2 * p - y;
	int x1 = p + q - (m - 1);
	int y1 = 2 * p - x1;

    cout<<'?'<<" "<<x<<" "<<y<<endl;
    ll d;
    cin>>d;
    if(d == 0){
        cout<<"!"<<" "<<x<<" "<<y<<endl;
        return;
    }
    cout<<"!"<<" "<<x1<<" "<<y1<<endl;
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