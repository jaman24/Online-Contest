#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
double distance(int p, int q, int p1, int q1) 
{ 
    return sqrt(pow(p1 - p, 2) + pow(q1 - q, 2) * 1.0); 
} 
bool circle(double r1, int x1,int y1, int x2, int y2)
{
    double d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    if (d <= r1 + r1) {
        return true;
    }
    return false;
}
bool check(double mid, int x1, int y1, int x2, int y2, int px, int py){
    if(circle(mid,x1,y1,x2,y2) and (distance(0,0,x1,y1) <= mid or distance(0,0,x2,y2) <= mid) and (distance(px,py,x1,y1) <= mid or distance(px,py,x2,y2) <= mid)){
        return true;
    }
    if((distance(0,0,x1,y1) <= mid and distance(px,py,x1,y1) <= mid))return true;
    if((distance(0,0,x2,y2) <= mid and distance(px,py,x2,y2) <= mid)) return true;
    return false;
}
void solve(){
    int px,py,x1,y1,x2,y2;
    cin>>px>>py>>x1>>y1>>x2>>y2;
    long double l = 0.0000000001, r = 1e9 * 1.0;
    while(r - l > 0.00000000001){
        double mid = (l + r)/2;
        if(check(mid,x1,y1,x2,y2,px,py)){
            r = mid;
        }
        else{
            l = mid;
        }
    }
      cout << fixed << setprecision(10)<<l<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}