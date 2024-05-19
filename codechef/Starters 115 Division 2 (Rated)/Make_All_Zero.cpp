#include<bits/stdc++.h>

using namespace std;

const int N = 2e5 + 9;

const long long int inf = 1e18 + 9;



#define int long long



int arr[N], minimum[N];

std::map<int, vector<int>> mp;

int32_t main()

{

  //cout << INT_MAX;

  ios_base::sync_with_stdio(false);

  cin.tie(NULL);

  int tc = 1, cs = 0; cin >> tc;

  while(tc--)

  {

    int n, x, sub = 0, cnt = 0, mn = inf; cin >> n;

    for (int i = 0; i < n; ++i)

    {

      cin >> arr[i];

      mn = min(mn, arr[i]);

      mp[arr[i]].push_back(i);

      minimum[i] = mn;

    }

    for(int i = n - 1; i >= 0; i--)

    {

      if(minimum[i] == arr[i])

      {

        int no_of_count = 0;

        auto it = lower_bound(mp[arr[i]].begin(), mp[arr[i]].end(), i);

        no_of_count = it - mp[arr[i]].begin();

        no_of_count++;

        if(no_of_count >= (arr[i] - sub))

        {

          cnt += (arr[i] - sub);

          sub = arr[i];

        } 

        else cnt++;

      }

      else cnt++;

    }

    cout << cnt << endl;

    mp.clear();

  }

}