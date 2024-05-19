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
template <typename T>
vector<int> z_function(int n, const T &s)
{
    vector<int> z(n, n);
    int l = 0, r = 0;
    for (int i = 1; i < n; i++)
    {
        z[i] = (i > r ? 0 : min(r - i + 1, z[i - l]));
        while (i + z[i] < n and s[z[i]] == s[i + z[i]])
        {
            z[i]++;
        }
        if (i + z[i] - 1 > r)
        {
            l = i;
            r = i + z[i] - 1;
        }
    }
    return z;
}

template <typename T>
vector<int> z_function(const T &s)
{
    return z_function((int)s.size(), s);
}
bool pos(ll m, vector<int> &v, ll l)
{
    int c = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] >= m)
        {
            i += m - 1;
            c++;
        }
    }
    return c >= l;
}
void solve()
{
    ll n, k, r1;
    cin >> n >> k >> r1;
    string s;
    cin >> s;
    vector<int> ans = z_function(s);
    int res = 0;
    int l = 0, r = n;
    while (l < r)
    {
        int mid = (l + r + 1) / 2;
        if (pos(mid, ans, k))
        {
            l = mid;
        }
        else
            r = mid - 1;
    }

    cout << l << endl;
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