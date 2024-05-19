#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 202206214218227;

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll ans = 0;
    for (ll i = 1; i <= m; i++)
    {
        ans += ((n + i) / (i * i));
    }
    cout << ans - 1 << endl;
}
int main()
{
    int cn = 1;
    cin >> cn;
    while (cn--)
    {
        solve();
    }
    return 0;
}