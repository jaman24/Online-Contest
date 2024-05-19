#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll=long long;
map<ll,ll>dp;

long long f(ll N)
{
    if(dp.find(N) != dp.end())return dp[N];
    return dp[N]=f((N>>1LL))+f(((N + 1)>>1LL))+ N;
}

int main()
{
  optimize();
  ll N;
  cin >> N;
  dp[0]=0;
  dp[1]=0;

  cout <<f(N) << endl;

}