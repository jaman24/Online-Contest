#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
double f(double a, vector<ll>& num){
    double ans = DBL_MIN, ans1 = DBL_MAX, sum = 0.0, sum1 = 0.0;
    for(auto x:num){
        if(sum + (x - a) <= 0){
            sum = 0;
        }
        else{
            sum += (x - a);
        }
        ans = max(ans, sum);
        if(sum1 + (x - a) >= 0){
            sum1 = 0;
        }
        else{
            sum1 += (x - a);
        }
        ans1 = min(ans1, sum1);
    }
    return max(abs(ans1), abs(ans));
}
double ternary_search(double l, double r, vector<ll>& num) {
    int x = 100;   //set the error limit here
    while (x--) {
        double m1 = l + (r - l) / 3;
        double m2 = r - (r - l) / 3;
        double f1 = f(m1, num);  //evaluates the function at m1
        double f2 = f(m2, num);  //evaluates the function at m2
        if (f1 > f2)
            l = m1;
        else if(f1 < f2)
            r = m2;
        else 
            l = m1, r = m2;
    }
    return f(l, num);  //return the maximum of f(x) in [l, r]
}
void solve(){
    ll n;
    cin>>n;
    vector<ll> num(n);
    for(auto &x:num)cin>>x;
    double l = -10000.0, r = 10000.0;
    double ans = ternary_search(l, r, num);
    printf("%.6f\n", ans);
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
#ifdef LOCAL_DEFINE
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
    return 0;
}