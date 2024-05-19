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
    vector<ll> c(6);
    for (auto &x : c)
        cin >> x;
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (auto &x : v)
        cin >> x;
    sort(all(v));
    reverse(all(v));
    for (auto x : v)
    {
        ll t = x, y;
        y = t / 500;
        if (c[5] >= y)
        {
            c[5] -= y;
            t -= (y * 500);
        }
        else
        {
            t -= (c[5] * 500);
            c[5] = 0;
        }

        y = t / 100;
        if (c[4] >= y)
        {
            c[4] -= y;
            t -= (y * 100);
        }
        else
        {
            t -= (c[4] * 100);
            c[4] = 0;
        }

        y = t / 50;
        if (c[3] >= y)
        {
            c[3] -= y;
            t -= (y * 50);
        }
        else
        {
            t -= (c[3] * 50);
            c[3] = 0;
        }

        y = t / 10;
        if (c[2] >= y)
        {
            c[2] -= y;
            t -= (y * 10);
        }
        else
        {
            t -= (c[2] * 10);
            c[2] = 0;
        }

        y = t / 5;
        if (c[1] >= y)
        {
            c[1] -= y;
            t -= (y * 5);
        }
        else
        {
            t -= (c[1] * 5);
            c[1] = 0;
        }

        y = t / 1;
        if (c[0] >= y)
        {
            c[0] -= y;
            t -= (y * 1);
        }
        else
        {
            t -= (c[0] * 1);
            c[0] = 0;
        }
        if (t > 0)
        {
            cout << "No" << endl;
            return;
        }
    }

    cout << "Yes" << endl;
}
int main()
{
    FastIO;
    int cn = 1;
    // cin>>cn;
    while (cn--)
    {
        solve();
    }
    return 0;
}