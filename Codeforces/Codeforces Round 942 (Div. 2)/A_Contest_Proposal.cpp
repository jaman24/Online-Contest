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
    vector<ll> v(n);
    for (auto &x : v)
        cin >> x;
    ll ans = 0, j = 0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (j < n - ans and v[j] > x)
        {
            ans++;
            continue;
        }

        if (j >= n - ans)
            ans++;
        j++;
    }
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