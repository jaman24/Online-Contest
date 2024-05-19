#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;
#define all(x) x.begin(), x.end()
#define FastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define PII pair<int, int>

void solve()
{
    ll x, y, x1, y1;
    cin >> x >> y >> x1 >> y1;
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll ans = (abs(x - x1) * abs(y - y1));
    // cout << ans << endl;
    ll ans1 = (abs(a - c) * abs(b - d));
    // cout << ans1 << endl;
    if ((x <= a and a <= x1 and y <= b and b <= y1) and (x <= c and c <= x1 and y <= d and d <= y1))
    {
        ans1 = 0;
    }
    else if ((x <= a and a <= x1 and y <= b and b <= y1))
    {
        ll p = min(x1, c), q = min(y1, d);
        ans1 -= (abs(a - p) * abs(b - q));
    }
    else if ((x <= c and c <= x1 and y <= d and d <= y1))
    {
        ll p = max(x, a), q = max(b, y);
        ans1 -= (abs(c - p) * abs(d - q));
    }
    cout << ans + ans1 << endl;
}
int main()
{
    FastIO;
    int cn = 1;
    cin >> cn;
    while (cn--)
    {
        solve();
    }
    return 0;
}