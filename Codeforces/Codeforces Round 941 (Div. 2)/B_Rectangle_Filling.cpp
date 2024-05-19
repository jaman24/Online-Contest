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
    ll n, m;
    cin >> n >> m;
    string s[n];
    for (auto &x : s)
        cin >> x;
    if (s[0][0] == s[n - 1][m - 1] or s[0][m - 1] == s[n - 1][0])
    {
        cout << "YES" << endl;
        return;
    }
    bool up[2], dw[2], le[2], ri[2];
    up[0] = up[1] = false;
    dw[0] = dw[1] = false;
    le[0] = le[1] = false;
    ri[0] = ri[1] = false;
    for (int i = 0; i < m; i++)
    {
        if (s[0][i] == 'W')
        {
            up[0] = true;
        }
        else
            up[1] = true;
    }
    for (int i = 0; i < m; i++)
    {
        if (s[n - 1][i] == 'W')
        {
            dw[0] = true;
        }
        else
            dw[1] = true;
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i][0] == 'W')
        {
            le[0] = true;
        }
        else
            le[1] = true;
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i][m - 1] == 'W')
        {
            ri[0] = true;
        }
        else
            ri[1] = true;
    }
    if (s[0][0] == 'W')
    {
        if ((up[1] and le[1]))
        {
            cout << "YES" << endl;
            return;
        }
    }
    else
    {
        if ((up[0] and le[0]))
        {
            cout << "YES" << endl;
            return;
        }
    }
    if (s[n - 1][m - 1] == 'W')
    {
        if (dw[1] and ri[1])
        {
            cout << "YES" << endl;
            return;
        }
    }
    else
    {
        if (dw[0] and ri[0])
        {
            cout << "YES" << endl;
            return;
        }
    }
    if (s[0][m - 1] == 'W')
    {
        if (up[1] and ri[1])
        {
            cout << "YES" << endl;
            return;
        }
    }
    else
    {
        if (up[0] and ri[0])
        {
            cout << "YES" << endl;
            return;
        }
    }
    if (s[n - 1][0] == 'W')
    {
        if (le[1] and dw[1])
        {
            cout << "YES" << endl;
            return;
        }
    }
    else
    {
        if (le[0] and dw[0])
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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