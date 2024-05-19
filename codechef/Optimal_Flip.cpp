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
    ll ans = (n * (n + 1)) / 2;
    ll c = 0, mx = 0;
    vector<ll> odd;
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2)
        {
            c++;
        }
        else
        {
            odd.push_back(c);
            c = 0;
        }
    }
    odd.push_back(c);
    sort(all(odd));
    for (int i = 0; i < odd.size() - 1; i++)
    {
        ans -= (odd[i] * (odd[i] + 1)) / 2;
    }
    ll x = odd[odd.size() - 1];
    if (x > 0)
    {
        ll y = x / 2;
        x -= y;
        if (x < y)
        {
            swap(x, y);
        }
        x--;
        ans -= (x * (x + 1)) / 2;
        ans -= (y * (y + 1)) / 2;
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