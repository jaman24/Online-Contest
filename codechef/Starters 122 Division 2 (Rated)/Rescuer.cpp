#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
double getd(double x1, double y1, double x2, double y2, double v)
{
    double dx = x1 - x2;
    double dy = y1 - y2;
    return sqrt(dx*dx + dy*dy) / (double)v;
} 
double getTime(double yCrossingPoint)
{
}
double f(double x, double v1, double v2, double x1, double x2, double y1, double y2){
    return getd(x1, y1, x, 0, v1) + getd(x, 0, x2, y2, v2);
}
double ternary_search(double l, double r, double v1, double v2, double x1, double x2, double y1, double y2) {
    double eps = 1e-9;   //set the error limit here
    while (r - l > eps) {
        double m1 = l + (r - l) / 3.0;
        double m2 = r - (r - l) / 3.0;
        double f1 = f(m1, v1, v2, x1, x2, y1, y2);  //evaluates the function at m1
        double f2 = f(m2, v1, v2, x1, x2, y1, y2);  //evaluates the function at m2
        if (f1 > f2){
            l = m1+1;
        }
        else{
            r = m2-1;
        }
    }
    return f(l, v1, v2, x1, x2, y1, y2);  //return the maximum of f(x) in [l, r]
}
void solve(){
    ll x1, y1, x2, y2, v1, v2;
    cin>>x1>>y1>>x2>>y2>>v1>>v2;
    if(x1 > x2) swap(x1, x2);
    double l = x1;
    double r = x2;
    double ans = ternary_search(l, r, v1, v2, x1, x2, y1, y2);
    printf("%.5f\n", ans);
}
int main(){
    ios_base::sync_with_stdio(0);
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}