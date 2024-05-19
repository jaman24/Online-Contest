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
vector<ll> ans(1e5 + 10);
// void cal()
// {
//     ans[1] = 8;
//     ll a = 8;
//     ll b = 4;
//     ll c = 4;
//     for (int i = 2; i < 1e5 + 5; i += 2)
//     {
//         ans[i] = ans[i - 1] + a;
//         ans[i + 1] = ans[i - 1] + b;
//         a += b;
//         b = a / 2;
//     }
// }
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 1; i <= n; i++)
    {
        ll ans = 0;
        for (int j = -1000; j <= 1000; j++)
        {
            for (int k = -1000; k <= 1000; k++)
            {
                ll d = (j * j) + (k * k);
                ll x = sqrt(d);
                if (i <= x and x < i + 1)
                    ans++;
            }
        }
        v[i] = ans;
        cout << i << " " << ans << endl;
    }
    for (int i = 1; i < n; i++)
    {
        cout << i << " " << v[i] - v[i - 1] << endl;
    }
}
int main()
{
    FastIO;
    int cn = 1;
    // cal();
    // cin >> cn;
    while (cn--)
    {
        solve();
    }
    return 0;
}