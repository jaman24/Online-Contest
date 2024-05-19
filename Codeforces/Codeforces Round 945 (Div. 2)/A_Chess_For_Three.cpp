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
    ll a, b, c;
    cin >> a >> b >> c;
    ll s = a + b + c;
    if (s % 2)
    {
        cout << "-1" << endl;
        return;
    }
    ll ans = a;
    ll d = c - b;
    a -= d;
    ll x = 0;
    if (a > 0)
    {
        x = a / 2;
        if (a % 2)
            x++;
    }
    ans += (b - x);

    cout << ans << endl;
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