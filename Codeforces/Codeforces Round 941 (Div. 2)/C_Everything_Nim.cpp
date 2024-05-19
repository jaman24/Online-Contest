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
    ll c = 0, d = 0;
    for (auto &x : v)
    {
        cin >> x;
    }
    sort(all(v));
    ll sum = 0;
    vector<ll> sw;
    for (int i = 0; i < n; i++)
    {
        // cout << v[i] << " ";
        if (sum + 1 == v[i])
        {
            sw.push_back(1);
        }
        if (sum + 1 < v[i])
        {
            sw.push_back(2);
        }
        if (sum <= v[i])
        {
            sum += (v[i] - sum);
        }
    }
    // cout << endl;
    // cout << c << " " << d << endl;
    // for (auto x : sw)
    //     cout << x << " ";
    // cout << endl;
    if (sw.size() == 0 or sw[0] == 2)
    {
        cout << "Alice" << endl;
        return;
    }
    ll i = 0;
    while (i < sw.size() and sw[i] == 1)
    {
        c++;
        i++;
    }
    if (c == sw.size())
    {
        if (c % 2 == 0)
        {
            cout << "Bob" << endl;
        }
        else
            cout << "Alice" << endl;
    }
    else
    {
        if (c % 2)
        {
            cout << "Bob" << endl;
        }
        else
            cout << "Alice" << endl;
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