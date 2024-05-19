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
    string a, b;
    cin >> a >> b;
    ll c = -1, j = 0;
    for (int i = 0; i < n; i++)
    {
        while (j < m and b[j] != a[i])
        {
            j++;
        }
        if (j >= m)
        {
            c = i;
            break;
        }
        else
            j++;
    }
    if (c == -1)
    {
        cout << n << endl;
    }
    else
        cout << c << endl;
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