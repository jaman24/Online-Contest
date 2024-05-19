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
    ll n, k, q;
    cin >> n >> k >> q;
    vector<ll> v(k + 1);
    v[0] = 0;
    for (int i = 1; i <= k; i++)
    {
        cin >> v[i];
    }
    vector<ll> t(k + 1);
    t[0] = 0;
    for (int i = 1; i <= k; i++)
    {
        cin >> t[i];
    }
    while (q--)
    {
        ll x;
        cin >> x;
        ll l = 0, r = k;
        while (l < r)
        {
            ll mid = (l + r + 1) / 2;
            if (v[mid] <= x)
            {
                l = mid;
            }
            else
                r = mid - 1;
        }

        if (v[l] == x)
        {
            cout << t[l] << " ";
        }
        else
        {
            ll dis = v[l + 1] - v[l];
            ll time = t[l + 1] - t[l];
            ll need = x - v[l];
            ll rest = (time * need) / dis;
            cout << rest + t[l] << " ";
        }
    }
    cout << endl;
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