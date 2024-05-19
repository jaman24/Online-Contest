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
    string s;
    cin >> s;
    string ans = "";
    bool f = true;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (f and s[i] == '1')
        {
            for (int j = 0; j <= i; j++)
                ans += 'A';
            f = false;
        }
        if (!f and s[i] == '0')
        {
            for (int j = 0; j <= i; j++)
                ans += 'B';
            f = true;
        }
    }
    cout << ans.size() << endl;
    cout << ans << endl;
}
int main()
{
    FastIO;
    int cn = 1;
    // cin >> cn;
    while (cn--)
    {
        solve();
    }
    return 0;
}
canP