#include <bits/stdc++.h>
#define ll long long

using namespace std;

void test_case()
{
  ll n, q;
  cin >> n >> q;
  vector<int> v(n);

  for (int i = 0; i < n; i++)
    cin >> v[i];

  while (q--)
  {
    ll h, y;
    cin >> h >> y;
    v[h] = y;

    // Create a new vector 'result' to store the modified elements.
    vector<int> result;
    result.push_back(v[0]);

    for (int i = 1; i < n; i++)
    {
      // If the current element is different from the previous one, add it to 'result'.
      if (v[i] != v[i - 1])
      {
        result.push_back(v[i]);
      }
    }

    n = result.size();
    v = result;

    cout << n << "\n";
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tc = 1;
  cin >> tc;
  for (int i = 1; i <= tc; i++)
  {
    cout << "Case " << i << ":\n";
    test_case();
  }

  return 0;
}
