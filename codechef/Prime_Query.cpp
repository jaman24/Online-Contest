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
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (auto &x : v)
        cin >> x;
    vector<ll> one(n, 0), two(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
        {
            one[i] = 1;
        }
        if (v[i] == 2)
        {
            two[i] = 1;
        }
    }
    for (int i = 1; i < n; i++)
    {
        one[i] += one[i - 1];
    }
    for (int i = 1; i < n; i++)
    {
        two[i] += two[i - 1];
    }
    ll q;
    cin >> q;
    while (q--)
    {
        ll l, r, k;
        cin >> l >> r >> k;
        l--, r--;
        ll on = one[r], tw = two[r];
        if (l > 0)
        {
            on -= one[l - 1];
            tw -= two[l - 1];
        }
        ll tot = r - l + 1;
        ll rem = tot - (on + tw);
        if (rem <= k)
        {
            k -= rem;
        }
        else
        {
            rem = k;
            k = 0;
        }
        if (on < tw)
            swap(on, tw);

        if (tw + rem <= on)
        {
            tw += rem;
        }
        else
        {
            ll x = on + tw + rem;
            on = (x / 2) + x % 2;
            tw = x / 2;
        }
        if (k > 0 and on - tw > 1)
        {
            if (on < tw)
                swap(on, tw);
            ll mx = (on - tw) / 2;
            if (mx <= k)
            {
                on -= mx;
                tw += mx;
            }
            else
            {
                on -= k;
                tw += k;
            }
        }
        cout << on * tw << endl;
    }
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