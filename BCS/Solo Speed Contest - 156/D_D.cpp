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
vector<bool> vis(100009, false);
ll dfs(ll root, vector<vector<ll>> &adj)
{
    vis[root] = true;
    ll k = root;
    for (auto x : adj[root])
    {
        if (!vis[x])
            k = dfs(x, adj);
    }
    return k;
}
void solve()
{
    ll n;
    cin >> n;
    // vis.resize(n);
    // memset(vis, false, sizeof vis);
    vector<vector<ll>> adj(n);
    for (int i = 0; i < n - 1; i++)
    {
        ll x, y;
        cin >> x >> y;
        x--, y--;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    ll c = 0, d = 0;
    for (int i = 0; i < n; i++)
    {
        if (adj[i].size() > 2)
        {
            c++;
            d = i;
        }
        if (c > 1)
        {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
    vis[d] = true;

    vector<pair<ll, ll>> ans;
    for (auto x : adj[d])
    {

        if (!vis[x])
        {
            ll y = dfs(x, adj);
            ans.push_back({d, y});
        }
    }
    cout << ans.size() << endl;
    for (auto [x, y] : ans)
        cout << x + 1 << " " << y + 1 << endl;
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