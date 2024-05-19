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
#define PII pair<int, pair<int, int>>
class Compare
{
public:
    bool operator()(PII below, PII above)
    {
        return below.first > above.first;
    }
};
int dx[4] = {1, 0, 0, -1};
int dy[4] = {0, -1, 1, 0};
bool val(int x, int y, int n)
{
    return x >= 0 and y >= 0 and x < n and y < n;
}
void solve()
{
    ll n;
    cin >> n;
    string s[n];
    for (auto &x : s)
        cin >> x;
    priority_queue<PII, vector<PII>, Compare> ds;
    vector<vector<int>> cost(n, vector<int>(n, INT_MAX));
    vector<vector<pair<int, int>>> root(n, vector<pair<int, int>>(n));

    cost[0][0] = 0;
    root[0][0] = {-1, -1};
    ds.push({0, {0, 0}});
    while (!ds.empty())
    {
        ll x = ds.top().second.first, y = ds.top().second.second;
        ds.pop();
        // cout << x << " " << y << " " << ds.top().first << endl;
        for (int i = 0; i < 4; i++)
        {
            int nx = dx[i] + x;
            int ny = dy[i] + y;
            if (val(nx, ny, n))
            {
                int tot = cost[x][y];
                if (s[nx][ny] != 'R')
                    tot += 1;
                if (tot < cost[nx][ny])
                {
                    cost[nx][ny] = tot;
                    root[nx][ny] = {x, y};
                    ds.push({tot, {nx, ny}});
                }
            }
        }
    }
    ll ans = cost[n - 1][n - 1];
    int p = n - 1, q = n - 1;
    pair<int, int> pp = {-1, -1};
    while (root[p][q] != pp)
    {
        if (s[p][q] != 'R')
            s[p][q] = 'P';
        int _p = root[p][q].first, _q = root[p][q].second;
        p = _p;
        q = _q;
    }
    // cout << ans << endl;
    while (ds.size())
        ds.pop();
    vector<vector<int>> cost1(n, vector<int>(n, INT_MAX));
    cost1[0][n - 1] = 0;
    ds.push({0, {0, n - 1}});
    while (!ds.empty())
    {
        ll x = ds.top().second.first, y = ds.top().second.second;
        ds.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = dx[i] + x;
            int ny = dy[i] + y;
            if (val(nx, ny, n))
            {
                int tot = cost1[x][y];
                if (s[nx][ny] != 'B' and s[nx][ny] != 'P')
                    tot += 1;
                if (tot < cost1[nx][ny])
                {
                    cost1[nx][ny] = tot;
                    ds.push({tot, {nx, ny}});
                }
            }
        }
    }
    cout << ans + cost1[n - 1][0] << endl;
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