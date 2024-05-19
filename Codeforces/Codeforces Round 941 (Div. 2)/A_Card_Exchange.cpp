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
    ll n, k;
    cin >> n >> k;
    vector<ll> v;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    for (auto [x, y] : mp)
    {
        v.push_back(y);
    }
    sort(all(v));
    ll ans = 0, rem = 0;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        v[i] += rem;
        if (v[i] >= k)
        {
            rem = k - 1;
        }
        else
        {
            rem = 0;
            ans += v[i];
        }
    }
    ans += rem;
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