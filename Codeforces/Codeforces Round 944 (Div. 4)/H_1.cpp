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
vector<ll> c(505);
int v[3][505];
int dp[505][2];
bool cal(ll i, int k, ll n, vector<vector<pair<int, int>>> &adj)
{
    if (i >= n)
    {
        return true;
    }
    if (dp[i][k] != 0)
    {
        return dp[i][k];
    }
    bool f = true;
    for (auto [x, y] : adj[i])
    {
        if (k)
        {
            if (v[x][y] < 0)
            {
                c[y]++;
            }
        }
        else
        {
            if (v[x][y] > 0)
            {
                c[y]++;
            }
        }
        if (c[y] > 1)
            f = false;
    }
    if (f)
        dp[i][k] = (cal(i + 1, 0, n, adj) or cal(i + 1, 1, n, adj));
    for (auto [x, y] : adj[i])
    {
        if (k)
        {
            if (v[x][y] < 0)
            {
                c[y]--;
            }
        }
        else
        {
            if (v[x][y] > 0)
            {
                c[y]--;
            }
        }
    }

    return dp[i][k];
}
void solve()
{
    ll n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = dp[i][1] = 0;
        c[i] = 0;
    }
    vector<vector<pair<int, int>>> adj(n);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
            ll x = abs(v[i][j]) - 1;
            adj[x].push_back({i, j});
        }
    }
    if (cal(0, 0, n, adj) or cal(0, 1, n, adj))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << c[i] << " ";
    // }
    // cout << endl;
    // cout << dp[n - 1][0] << " " << dp[n - 1][1] << endl;
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