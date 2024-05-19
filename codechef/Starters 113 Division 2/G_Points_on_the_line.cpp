#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e9 + 10;

void test_case()
{
    ll n, d;
    cin >> n >> d;
    vector<ll> v(n);
    for (auto &i : v)
        cin >> i;
    ll mx = 0;
    sort(v.begin(), v.end());
    for (ll i = 0; i < n; i++)
    {
        for (ll j = i; j < n; j++)
        {
            if (abs(v[i] - v[j]) <= d)
            {
                mx = max(mx, j - i + 1);
            }
        }
    }
    
    cout << n - mx << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    //  cin.ignore();

    for (int cs = 1; cs <= t; cs++)
    {
        // cout << "Case " << cs << ": ";
        test_case();
    }

    return 0;
}
// 1 2 3 4 5