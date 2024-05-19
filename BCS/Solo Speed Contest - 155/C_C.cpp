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
    map<ll, ll> mp;
    bool f = false;
    for (int i = 0; i < m; i++)
    {
        ll x, y;
        cin >> x >> y;
        x--;
        if (mp.find(x) == mp.end())
        {
            mp[x] = y;
        }
        else
        {
            if (mp[x] != y)
            {
                f = true;
            }
        }
    }
    if (f or n < mp.size())
    {
        cout << -1 << endl;
        return;
    }
    if (n == 1)
    {
        if (mp.find(0) != mp.end())
        {
            cout << mp[0] << endl;
        }
        else
            cout << 0 << endl;
        return;
    }
    vector<ll> ans(n);
    for (int i = 0; i < n; i++)
    {
        if (mp.find(i) != mp.end())
            ans[i] = mp[i];
        else
        {
            if (i == 0)
            {
                ans[i] = 1;
            }
            else
                ans[i] = 0;
        }
    }
    if (ans[0] == 0)
    {
        cout << -1 << endl;
        return;
    }
    for (auto x : ans)
        cout << x;
    cout << endl;
}
int main()
{
    FastIO;
    int cn = 1;
    // cin >> cn;
    while (cn--)
    {
        solve();
    }
    return 0;
}