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
    ll n, k;
    cin >> n >> k;
    set<string> st;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        ll c = 0;
        for (auto x : s)
            if (x == '1')
                c++;
        if (c == 1)
            st.insert(s);
    }
    if (st.size() == k)
    {
        cout << "YES" << endl;
    }
    else
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