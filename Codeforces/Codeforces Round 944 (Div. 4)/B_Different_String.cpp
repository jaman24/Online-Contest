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
    string s;
    cin >> s;
    string t = s;
    sort(all(s));
    if (s[0] == s[s.size() - 1])
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        if (s == t)
        {
            swap(s[0], s[s.size() - 1]);
            cout << s << endl;
        }
        else
            cout << s << endl;
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