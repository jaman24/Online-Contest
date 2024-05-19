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
    for (int i = 1; i < n; i++)
        cin >> v[i];
    vector<ll> ans(n);
    ans[0] = v[1] + 1;
    for (int i = 1; i < n - 1; i++)
    {
        ll m = v[i + 1] / ans[i - 1];
        // cout << v[i - 1] << " " << ans[i - 1] << endl;
        m++;
        ll num = m * ans[i - 1];
        num += v[i];
        ans[i] = num;
        ans[n - 1] = ans[n - 2] + v[n - 1];
    }
    ans[n - 1] = ans[n - 2] + v[n - 1];
    // cout << ans.size() << endl;
    // for (int i = 1; i < n; i++)
    // {
    //     cout << ans[i] % ans[i - 1] << " ";
    // }
    // cout << endl;
    for (auto x : ans)
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