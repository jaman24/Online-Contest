#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define sort(x) sort(all(x))
#define ulta(x) reverse(all(x))
#define get(x) getline(cin,x)
#define FastIO ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define pb push_back
#define pop pop_back
#define elif else if
typedef set<int> si;
typedef unsigned int ui;
typedef unsigned long long ull;
typedef long long int ll;
typedef double dl;
typedef vector<char>vc;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;

void test_case() {
  ll mod = 1000000007;
  ll n;
  cin>>n;
  n%=mod;
  ll a = ((n*(n+1))/2)%mod;
  ll b = pow(n%mod, n%mod) % mod;
  b %= mod;
  cout<<a<<" "<<b<<"\n";
}


int main() {
  FastIO
  int t = 1;
  cin >> t;

  for (int cs = 1; cs <= t; cs++) {
    //cout << "Case " << cs << ": ";
    test_case();
  }
  return 0;
}