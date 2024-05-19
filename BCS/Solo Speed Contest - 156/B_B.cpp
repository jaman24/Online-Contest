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
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll c = 0, d = 0;
    for (auto x : s)
    {
        if (x == '1')
            c++;
        else
            d++;
    }
    if (c > d)
        swap(c, d);
    ll ans = c;
    ans += min(d, c + 1);
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