#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(), x.end()
#define FastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
int main()
{
    FastIO;
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
    }
    cout << "{h:";
    for (int i = 1; i <= n; i++)
    {
        cout << i;
        if (i != n)
            cout << ",";
    }
    cout << "}" << endl;
    return 0;
}