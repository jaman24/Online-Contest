#include <bits/stdc++.h>
using namespace std;

#define uint unsigned int
#define uintll unsigned long long
#define intll long long
#define int128 __int128_t
typedef long long int ll;
#define endl "\n" << flush

// using HASH = pair<int, int>;
const int sizee = 1e6 + 10;
ll mod1 = 202206214218227;
int p1 = 137, p2 = 277;
int invp1, invp2;
vector<ll> power(sizee), invpower(sizee);

ll expo(ll x, ll y, ll mod) {
	ll ans = 1ll; x %= mod;
	while (y) {
		if (y & 1) ans = 1ll * ans * x % mod;
		x = 1ll * x * x % mod; y = y >> 1;
	}
	return (ans + mod) % mod;
}

void calculation(int sizee__) {
	power[0] =  1ll;
	for (int i = 1; i <= sizee__; i++) {
		power[i] = 1ll * power[i - 1] * p1 % mod1;
	}
	invp1 = expo(p1, mod1 - 2, mod1);
	invpower[0] =  1ll;
	for (int i = 1; i <= sizee__; i++) {
		invpower[i] = 1ll * invpower[i - 1] * invp1 % mod1;
	}
}

struct hashing {
	int N; string s; // 0 - indexed
	vector<int> hash; // 1 - indexed
	hashing() {}
	hashing(string& _s) {
		N = _s.size(); s = _s;
		hash.emplace_back(0);
		for (int i = 0, j = N - 1; i < N; i++, j--) {
			ll p;
			p = (hash[i] + 1ll * power[i] * s[i] % mod1) % mod1;
			hash.push_back(p);
		}
	}

	// hash = (h[r] - h[l - 1]) / p[l - 1]
	ll query(int l, int r) { // 1 - indexed
		assert(1 <= l && l <= r && r <= N); 
        ll ans;
		ans = (hash[r] - hash[l - 1] + mod1) * invpower[l - 1] % mod1;
		return ans;
	}
};

int32_t main()
{
	ios::sync_with_stdio(false) ; cin.tie(0) ;

	string a, b;
	cin >> a >> b;

	int n = a.size();
	int m = b.size();

	calculation(max(n, m));
	hashing hash_a(a), hash_b(b);

	int lo = 1, hi = min(n, m);
	while (lo < hi) {
		int mid = lo + (hi - lo + 1) / 2;
		unordered_map<ll, bool> found;
		for (int i = 1; i + mid - 1 <= n; i++)
			found[hash_a.query(i, i + mid - 1)] = true;

		bool exist = false;
		for (int i = 1; i + mid - 1 <= m and exist == false; i++) {
			ll hash = hash_b.query(i, i + mid - 1);
			exist |= found.find(hash) != found.end();
		}

		if (exist) {
			lo = mid;
		}
		else
			hi = mid - 1;
	}

	cout << lo << endl;

	return 0;
}