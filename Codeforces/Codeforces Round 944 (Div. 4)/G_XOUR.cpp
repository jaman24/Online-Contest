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
int set_bit(int n, int k)
{
    if (check_bit(n, k) == 0)
    {
        n ^= 1 << k;
    }
    return n;
}
int unset_bit(int n, int k)
{
    if (check_bit(n, k) == 1)
    {
        n ^= 1 << k;
    }
    return n;
}
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (auto &x : v)
        cin >> x;
    map<int, vector<int>> mp;
    for (int i = 0; i < n; i++)
    {
        ll x = v[i];
        if (check_bit(x, 0))
        {
            x = unset_bit(x, 0);
        }
        if (check_bit(x, 1))
        {
            x = unset_bit(x, 1);
        }
        mp[x].push_back(i);
    }
    for (auto [x, y] : mp)
    {
        vector<ll> temp(y.size());
        for (int i = 0; i < y.size(); i++)
        {
            temp[i] = v[y[i]];
        }
        sort(all(temp));
        for (int i = 0; i < y.size(); i++)
        {
            v[y[i]] = temp[i];
        }
    }

    for (auto x : v)
        cout << x << " ";
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