#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
double f(double t, vector<ll>& s, vector<ll>& d){
    double mx = DBL_MIN;
    double mn = DBL_MAX;
    for(int i = 0; i < s.size(); i++){
        double pt = (double)d[i] + (s[i] * t);
        mx = max(mx, pt);
        mn = min(mn, pt);
    }
    return mx - mn;
}
double ternary_search(double l, double r, vector<ll>& s, vector<ll>& d) {
    double eps = 1e-9;  //set the error limit here
    while (r - l > eps) {
        double m1 = l + (r - l)/3;
        double m2 = r - (r - l)/3;
        double f1 = f(m1, s, d);  //evaluates the function at m1
        double f2 = f(m2, s, d);  //evaluates the function at m2
        if (f1 > f2){
            l = m1;
        }
        else if(f1 < f2){
            r = m2;
        }
        else{
            l = m1;
            r = m2;
        }
    }
    return f(l, s, d);  //return the maximum of f(x) in [l, r]
}
void solve(){
    ll n, k;
    cin>>n>>k;
    vector<ll> s(n), d(n);
    for(int i = 0; i < n; i++)cin>>s[i]>>d[i];
    double ans = ternary_search(0, k, s, d);
    printf("%.6f", ans);
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}