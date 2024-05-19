#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void test_case()
{
    ll n, k;
    cin >> n >> k;

    ll mx_sum = n + n;
    vector<ll> v;

    ll i = k;
    while (i <= mx_sum)
    {
        v.push_back(i);
        i += k;
    }

    ll ans = 0, temp;
    for (ll i = 0; i < (ll)v.size(); i++)
    {
        if (v[i] <= n)
        {
            temp = v[i] - 1;
            ans += (temp / 2);
        }
        else
        {
            temp = n - (v[i] - n) + 1;
            ans += (temp / 2);
        }
    }

    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    for (int cs = 1; cs <= t; cs++)
    {
        // cout << "Case " << cs << ": ";
        test_case();
    }

    return 0;
}