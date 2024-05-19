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
    ll n, m;
    cin >> n >> m;

    vector<ll> v(n), vv(m);
    for (auto &x : v)
        cin >> x;
    for (auto &x : vv)
        cin >> x;
    if (n < 4 or m < 4 or m + n < 11)
    {
        cout << "-1" << endl;
        return;
    }
    sort(all(v));
    sort(all(vv));
    reverse(all(v));
    reverse(all(vv));
    ll ans = 0;
    for (int i = 0; i < 4; i++)
    {
        ans += vv[i];
    }
    for (int i = 0; i < 4; i++)
    {
        ans += v[i];
    }
    vector<ll> s;
    for (int i = 4; i < n; i++)
    {
        s.push_back(v[i]);
    }
    for (int i = 4; i < m; i++)
    {
        s.push_back(vv[i]);
    }
    sort(all(s));
    reverse(all(s));
    for (int i = 0; i < 3; i++)
        ans += s[i];
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