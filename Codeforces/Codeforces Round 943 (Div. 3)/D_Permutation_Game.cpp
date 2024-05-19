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
    ll n, k, a, b;
    cin >> n >> k >> a >> b;
    a--, b--;
    vector<ll> v(n), p(n);

    for (auto &x : p)
        cin >> x, x--;
    for (auto &x : v)
        cin >> x;

    vector<bool> vis(n, false);
    ll ans = 0, mxa = 0, c = 0, mxb = 0;
    while (vis[a] == false)
    {
        if (c > k)
            break;

        vis[a] = true;
        ll rem = k - c;
        ll tot = (rem * v[a]) + ans;
        if (mxa < tot)
        {
            mxa = tot;
        }
        ans += v[a];
        c++;
        a = p[a];
    }

    ans = 0, c = 0;
    for (auto x : vis)
        x = false;
    while (vis[b] == false)
    {
        if (c > k)
            break;
        vis[b] = true;
        ll rem = k - c;
        ll tot = (rem * v[b]) + ans;
        if (mxb < tot)
        {
            mxb = tot;
        }
        ans += v[b];
        c++;
        b = p[b];
    }
    if (mxa > mxb)
    {
        cout << "Bodya" << endl;
    }
    else if (mxa < mxb)
    {
        cout << "Sasha" << endl;
    }
    else
        cout << "Draw" << endl;
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