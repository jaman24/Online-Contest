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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a < b)
        swap(a, b);
    bool al = false, ar = false, bl = false, br = false;
    for (int i = a + 1; i <= 12; i++)
    {
        if (i == c)
        {
            al = true;
        }
        if (i == d)
        {
            bl = true;
        }
    }
    for (int i = b - 1; i >= 1; i--)
    {
        if (i == c)
        {
            al = true;
        }
        if (i == d)
        {
            bl = true;
        }
    }
    if (al and bl)
    {
        cout << "NO" << endl;
        return;
    }
    for (int i = b; i < a; i++)
    {
        if (i == c)
        {
            ar = true;
        }
        if (i == d)
            br = true;
    }
    if (ar and br)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
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