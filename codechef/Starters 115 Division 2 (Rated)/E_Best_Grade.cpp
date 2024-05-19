#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
double MID;
bool cmp(pair<double,double>& f, pair<double,double>& s){
    return f.first - (f.second * MID) > s.first - (s.second * MID);
}
bool pos(double mid, vector<pair<double, double>>& v, int d){
    MID = mid/100;
    sort(v.begin(), v.end(), cmp);
    double total = 0, get = 0;
    for(int i = 0; i < v.size()-d; i++){
        total += v[i].second;
        get += v[i].first;
    }
    double ans = (get/total) * 100;
    if(ans >= mid)return true;
    return false;
}
void solve(){
    int n,d;
    cin>>n>>d;
    vector<pair<double, double>> v(n);
    for(int i = 0; i < n; i++){
        ll x,y;
        cin>>x>>y;
        v[i] = {x, y};
    }
    double l = 0, r = 100;
    int q = 40;
    while (q--)
    {
        double mid = (l+r)/2;
        if(pos(mid, v, d)){
            l = mid;
        }
        else{
            r = mid;
        }
    }
    cout<<setprecision(10)<<l<<endl;
    
}
int main(){
    int cn = 1, cs = 1;
    cin>>cn;
    while(cn--){
        cout<<"Case "<<cs++<<": ";
        solve();
    }
    return 0;
}
/*
4
3 3
3 5 / 2 5
30 60
50 100

3 + 9 / 93 = 3/3 + 9/90 + .....+ = mi;
3/3mi + 9/90mi .. = 1;
3/93 + 9/93 + .....+ x/93 - mi = 0;

(3+9)/93 = mi;
12 = 93mi;
12 - 93mi = 0;


x + 93 >= 93;
double = mid; n-k ta merk pos(mid);
l = 1, r = 2;
mid = 1.5;
l < r
mid = 1.75;
l < r
2+3
(p1 + p2 + p3)/(m1 + m2 + m3) = ans;
p1 + p2 + p3 = ans*m1 + ans*m2 + ans*m3;
p1-ans*m1 + p2-ans*m2 + p3-ans*m3 = 0

*/