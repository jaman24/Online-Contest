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
    ll k = n;
    ll a = n, b = 1, c = 1, d = n;
    bool f = true;
    cout << 1 << " " << 1 << endl;
    for (int i = 1; i < n - 2; i++)
    {
        cout << i + 1 << " " << 1 << endl;
    }
    if (n > 2)
    {
        cout << 1 << " " << n - 1 << endl;
    }
    cout << n << " " << n << endl;

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