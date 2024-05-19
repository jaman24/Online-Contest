#include <bits/stdc++.h>
using namespace std;
#ifdef LOCAL
// #define cerr cout
#include "algo/debug.h"
#else
#define deb(...) 30
#endif
#define ll long long
#define int long long
int n, k;

int32_t main() // 1 2 3 4 5
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    vector<int> v(n), v1, v2;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    unordered_map<ll, ll> m;
    for (int i = 0; i < n / 2; i++)
        v1.push_back(v[i]);
    for (int i = n / 2; i < n; i++)
        v2.push_back(v[i]);
    for (int mask = 0; mask < (1ll << v1.size()); mask++)
    {
        ll s = 0;
        for (int i = 0; i < v1.size(); i++)
        {
            if ((mask >> i) & 1)
                s += v[i];
        }
        // cout << s << ' ';
        m[s]++;
    }
    ll ans = 0;
    for (int mask = 0; mask < (1ll << v2.size()); mask++)
    {
        ll s = 0;
        for (int i = 0; i < v2.size(); i++)
        {
            if ((mask >> i) & 1)
                s += v2[i];
        }
        if ((k - s) < 0)
            continue;
        if (m.find(k - s) != m.end())
            ans+=m[k - s];
    }
    cout << ans << '\n';
    return 0;
}