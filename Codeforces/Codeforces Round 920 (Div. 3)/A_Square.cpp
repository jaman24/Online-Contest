#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll const MOD = 998244353;

ll power(ll val)
{
    ll res = 1;
    for (int i = 1; i <= val; i++)
    {
        res = (res * 10) % MOD;
    }
    return res;
}

void test_case()
{
    ll n;
    cin >> n;
    ll temp = n;
    if (n < 10)
    {
        cout << (n * (n + 1)) / 2 << "\n";
        return;
    }
    int cnt = 0;
    while (temp > 0)
    {
        temp = temp / 10;
        cnt++;
    }
    __int128_t x = n - power(cnt - 1) + 1;
    // cout << x << " " << pow(10, cnt - 1) << "\n";
    ll res = ((x * (x + 1)) / 2) % MOD;
    ll store = 0;
    for (int i = 1; i < cnt; i++)
    {
        ll take = power(i) - 1 - store;
        res = (res + ((take * (take + 1)) / 2) % MOD) % MOD;
        store = power(i) - 1;
        // cout<<take<<endl;
    }
    // cout << power(1) << "\n";
    cout << res << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    for (int cs = 1; cs <= t; cs++)
    {
        // cout << "Case " << cs << ": ";
        test_case();
    }

    return 0;
}