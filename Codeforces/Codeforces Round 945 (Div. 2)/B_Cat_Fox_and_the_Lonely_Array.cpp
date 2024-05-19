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
int check_bit(unsigned int n, unsigned int k)
{
    return (n >> k) & 1;
}

int bit[100010][21] = {0};
bool pos(ll k, ll n)
{

    for (int b = 0; b < 20; b++)
    {
        bool p = false, q = false;
        for (int i = k - 1; i < n; i++)
        {
            ll tot = bit[i][b];
            if (i - k >= 0)
                tot -= bit[i - k][b];
            if (tot)
                p = true;
            else
                q = true;
            if (p and q)
                return false;
        }
        if (p and q)
            return false;
    }

    return true;
}
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll mx = 0;
    for (auto &x : v)
    {
        cin >> x;
        mx = max(mx, x);
    }
    for (int i = 0; i < n; i++)
    {
        for (int b = 0; b < 20; b++)
        {
            bit[i][b] = check_bit(v[i], b);
        }
    }
    for (int i = 0; i < 20; i++)
    {
        for (int j = 1; j < n; j++)
        {
            bit[j][i] += bit[j - 1][i];
        }
    }
    ll l = 1, r = n;
    while (l < r)
    {
        ll mid = (l + r) / 2;
        // cout << mid << " ";
        if (pos(mid, n))
        {
            r = mid;
        }
        else
            l = mid + 1;
    }
    cout << r << endl;
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