#include<bits/stdc++.h>

using namespace std;
#define int long long
#define cinv(v) for (auto &it:v) cin>>it;
#define coutv(v) for (auto &it:v) cout<< it<<" "; cout<<'\n';


void shelby() {
    int n;
    cin >> n;
    vector<int> v(n);
    cinv(v)
    map<int, deque<int>> mp;
    for (int i = 0; i < n; ++i) {
        mp[v[i]].push_back(i);
    }

    set<int> rem;
    int ans = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (v[i] != 0) rem.insert(v[i]);
        if (v[i] > v[i + 1]) {
            for (auto &it: rem) {
                if (mp.find(it) != mp.end()) {
                    for (auto &it2: mp[it]) {
                        v[it2] = 0;
                    }
                    mp.erase(it);
                }
                ans++;
            }
            rem = {};
        }
        else{
            if(mp[v[i]].size()){
                mp[v[i]].pop_front();
            }
        } 
    }
    cout << ans << '\n';
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    for (int _ = 1; _ <= t; ++_) {
//        cout << "Case " << _ << ": ";
        shelby();
    }
}