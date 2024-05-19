1 BIT
        Description : 1 -
    indexed.lowerBound(sum) gives the smallest position i such that prefix sum up to i is ≥ sum.Time : Both operations are O((log N)).void update(int idx, int v)
{
    while (id <= n)
        tree[idx] += v, idx += idx & (-idx);
}
int query(int id)
{
    int sum = 0;
    while (idx > 0)
        sum += tree[idx], idx -= idx & (-idx);
    return sum;
}
/*
FenwickTree<int> f1(n), f2(n);
// add v to range a[l, r]
f1.update(l, v), f1.update(r + 1, -v);
f2.update(l, v * (l - 1)), f2.update(r + 1, -v * r);
// get sum of a[1..p]
cout << f1.pref(p) * p - f2.pref(p) << '\n';
*/

2 LCA 
const int N = 1e5 + 5;
const int LOGN = 18;
int h[N], table[LOGN][N];
std::vector<int> g[N];
void dfs(int u = 0, int p = -1, int d = 0)
{
    table[0][u] = p, h[u] = d;
    for (int i = 1; i < LOGN; i++)
    {
        if (table[i - 1][u] ^ -1)
        {
            table[i][u] = table[i - 1][table[i - 1][u]];
        }
        else
            table[i][u] = -1;
    }
    for (auto v : g[u])
    {
        if (v ^ p)
            dfs(v, u, d + 1);
    }
}
int get_lca(int u, int v)
{
    if (h[u] < h[v])
        swap(u, v);
    for (int i = LOGN - 1; i >= 0; i--)
    {
        if (h[u] - (1 << i) >= h[v])
            u = table[i][u];
    }
    if (u == v)
        return u;
    for (int i = LOGN - 1; i >= 0; i--)
    {
        if (table[i][u] != table[i][v])
        {
            u = table[i][u];
            v = table[i][v];
        }
    }
    return table[0][u];
}
3. LIS 
const int inf = 1e9;
vector<int> LIS(vector<int> a, int n)
{
    vector<int> d(n + 1, inf);
    for (int i = 0; i < n; i++)
    {
        *lower_bound(d.begin(), d.end(), a[i]) = a[i];
    }
    d.resize(lower_bound(d.begin(), d.end(), inf) -
             ,→ d.begin());
    return d;
}
4. Linear Sieve 
const int PRIME_SZ = ;
int prime[PRIME_SZ], prime_sz;
bitset<N> mark;
void sieve()
{
    for (int i = 2; i < N; ++i)
    {
        if (!mark[i])
            prime[prime_sz++] = i;
        for (int j = 0; j < prime_sz and i * prime[j] < N and (!j or j and i % prime[j - 1]); ++j)
        {
            mark[i * prime[j]] = true;
        }
    }
}
5. MO’s Algorithm 
int curL = 0, curR = -1;
for (int i = 0; i < Q.sz; i++)
{
    while (curL > Q[i].L)
    {
        curL--;
        add(curL);
    }
    while (curR < Q[i].R)
    {
        curR++;
        add(curR);
    }
    while (curL < Q[i].L)
    {
        remove(curL);
        curL++;
    }
    while (curR > Q[i].R)
    {
        remove(curR);
        curR--;
    }
}
6. Matrix Expo 
struct matrix
{
    ll mat[100][100]; // make this as small as possible
    int dim;
    matrix(){};
    matrix(int d)
    {
        dim = d;
        for (int i = 0; i < dim; i++)
            for (int j = 0; j < dim; j++)
                mat[i][j] = 0;
    }
    matrix operator*(const matrix &mul)
    {
        matrix ret = matrix(dim);
        for (int i = 0; i < dim; i++)
        {
            for (int j = 0; j < dim; j++)
            {
                for (int k = 0; k < dim; k++)
                {
                    ret.mat[i][j] += mat[i][k] * mul.mat[k][j];
                    ret.mat[i][j] %= MOD;
                }
            }
        }
        return ret;
    }
    matrix operator+(const matrix &add)
    {
        matrix ret = matrix(dim);
        for (int i = 0; i < dim; i++)
        {
            for (int j = 0; j < dim; j++)
            {
                ret.mat[i][j] = mat[i][j] + add.mat[i][j];
                ret.mat[i][j] %= MOD;
            }
        }
        return ret;
    }
    matrix operator^(int p)
    {
        matrix ret = matrix(dim);
        matrix m = *this;
        for (int i = 0; i < dim; i++)
            ret.mat[i][i] = 1;
        while (p)
        {
            if (p & 1)
                ret = ret * m;
            m = m * m;
            p >>= 1;
        }
        return ret;
    }
};
7. SegmentTree
Description: RMQ. Special tree is iterative, 0-indexed, point update,
query [l, r). General tree is recursive, 1-indexed, range update, query
[l, r].
Time: O (log N)
const int N = 200010;
int tree[4*N];
int query(int node, int st, int en, int l, int r){
    if (r < st or l > en)
    {
        return 0;
    }
    if (st >= l and en <= r)
        return tree[node];
    int mid = (st + en) / 2;
    int q1 = query(node + node, st, mid, l, r);
    int q2 = query(node + node + 1, mid + 1, en, l, r);
    return q1 + q2;
}
void update(int node,int st,int en,int ind,int val){
    if (st == en)
    {
        tree[node] += val;
        return;
    }
    int mid = (st + en) / 2;
    if (ind <= mid)
    {
        update(node + node, st, mid, ind, val);
    }
    else
    {
        update(node + node + 1, mid + 1, en, ind, val);
    }
    tree[node] = tree[node + node] + tree[node + node + 1];
}
query(1,0,n-1,l,r);
update(1,0,n-1,ind,val);

8. SparseTable
Description: Sparse table for fast RMQ.
Time: O (1)
int a[sz], spar[20][sz];
int rmq(int l, int r) { // 1 - index
    int h = 31 - __builtin_clz(r - l + 1);
    return min(spar[h][l], spar[h][r + 1 - (1 << h)]);
}
int main() {
    for (int i = 1; i <= n; i++)
        spar[0][i] = a[i];
    for (int h = 0; 2 << h <= n; h++)
    {
        for (int i = 1, j = i + (1 << h); i <= n; i++, j++)
        {
            int &w = spar[h + 1][i] = spar[h][i];
            if (j <= n)
                w = min(w, spar[h][j]);
        }
    }
}
9. Trie
//find out how many words in TODO list have a word as prefix.
const int N=1000000+5;
int dict_size = 0;
int end_at[N*10];
int nxt[N][26];
void insert(string &s){
    int at = 0;
    for (auto c : s)
    {
        int c_id = c - 'a';
        if (nxt[at][c_id] == -1)
        {
            nxt[at][c_id] = ++dict_size;
        }
        at = nxt[at][c_id];
        end_at[at]++;
    }
}
int count_prefix(string &s){
    int at = 0;
    for (auto c : s)
    {
        int c_id = c - 'a';
        if (nxt[at][c_id] == -1)
        {
            return 0;
        }
        at = nxt[at][c_id];
    }
    return end_at[at];
}
memset(nxt,-1,sizeof nxt);
memset(end_at,0,sizeof end_at);
insert all string;
count_prefix(s);

//Find the most occurring word in the book with S as prefix.
const int N = 5000005;
int end_at[N];
int nxt[N][26];
int id = 0;
string pre_cal_st[N];
void insert(string &s){
    int at = 0;
    for (auto c : s)
    {
        int c_id = c - 'a';
        if (nxt[at][c_id] == -1)
        {
            nxt[at][c_id] = ++id;
        }
        at = nxt[at][c_id];
    }
    end_at[at]++;
}
void find(string &s){
    int at = 0;
    for (auto c : s)
    {
        int c_id = c - 'a';
        if (nxt[at][c_id] == -1)
        {
            cout << -1 << endl;
            return;
        }
        at = nxt[at][c_id];
    }
    cout << pre_cal_st[at] << " " << end_at[at] << endl;
}
void dfs(int at,string s){
    pre_cal_st[at] = s;
    for (int c_id = 0; c_id < 26; c_id++)
    {
        string f = s + (char)(c_id + 'a');
        if (nxt[at][c_id] != -1)
        {
            dfs(nxt[at][c_id], f);
            if (end_at[at] < end_at[nxt[at][c_id]])
            {
                pre_cal_st[at] = pre_cal_st[nxt[at][c_id]];
                end_at[at] = end_at[nxt[at][c_id]];
            }
        }
    }
}
memset(end_at,0,sizeof end_at);
memset(nxt,-1,sizeof nxt);
insert all string;
dfs(0,s);
find(s);

//find min of ( i x ) i is all num in trie.
void insert(int n){
    int at = 0;
    for (int k = 29; k >= 0; k--)
    {
        int bit = check_bit(n, k);
        if (nxt[at][bit] == -1)
        {
            nxt[at][bit] = ++id;
        }
        at = nxt[at][bit];
        sz[at]++;
    }
}
void delet(int n){
    int at = 0;
    for (int k = 29; k >= 0; k--)
    {
        int bit = check_bit(n, k);
        at = nxt[at][bit];
        sz[at]--;
    }
}
int query(int n){
    int at = 0, ans = 0;
    for (int k = 29; k >= 0; k--)
    {
        int bit = check_bit(n, k);
        int x = nxt[at][bit];
        if (sz[x] > 0)
        {
            at = x;
            continue;
        }
        bit ^= 1;
        at = nxt[at][bit];
        ans = set_bit(ans, k);
    }
    return ans;
}
memset(nxt , -1, sizeof nxt);
memset(sz, 0, sizeof sz);
insert(num), delet(num), query(num);


3. CentroidDecomposition
Description: all path problem to paths through root problem with
O(logn) overhead.
Time: O (nlogn)
bool bad[N]; ll ans, h[N];
vector <pair <int, ll>> g[N];
int n, sub[N], flat[N], ptr, in[N], out[N];
void trav (int u, int par = -1) {
    sub[u] = 1;
    for (auto [v, w] : g[u])
        if (!bad[v] and v != par)
        {
            trav(v, u);
            sub[u] += sub[v];
        }
}
int getCentroid (int u, int tot, int par = -1) {
    for (auto [v, w] : g[u])
        if (!bad[v] and v != par and,→ sub[v] > tot / 2)
        {
            return getCentroid(v, tot, u);
        }
    return u;
}
void dfs (int u, int par = -1, ll far = 0) {
    flat[++ptr] = u, in[u] = ptr, h[u] = far;
    for (auto [v, w] : g[u])
        if (!bad[v] and v != par)
        {
            dfs(v, u, far + w);
        }
    out[u] = ptr;
}
void decompose (int u = 1) {
    trav(u);
    int cen = getCentroid(u, sub[u]);
    ptr = 0;
    dfs(cen);
    for (auto [u, w] : g[cen])
        if (!bad[u])
        {
            for (int i = in[u]; i <= out[u]; ++i)
            {
                int v = flat[i];
                // update ans with v
            }
            for (int i = in[u]; i <= out[u]; ++i)
            {
                int v = flat[i];
                // insert v in data structure
            }
        }
    bad[cen] = 1;
    for (auto [v, w] : g[cen])
        if (!bad[v])
            decompose(v);
}
int main() {
    // input graph
    decompose();
}
4. CompressTree
Description: Given a rooted tree and a subset S of nodes, compute
the minimal subtree that contains all the nodes by adding all (at most
|S| −1) pairwise LCAs and compressing edges. Tree is stored in virt[]
with edge costs at cost[].
Time: O (|S|log|S|)
vector <int> g[N], virt[N], cost[N];
int n, m, ptr, h[N], in[N], stk[N];
void add_edge (int u, int v) {
    if (u == v)
        return;
    virt[u].emplace_back(v);
    virt[v].emplace_back(u);
    int w = abs(h[u] - h[v]);
    cost[u].emplace_back(w);
    cost[v].emplace_back(w);
}
void buildTree (vector <int> &nodes) {
    if (nodes.size() <= 1)
        return;
    sort(nodes.begin(), nodes.end(), [](int x, int y) { return in[x] < in[y]; });
    int root = get_lca(nodes[0], nodes.back()), sz = nodes.size();
    ptr = 0, stk[ptr++] = root;
    for (int i = 0; i < sz; ++i)
    {
        int u = nodes[i], lca = get_lca(u, stk[ptr - 1]);
        if (lca == stk[ptr - 1])
        {
            stk[ptr++] = u;
        }
        else
        {
            while (ptr > 1 and h[stk[ptr - 2]] >= h[lca])
            {
                add_edge(stk[ptr - 2], stk[ptr - 1]), --ptr;
            }
            if (stk[ptr - 1] != lca)
            {
                add_edge(lca, stk[--ptr]);
                stk[ptr++] = lca, nodes.emplace_back(lca);
            }
            stk[ptr++] = u;
        }
    }
    if (find(nodes.begin(), nodes.end(), root) == nodes.end())
        nodes.emplace_back(root);
    for (int j = 0; j + 1 < ptr; ++j)
        add_edge(stk[j], stk[j + 1]);
}
int main() {
    cin >> m;
    vector<int> nodes(m);
    for (int i = 0; i < m; ++i)
        cin >> nodes[i];
    buildTree(nodes);
}
5. DSU On Tree
vector<int> *vec[maxn];
int cnt[maxn];
void dfs(int v, int p, bool keep){
    int mx = -1, bigChild = -1;
    for (auto u : g[v])
        if (u != p && sz[u] > mx)
            mx = sz[u], bigChild = u;
    for (auto u : g[v])
        if (u != p && u != bigChild)
            dfs(u, v, 0);
    if (bigChild != -1)
        dfs(bigChild, v, 1), vec[v] = vec[bigChild];
    else
        vec[v] = new vector<int>();
    vec[v]->push_back(v);
    cnt[col[v]]++;
    for (auto u : g[v])
        if (u != p && u != bigChild)
            for (auto x : *vec[u])
            {
                cnt[col[x]]++;
                vec[v]->push_back(x);
            }
    if (keep == 0)
        for (auto u : *vec[v])
            cnt[col[u]]--;
}

16. LCA
Description: fast LCA, and ancestor at height k query. Following code assumes 0 is the root.
Time: O (log N)
int n, q, p[N], h[N], jump[N];
int kHeightParent (int u, int k) {
    while (h[u] > k)
        u = h[jump[u]] < k ? p[u] : jump[u];
    return u;
}
int lca (int u, int v) {
    if (h[u] < h[v])
        swap(u, v);
    while (h[u] > h[v])
    {
        u = h[jump[u]] < h[v] ? p[u] : jump[u];
    }
    while (u ^ v)
    {
        (jump[u] ^ jump[v]) ? (u = jump[u], v = jump[v]) : (u = p[u], v = p[v]);
    }
    return u;
}
int main() {
    cin >> n >> q;
    p[0] = -1, h[0] = jump[0] = 0;
    for (int i = 1; i < n; ++i)
    {
        scanf("%d", p + i);
        h[i] = h[p[i]] + 1;
        int x = jump[p[i]], y = jump[x];
        jump[i] = (h[p[i]] + h[y] == h[x] << 1) ? y : p[i];
    }
}

3 Misc
3.1 FastMod
Description: Compute a%b about 5 times faster than usual, where b
is constant but not known at compile time. Returns a value congruent
to a (mod b) in the range [0,2b).
typedef unsigned long long ull;
struct FastMod {
    ull b, m;
    FastMod(ull b) : b(b), m(-1ULL / b) {}
    ull reduce(ull a)
    { // a % b + (0 or b)
        return a - (ull)((__uint128_t(m) * a) >> 64) * b;
    }
};
3.2 Generator Utilities
// shuffle(v.begin(), v.end(), default_random_engine(rnd(1, 1000)));
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
ll rnd(ll l, ll r) {
    return uniform_int_distribution<ll>(l, r)(rng);
}
4 Number Theory
4.1 CRT
bool crt(long long k1, long long m1, long long k2, long long m2, long long &k, long long &m) {
    k1 %= m1;
    if (k1 < 0)
        k1 += m1;
    k2 %= m2;
    if (k2 < 0)
        k2 += m2;
    long long x, y, g;
    if (!diophantine(m1, -m2, k2 - k1, x, y, g))
    {
        return false;
    }
    long long dx = m2 / g;
    long long delta = x / dx - (x % dx < 0);
    k = m1 * (x - dx * delta) + k1;
    m = m1 / g * m2;
    assert(0 <= k && k < m);
    return true;
}

4.2 Extended Euclid
// find x and y : ax + by = gcd(a, b)
int gcd(int a, int b, int& x, int& y) {
    if (b == 0)
    {
        x = 1, y = 0;
        return a;
    }
    int x1, y1;
    int d = gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}

4.3 Floor Sum of AP
ll sum(ll n){
    return n * (n - 1) >> 1;
}
// sum [(ai + b) / m] for 0 <= i < n
ll floorSumAP (ll a, ll b, ll m, ll n) {
    ll res = a / m * sum(n) + b / m * n;
    a %= m, b %= m;
    if (!a)
        return res;
    ll to = (n * a + b) / m;
    return res + (n - 1) * to - floorSumAP(m, m - 1 - b, a, to);
}
// sum (a + di) % m for 0 <= i < n
ll modSumAP (ll a, ll b, ll m, ll n) {
    b = ((b % m) + m) % m, a = ((a % m) + m) % m;
    return n * b + a * sum(n) - m * floorSumAP(a, b, m, n);
}
4.4 Linear EQ Smallest Sol Mod
// @param b `1 <= b`
// @return pair(g, x) s.t. g = gcd(a, b), xa = g (mod b), 0 <= x < b/g
pair<long long, long long> inv_gcd(long long a, long long b) {
    a %= b;
    if (a < 0)
        a += b;
    if (a == 0)
        return {b, 0};
    long long s = b, t = a;
    long long m0 = 0, m1 = 1;
    while (t)
    {
        long long u = s / t;
        s -= t * u;
        m0 -= m1 * u;
        auto tmp = s;
        s = t;
        t = tmp;
        tmp = m0;
        m0 = m1;
        m1 = tmp;
    }
    if (m0 < 0)
        m0 += b / s;
    return {s, m0};
}
// @param m `1 <= m`
// @return x s.t. xa = r (mod m), 0 <= x < m/gcd(a, m)
long long smallest_solution(long long a, long long r, long long m) {
    r %= m;
    if (r < 0)
        r += m;
    auto [g, x] = inv_gcd(a, m);
    assert(r % g == 0);
    // return x * (r / g) % m; // use this if m <= INT_MAX
    return (long long)((__int128)x * (r / g) % m);
}
4.5 MillerRabin
Description: Deterministic Miller-Rabin primality test. Guaranteed
to work for numbers up to 7·10^18; for larger numbers, use Python and
extend A randomly.
Time: 7 times the complexity of a
b mod c.
bool isPrime(ull n) {
    if (n < 2 || n % 6 % 4 != 1)
        return (n | 1) == 3;
    ull A[] = {2, 325, 9375, 28178, 450775, 9780504,
               ,→ 1795265022},
        s = __builtin_ctzll(n - 1), d = n >> s;
    for (ull a : A)
    { // ^ count trailing zeroes
        ull p = modpow(a % n, d, n), i = s;
        while (p != 1 && p != n - 1 && a % n && i--)
            p = modmul(p, p, n);
        if (p != n - 1 && i != s)
            return 0;
    }
    return 1;
}
4.6 ModMulLL
Description: Calculate a · b mod c for 0 ≤ a,b ≤ c ≤ 7.2·10^18
Time: O (1) for modmul, O (logb) for modpow
typedef unsigned long long ull;
ull modmul(ull a, ull b, ull M) {
    ll ret = a * b - M * ull(1.L / M * a * b);
    return ret + M * (ret < 0) - M * (ret >= (ll)M);
}
ull modpow(ull b, ull e, ull mod) {
    ull ans = 1;
    for (; e; b = modmul(b, b, mod), e /= 2)
        if (e & 1)
            ans = modmul(ans, b, mod);
    return ans;
}

4.7 Power Sum
ll ncr[N][N], S[N][N], B[N], d[N][N];
ll fact[N], inv[N];
ll powerSum(ll n, ll k) {
    ll ret = 0LL;
    for (int i = 0; i <= k + 1; ++i)
    {
        ret += d[k][i] * bigMod(n, i);
        ret %= MOD;
    }
    return ret;
}
void init() {
    fact[0] = 1;
    for (int i = 1; i < N; ++i)
    {
        fact[i] = (fact[i - 1] * i),→ % MOD;
    }
    inv[1] = 1;
    for (int i = 2; i < N; ++i)
    {
        inv[i] = MOD - (MOD / i) * inv[MOD % i] % MOD;
    }
    S[0][0] = 1;
    for (int i = 1; i < N; ++i)
    {
        S[i][0] = 0;
        for (int j = 1; j <= i; ++j)
        {
            S[i][j] = j * S[i - 1][j] + S[i - 1][j - 1];
            S[i][j] %= MOD;
        }
    }
    for (int i = 1; i < N; ++i)
    {
        ncr[i][0] = ncr[i][i] = 1;
        for (int j = 1; j < i; ++j)
        {
            ncr[i][j] = ncr[i - 1][j] + ncr[i - 1][j - 1];
            ncr[i][j] %= MOD;
        }
    }
    for (int i = 0; i < 15; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            B[i] += ((j & 1) ? -1 : 1) * ((fact[j] * S[i][j]) % MOD) * inv[j + 1];
            B[i] %= MOD;
        }
    }
    for (int i = 0; i < 15; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            d[i][i + 1 - j] = (ncr[i + 1][j] * abs(B[j])) % MOD;
            d[i][i + 1 - j] *= inv[i + 1];
            d[i][i + 1 - j] %= MOD;
        }
    }
    d[0][0] = 1; // 0^0 = 1
}
5 String
5.1 Aho Corasick
struct AC {
    int N, P;
    const int A = 26;
    vector<vector<int>> next;
    vector<int> link, out_link;
    vector<vector<int>> out;
    AC() : N(0), P(0)
    {
        node();
    }
    int node()
    {
        next.emplace_back(A, 0);
        link.emplace_back(0);
        out_link.emplace_back(0);
        out.emplace_back(0);
        return N++;
    }
    inline int get(char c)
    {
        return c - 'a';
    }
    int add_pattern(const string T)
    {
        int u = 0;
        for (auto c : T)
        {
            if (!next[u][get(c)])
                next[u][get(c)] = node();
            u = next[u][get(c)];
        }
        out[u].push_back(P);
        return P++;
    }
    void compute()
    {
        queue<int> q;
        for (q.push(0); !q.empty();)
        {
            int u = q.front();
            q.pop();
            for (int c = 0; c < A; ++c)
            {
                int v = next[u][c];
                if (!v)
                {
                    next[u][c] = next[link[u]][c];
                }
                else
                {
                    link[v] = u ? next[link[u]][c] : 0;
                    out_link[v] =
                        out[link[v]].empty() ? out_link[link[v]] : link[v];
                    q.push(v);
                }
            }
        }
    }
    int advance(int u, char c)
    {
        while (u && !next[u][get(c)])
            u = link[u];
        u = next[u][get(c)];
        return u;
    }
    void match(const string S)
    {
        int u = 0;
        for (auto c : S)
        {
            u = advance(u, c);
            for (int v = u; v; v = out_link[v])
            {
                for (auto p : out[v])
                    cout << "match " << p << endl;
            }
        }
    }
};

5.3 KMP
template<typename T>
vector<int> prefix_function(const T &s) {
    int n = (int)s.size();
    vector<int> p(n, 0);
    int k = 0;
    for (int i = 1; i < n; i++)
    {
        while (k > 0 && !(s[i] == s[k]))
        {
            k = p[k - 1];
        }
        if (s[i] == s[k])
        {
            k++;
        }
        p[i] = k;
    }
    return p;
}
// Returns 0-indexed positions of occurrences of s in w
template<typename T>
vector<int> kmp_search(const T &s, const T &w) {
    int n = (int)s.size();
    int m = (int)w.size();
    const vector<int> p = prefix_function(s);
    assert(n >= 1 && (int)p.size() == n);
    vector<int> res;
    int k = 0;
    for (int i = 0; i < m; i++)
    {
        while (k > 0 && (k == n || !(w[i] == s[k])))
        {
            k = p[k,→ - 1];
        }
        if (w[i] == s[k])
        {
            k++;
        }
        if (k == n)
        {
            res.push_back(i - n + 1);
        }
    }
    return res;
}
template<typename T>
vector<vector<int>> prefix_function_automaton(const T &s, int alphabet_size, int smallest_alphabet) {
    int n = s.size();
    vector<int> pf = prefix_function(s);
    vector<vector<int>> automaton(n + 1, vector<int>(alphabet_size));
    for (int i = 0; i <= n; i++)
    {
        for (int c = 0; c < alphabet_size; c++)
        {
            if (i < n and s[i] == smallest_alphabet + c)
            {
                automaton[i][c] = i + 1;
            }
            else
            {
                automaton[i][c] = i == 0 ? 0 : automaton[pf[i - 1]][c];
            }
        }
    }
    return automaton;
}
5.4 Manacher
Description: For each position in a string, computes p[0][i] = half
length of longest even palindrome around pos i, p[1][i] = longest odd
(half rounded down).
Time: O (N)
typedef vector<int> vi;
array<vi, 2> manacher(const string& s) {
    int n = s.length();
    array<vi, 2> p = {vi(n + 1), vi(n)};
    for (int z = 0; z < 2; z++)
        for (int i = 0, l = 0, r = 0; i < n; i++)
        {
            int t = r - i + !z;
            if (i < r)
                p[z][i] = min(t, p[z][l + t]);
            int L = i - p[z][i], R = i + p[z][i] - !z;
            while (L >= 1 && R + 1 < n && s[L - 1] == s[R + 1])
                p[z][i]++, L--, R++;
            if (R > r)
                l = L, r = R;
        }
    return p;
}
5.5 MinRotation
Description: Finds the lexicographically smallest rotation of a string.
Usage: rotate(v.begin(), v.begin()+minRotation(v), v.end());
Time: O (N)
int minRotation(string s) {
    int a = 0, N = sz(s);
    s += s;
    rep(b, 0, N) rep(k, 0, N)
    {
        if (a + k == b || s[a + k] < s[b + k])
        {
            b += max(0, k - 1);
            break;
        }
        if (s[a + k] > s[b + k])
        {
            a = b;
            break;
        }
    }
    return a;
}
5.6 Palindromic Tree
class PalindromicTree {
private:
    int A;
    string s;
    int last, ptr;
    vector<int> link, len, occ, depth;
    vector<vector<int>> nxt;
    void init(int sz)
    {
        link.resize(sz, 0), len.resize(sz, 0), occ.resize(sz, 0), depth.resize(sz, 0);
        nxt.resize(sz, vector<int>(A, 0));
        len[1] = -1, len[2] = 0, link[1] = link[2] = 1, last = ptr = 2;
    }
    void feed(int at)
    {
        while (s[at - len[last] - 1] != s[at])
            last = link[last];
        int ch = s[at] - 'a', temp = link[last];
        while (s[at - len[temp] - 1] != s[at])
            temp = link[temp];
        if (!nxt[last][ch])
        {
            nxt[last][ch] = ++ptr, len[ptr] = len[last] + 2;
            link[ptr] = len[ptr] == 1 ? 2 : nxt[temp][ch];
            depth[ptr] = depth[link[ptr]] + 1;
            palindromes.emplace_back(at - len[ptr], at);
        }
        last = nxt[last][ch], ++occ[last];
    }

public:
    vector<pair<int, int>> palindromes;
    PalindromicTree(string s, int A = 26)
    {
        int n = s.length();
        this->s = '0' + s;
        this->A = A;
        init(n + 3);
        for (int i = 1; i <= n; ++i)
            feed(i);
    }
};
5.7 Suffix Array
class SuffixArray {
    // Everything is 0-indexed
private:
    int n, logn;
    string s;                       // Suffix array will be built for this string
    vector<int> cnt, nxt;           // Internal
    vector<bool> bh, b2h;           // Internal
    vector<vector<int>> lcp_sparse; // lcp_sparse[i][j] = min(lcp[j], ..., lcp[j + (1 << i) - 1]) bool lcp_built, lcp_sparse_built;
    void init()
    {
        cnt.resize(n, 0), nxt.resize(n, 0), bh.resize(n, 0),
        b2h.resize(n, 0), SA.resize(n, 0), iSA.resize(n, 0),
        lcp.resize(n, 0);
        lcp_sparse.resize(logn, vector<int>(n, 0));
        lcp_built = lcp_sparse_built = false;
    }
    void build_SA()
    {
        for (int i = 0; i < n; i++)
            SA[i] = i;
        sort(SA.begin(), SA.end(), [&](int i, int j)
             { return s[i] < s[j]; });
        for (int i = 0; i < n; i++)
        {
            bh[i] = i == 0 || s[SA[i]] != s[SA[i - 1]];
            b2h[i] = 0;
        }
        for (int h = 1; h < n; h <<= 1)
        {
            int tot = 0;
            for (int i = 0, j; i < n; i = j)
            {
                j = i + 1;
                while (j < n && !bh[j])
                    j++;
                nxt[i] = j;
                tot++;
            }
            if (tot == n)
                break;
            for (int i = 0; i < n; i = nxt[i])
            {
                for (int j = i; j < nxt[i]; j++)
                    iSA[SA[j]] = i;
                cnt[i] = 0;
            }
            cnt[iSA[n - h]]++;
            b2h[iSA[n - h]] = 1;
            for (int i = 0; i < n; i = nxt[i])
            {
                for (int j = i; j < nxt[i]; j++)
                {
                    int s = SA[j] - h;
                    if (s < 0)
                        continue;
                    int head = iSA[s];
                    iSA[s] = head + cnt[head]++;
                    b2h[iSA[s]] = 1;
                }
                for (int j = i; j < nxt[i]; j++)
                {
                    int s = SA[j] - h;
                    if (s < 0 || !b2h[iSA[s]])
                        continue;
                    for (int k = iSA[s] + 1; !bh[k] && b2h[k]; k++)
                        b2h[k] = 0;
                }
            }
            for (int i = 0; i < n; i++)
            {
                SA[iSA[i]] = i;
                if (b2h[i])
                    bh[i] = true;
            }
        }
        for (int i = 0; i < n; i++)
            iSA[SA[i]] = i;
    }
    void build_lcp()
    {
        lcp_built = true;
        for (int i = 0, k = 0; i < n; i++)
        {
            if (iSA[i] == n - 1)
            {
                k = 0;
                lcp[n - 1] = 0;
                continue;
            }
            int j = SA[iSA[i] + 1];
            while (i + k < n && j + k < n && s[i + k] == s[j + k])
                k++;
            lcp[iSA[i]] = k;
            if (k)
                k--;
        }
    }
    void build_lcp_sparse()
    {
        if (!lcp_built)
            build_lcp();
        lcp_sparse_built = true;
        for (int i = 0; i < n; i++)
            lcp_sparse[0][i] = lcp[i];
        for (int i = 1; i < logn; i++)
        {
            for (int j = 0; j < n; j++)
            {
                lcp_sparse[i][j] = min(lcp_sparse[i - 1][j], lcp_sparse[i - 1][min(n - 1, j + (1 << (i - 1)))]);
            }
        }
    }

public:
    vector<int> SA, iSA; 
    // SA is the suffix array, iSA[i] stores the rank of the i'th suffix vector<int> lcp; 
    // Stores lcp of SA[i] and SA[i + 1]; ,→ lcp[n - 1] = 0
    // O(nlog(n))
    SuffixArray(string s)
    {
        n = s.length();
        logn = 32 - __builtin_clz(n);
        this->s = s;
        init();
        build_SA();
    }
    // Returns (l, r) such that l <= from <= r and lcp(SA[l], SA[r]) >= min_lcp
    // O(log(n))
pair<int, int> min_lcp_range(int from, int min_lcp)
{
    assert(0 <= from and from < n);
    assert(min_lcp <= n - SA[from]); // min_lcp should be >= length of the suffix if (!lcp_sparse_built) build_lcp_sparse();
    int r = from;
    for (int i = logn - 1; i >= 0; i--)
    {
        int jump = 1 << i;
        if (r + jump < n and lcp_sparse[i][r] >= min_lcp)
            r,→ += jump;
    }
    int l = from;
    for (int i = logn - 1; i >= 0; i--)
    {
        int jump = 1 << i;
        if (l - jump >= 0 and lcp_sparse[i][l - jump] >= min_lcp)
            l -= jump;
    }
    return make_pair(l, r);
}
// Returns lcp(SA[l], SA[r - 1])
// O(1)
int range_lcp(int l, int r)
{
    assert(0 <= l and l < r and r <= n);
    if (!lcp_sparse_built)
        build_lcp_sparse();
    int msb = 31 - __builtin_clz(r - l);
    return min(lcp_sparse[msb][l], lcp_sparse[msb][r - (1 << msb)]);
}
// Returns lcp of the suffixes s[i...n-1] and s[j...n-1]
// O(1)
int suffix_lcp(int i, int j)
{
    if (i == j)
        return n - i;
    i = iSA[i], j = iSA[j];
    if (j < i)
        swap(i, j);
    return range_lcp(i, j);
}
// Compares the suffixes s[i...n-1] and s[j...n-1]
// O(1)
bool compare(int i, int j)
{
    int len_i = n - i, len_j = n - j;
    int lcp = suffix_lcp(i, j);
    if (lcp >= len_i or lcp >= len_j)
        return len_i < len_j;
    return s[i + lcp] < s[j + lcp];
}
};
5.8 Z Algorithm
template<typename T>
vector<int> z_function(const T &s) {
    int n = (int)s.size();
    vector<int> z(n, n);
    int l = 0, r = 0;
    for (int i = 1; i < n; i++)
    {
        z[i] = (i > r ? 0 : min(r - i + 1, z[i - l]));
        while (i + z[i] < n && s[z[i]] == s[i + z[i]])
        {
            z[i]++;
        }
        if (i + z[i] - 1 > r)
        {
            l = i;
            r = i + z[i] - 1;
        }
    }
    return z;
}

7 algorithm
7.1 a^bc
ll e_phi(ll n){
    ll phi = n;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            phi *= (i - 1);
            phi /= i;
            while (n % i == 0)
            {
                n /= i;
            }
        }
    }
    if (n > 1)
    {
        phi *= (n - 1);
        phi /= n;
    }
    return phi;
}
ll expo(ll n, ll m, ll mod){
    if (m == 0)
    {
        return 1;
    }
    if (m % 2)
    {
        return (expo(n, m - 1, mod) % mod * n) % mod;
    }
    return (expo(n, m / 2, mod) % mod * expo(n, m / 2, mod) % mod) % mod;
}
void solve(ll mod , ll phi){
    ll n, m, p;
    cin >> n >> m >> p;
    ll x = expo(m, p, phi);
    cout << expo(n, x, mod) << endl;
}
int main(){
    ll mod = 1e9 + 7;
    ll phi = e_phi(mod);
    int cn = 1;
    cin >> cn;
    while (cn--)
    {
        solve(mod, phi);
    }
    return 0;
}
7.2 binexp
ll binexp(ll base, ll exp, ll M){
    if (exp == 0)
        return 1;
    ll ret = binexp(base, exp / 2, M);
    ret = ((ret % M) * (ret % M)) % M;
    if (exp & 1)
        return ((ret % M) * (base % M)) % M;
    return ret;
}
7.3 bit
int check_bit(unsigned int n, unsigned int k)
{
    return (n >> k) & 1;
}
int set_bit(int n, int k)
{
    if (check_bit(n, k) == 0)
    {
        n ^= 1 << k;
    }
    return n;
}
int unset_bit(int n, int k){
    if (check_bit(n, k) == 1)
    {
        n ^= 1 << k;
    }
    return n;
}
7.4 dsu
vector<int> pr;
vector<int> sz;
void initialize(int n){
    pr.clear();
    pr.resize(n + 1);
    iota(pr.begin(), pr.end(), 0);
    sz.clear();
    sz.resize(n + 1);
    for (int i = 1; i <= n; i++)
        sz[i] = 1;
}
int findParent(int u){
    if (u == pr[u])
        return u;
    return pr[u] = findParent(pr[u]);
}
void join(int u, int v){
    int pu = findParent(u);
    int pv = findParent(v);
    pr[pu] = pv;
    sz[pv] += sz[pu];
}
7.5 hashing
const ll MOD = 202206214218227;
const int BASE = 257;
const int M = 1000000;
long long sH[M + 5],expo[M + 5];
inline long long add(long long a, long long b)
{
    if (a >= MOD)
        a %= MOD;
    if (b >= MOD)
        b %= MOD;
    long long c = a + b;
    if (c >= MOD)
        c %= MOD;
    return c;
}
inline long long multiply(long long a, long long b)
{
    if (a >= MOD)
        a %= MOD;
    if (b >= MOD)
        b %= MOD;
    long long c = ((__int128)a * b);
    if (c >= MOD)
        c %= MOD;
    return c;
}
void precalculate(string &s)
{
    int len = s.size();
    // calculate expos
    expo[0] = 1;
    for (int i = 1; i < len; i++)
    {
        expo[i] = multiply(expo[i - 1], BASE);
    }
    // calculate prefix hashes
    sH[0] = s[0];
    for (int i = 1; i < len; i++)
    {
        sH[i] = add(multiply(sH[i - 1], BASE), s[i]);
    }
}
ll rangehash(ll l , ll r){
    if (l == 0)
    {
        return sH[r];
    }
    auto h1 = sH[r];
    auto h2 = sH[l - 1] * expo[r - l + 1];
    if (h2 >= MOD)
        h2 %= MOD;
    return (h1 - h2 + MOD) % MOD;
}
7.6 merge_sort
ll inversion = 0;
vector<ll> merge(vector<ll> &a, vector<ll> &b){
    ll x = a.size() + b.size();
    vector<ll> ab(x);
    ll j = 0, k = 0;
    for (int i = 0; i < a.size();)
    {
        if (j >= b.size() or a[i] <= b[j])
        {
            ab[k++] = a[i];
            i++;
        }
        else if (j < b.size())
        {
            ab[k++] = b[j];
            j++;
            inversion += a.size() - i;
        }
    }
    while (j < b.size())
    {
        ab[k++] = b[j];
        j++;
    }
    return ab;
}
vector<ll> merge_sort(vector<ll> &num){
    ll size = num.size();
    if (size == 1)
        return num;
    ll mid = (size - 1) / 2;
    vector<ll> left(num.begin(), num.begin() + mid + 1);
    vector<ll> right(num.begin() + mid + 1, num.end());
    vector<ll> sorted_left = merge_sort(left);
    vector<ll> sorted_right = merge_sort(right);
    return merge(sorted_left, sorted_right);
}
void solve() {
    ll n;
    cin >> n;
    inversion = 0;
    vector<ll> num(n);
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    vector<ll> ans = merge_sort(num);
    cout << inversion << endl;
}
7.7 nCr
const ll mod = 202206214218227;
const ll N = 2e6 + 10;
ll fact[N];
void facto(){
    fact[0] = 1;
    for (int i = 1; i < N; i++)
    {
        fact[i] = fact[i - 1] * i;
        if (fact[i] >= mod)
            fact[i] %= mod;
    }
}
ll inv(ll i) {
    return i <= 1 ? i : mod - (long long)(mod / i) * inv(mod %,→ i) % mod;
}
void solve() {
    ll n, r;
    cin >> n >> r;
    ll ans = inv((fact[n - r] * fact[r]) % mod) * fact[n];
}
7.8 segment_tree
const int N = 200010;
int tree[4*N];
int query(int node, int st, int en, int l, int r){
    if (r < st or l > en)
    {
        return 0;
    }
    if (st >= l and en <= r)
        return tree[node];
    int mid = (st + en) / 2;
    int q1 = query(node + node, st, mid, l, r);
    int q2 = query(node + node + 1, mid + 1, en, l, r);
    return q1 + q2;
}
void update(int node,int st,int en,int ind,int val){
    if (st == en)
    {
        tree[node] += val;
        return;
    }
    int mid = (st + en) / 2;
    if (ind <= mid)
    {
        update(node + node, st, mid, ind, val);
    }
    else
    {
        update(node + node + 1, mid + 1, en, ind, val);
    }
    tree[node] = tree[node + node] + tree[node + node + 1];
}
query(1,0,n-1,l,r);
update(1,0,n-1,ind,val);
7.9 template
const ll MOD = 202206214218227;
#define FastIO               
    ios::sync_with_stdio(0); 
    cin.tie(0);
    cout.tie(0);
class Compare {
public:
bool operator()(pair<ll,ll> a, pair<ll,ll> b){
    if(a.second>b.second){
        return true;
    }
    return false;
}
};
priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, Compare>,→ PQ;

7.10 ternary 
double f(double x){}
double ternary_search(double l, double r)
{
    double eps = 1e-9; // set the error limit here
    while (r - l > eps)
    {
        double m1 = l + (r - l) / 3;
        double m2 = r - (r - l) / 3;
        double f1 = f(m1); // evaluates the function at m1
        double f2 = f(m2); // evaluates the function at m2
        if (f1 < f2)
            l = m1;
        else
            r = m2;
    }
    return f(l); // return the maximum of f(x) in [l, r]
}
7.11 trie
    // find out how many words in TODO list have a word asprefix.
const int N = 1000000 + 5;
int dict_size = 0;
int end_at[N * 10];
int nxt[N][26];
void insert(string &s)
{
    int at = 0;
    for (auto c : s)
    {
        int c_id = c - 'a';
        if (nxt[at][c_id] == -1)
        {
            nxt[at][c_id] = ++dict_size;
        }
        at = nxt[at][c_id];
        end_at[at]++;
    }
}
int count_prefix(string &s)
{
    int at = 0;
    for (auto c : s)
    {
        int c_id = c - 'a';
        if (nxt[at][c_id] == -1)
        {
            return 0;
        }
        at = nxt[at][c_id];
    }
    return end_at[at];
}
memset(nxt, -1, sizeof nxt);
memset(end_at, 0, sizeof end_at);
//insert all string;
count_prefix(s);
// Find the most occurring word in the book with S as prefix.
const int N = 5000005;
int end_at[N];
int nxt[N][26];
int id = 0;
string pre_cal_st[N];
void insert(string &s)
{
    int at = 0;
    for (auto c : s)
    {
        int c_id = c - 'a';
        if (nxt[at][c_id] == -1)
        {
            nxt[at][c_id] = ++id;
        }
        at = nxt[at][c_id];
    }
    end_at[at]++;
}
void find(string &s)
{
    int at = 0;
    for (auto c : s)
    {
        int c_id = c - 'a';
        if (nxt[at][c_id] == -1)
        {
            cout << -1 << endl;
            return;
        }
        at = nxt[at][c_id];
    }
    cout << pre_cal_st[at] << " " << end_at[at] << endl;
}
void dfs(int at, string s)
{
    pre_cal_st[at] = s;
    for (int c_id = 0; c_id < 26; c_id++)
    {
        string f = s + (char)(c_id + 'a');
        if (nxt[at][c_id] != -1)
        {
            dfs(nxt[at][c_id], f);
            if (end_at[at] < end_at[nxt[at][c_id]])
            {
                pre_cal_st[at] = pre_cal_st[nxt[at][c_id]];
                end_at[at] = end_at[nxt[at][c_id]];
            }
        }
    }
}
memset(end_at, 0, sizeof end_at);
memset(nxt, -1, sizeof nxt);
//insert all string;
dfs(0, s);
find(s);
// find min of ( i x ) i is all num in trie.
void insert(int n)
{
    int at = 0;
    for (int k = 29; k >= 0; k--)
    {
        int bit = check_bit(n, k);
        if (nxt[at][bit] == -1)
        {
            nxt[at][bit] = ++id;
        }
        at = nxt[at][bit];
        sz[at]++;
    }
}
void delet(int n)
{
    int at = 0;
    for (int k = 29; k >= 0; k--)
    {
        int bit = check_bit(n, k);
        at = nxt[at][bit];
        sz[at]--;
    }
}
int query(int n)
{
    int at = 0, ans = 0;
    for (int k = 29; k >= 0; k--)
    {
        int bit = check_bit(n, k);
        int x = nxt[at][bit];
        if (sz[x] > 0)
        {
            at = x;
            continue;
        }
        bit ^= 1;
        at = nxt[at][bit];
        ans = set_bit(ans, k);
    }
    return ans;
}
memset(nxt, -1, sizeof nxt);
memset(sz, 0, sizeof sz);
//insert(num), delet(num), query(num);
7.12 with_lazy
#define MAX 200010
    ll tree[4 * MAX] = {0};
ll lazy[4 * MAX] = {0};
void updateRangeUtil(ll si, ll ss, ll se, ll us, ll ue, ll diff)
{
    if (lazy[si] != 0)
    {
        tree[si] += (se - ss + 1) * lazy[si];
        if (ss != se)
        {
            lazy[si * 2 + 1] += lazy[si];
            lazy[si * 2 + 2] += lazy[si];
        }
        lazy[si] = 0;
    }
    if (ss > se || ss > ue || se < us)
        return;
    if (ss >= us && se <= ue)
    {
        tree[si] += (se - ss + 1) * diff;
        if (ss != se)
        {
            lazy[si * 2 + 1] += diff;
            lazy[si * 2 + 2] += diff;
        }
        return;
    }
    ll mid = (ss + se) / 2;
    updateRangeUtil(si * 2 + 1, ss, mid, us, ue, diff);
    updateRangeUtil(si * 2 + 2, mid + 1, se, us, ue, diff);
    tree[si] = tree[si * 2 + 1] + tree[si * 2 + 2];
}
void updateRange(ll n, ll us, ll ue, ll diff)
{
    updateRangeUtil(0, 0, n - 1, us, ue, diff);
}
ll getSumUtil(ll ss, ll se, ll qs, ll qe, ll si)
{
    if (lazy[si] != 0)
    {
        tree[si] += (se - ss + 1) * lazy[si];
        if (ss != se)
        {
            lazy[si * 2 + 1] += lazy[si];
            lazy[si * 2 + 2] += lazy[si];
        }
        lazy[si] = 0;
    }
    if (ss > se || ss > qe || se < qs)
        return 0;
    if (ss >= qs && se <= qe)
        return tree[si];
    ll mid = (ss + se) / 2;
    return getSumUtil(ss, mid, qs, qe, 2 * si + 1) +
           getSumUtil(mid + 1, se, qs, qe, 2 * si + 2);
}
ll getSum(ll n, ll qs, ll qe)
{
    if (qs < 0 || qe > n - 1 || qs > qe)
    {
        cout << "Invalid Input";
        return -1;
    }
    return getSumUtil(0, n - 1, qs, qe, 0);
}
7.13 zalgo template <typename T>
vector<int> z_function(int n, const T &s)
{
    vector<int> z(n, n);
    int l = 0, r = 0;
    for (int i = 1; i < n; i++)
    {
        z[i] = (i > r ? 0 : min(r - i + 1, z[i - l]));
        while (i + z[i] < n and s[z[i]] == s[i + z[i]])
        {
            z[i]++;
        }
        if (i + z[i] - 1 > r)
        {
            l = i;
            r = i + z[i] - 1;
        }
    }
    return z;
}
template <typename T>
vector<int> z_function(const T &s)
{
    return z_function((int)s.size(), s);
}
