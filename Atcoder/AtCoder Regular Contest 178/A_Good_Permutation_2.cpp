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
    vector<ll> v(m), ans(n);
    for (auto &x : v)
    {
        cin >> x;
    }
    sort(all(v));
    if (v[0] == 1 or v[m - 1] == n)
    {
        cout << "-1" << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        ans[i] = i + 1;
    }
    for (int i = 0; i < m; i++)
    {
        swap(ans[v[i] - 1], ans[v[i]]);
    }
    for (auto x : ans)
        cout << x << " ";
    cout << endl;
}
int main()
{
    FastIO;
    int cn = 1;
    // cin>>cn;
    while (cn--)
    {
        solve();
    }
    return 0;
}