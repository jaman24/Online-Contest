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
bool pos(ll mid, ll k, vector<ll> &v)
{
    ll need = 0;
    for (auto x : v)
    {
        if (x < mid)
        {
            need += (mid - x);
        }
    }
    return need <= k;
}
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (auto &x : v)
    {
        cin >> x;
    }
    sort(all(v));
    ll l = 1, r = 1e13;
    while (l < r)
    {
        ll mid = (l + r + 1) / 2;
        if (pos(mid, k, v))
        {
            l = mid;
        }
        else
            r = mid - 1;
    }
    // cout << l << endl;
    ll ans = (l * n) - (n - 1);
    for (int i = 0; i < n; i++)
    {
        if (v[i] < l)
        {
            k -= (l - v[i]);
            v[i] = l;
        }
    }
    ll ex = 0;
    for (int i = 1; i < n; i++)
    {
        if (v[i] > l)
        {
            ex++;
        }
        else if (v[i] == l and k > 0)
        {
            ex++;
            k--;
        }
    }
    cout << ans + ex << endl;
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