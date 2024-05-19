#include<bits/stdc++.h>

using namespace std;

#define ll long long

#define pb push_back

const ll MOD = 202206214218227;

#define all(x) x.begin(),x.end()

#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

#define PII pair<int, int>

int k;

bool pos(int h, vector<int>& div, vector<int>& ndiv, vector<int>& pre){

    int d = 0, p = 0, tot = 0;

    for(auto x:ndiv){

        if(x >= h)tot++;

        if(x < h and (ll)x*k >= h)p++;

    }

    for(int i = 0; i < div.size(); i++){

        if(div[i] < h){

            if(p >= pre[i]){

                p -= pre[i];

                tot += pre[i];

            }

            else{

                tot += p;

                p = 0;

            }

        }

        else{

            break;

        }

    }

    vector<int> v;

    for(int i = div.size() - 1; i >= 0; i--){

        if(div[i] >= h){

            int n = div[i], c = 0;

            while(n%k == 0 and p > 0 and n/k >= h){

                n /= k;

                p--;

                tot++;

                c++;

            }

            tot++;

            if(pre[i]-c > 0 and p > 0)v.push_back(pre[i]-c);

        }

        else break;

    }

    if( p > 0){

        sort(all(v));

        for(int i = v.size()-1; i >= 0; i--){

            if(p > 0){

                tot--;

                if(p >= v[i]){

                    tot += v[i];

                    p -= v[i];

                }

                else{

                    tot += p;

                    p = 0;

                }

            }

            else break;

        }

    }

    if(tot >= h)return true;

    return false;

}

int cal(int x){

    int c = 0;

    while (x % k == 0)

    {

        c++;

        x /= k;

    }

    return c;

}

void solve(){

    int n;

    cin>>n>>k;

    vector<int> div, ndiv;

    for(int i = 0; i < n; i++){

        int x;

        cin>>x;

        if(x%k == 0){

            div.push_back(x);

        }

        else{

            ndiv.push_back(x);

        }

    }

    sort(all(div));

    sort(all(ndiv));

    vector<int> pre(div.size(), 0);

    for(int i = 0; i < div.size(); i++){

        pre[i] = cal(div[i]);

    }

    int l = 0, r = n;

    while(l < r){

        int mid = (l + r + 1)/2;

        if(pos(mid, div, ndiv, pre)){

            l = mid;

        }

        else{

            r = mid - 1;

        }

    }

    cout<<l<<endl;



}

int main(){

    FastIO;

    int cn = 1;

    cin>>cn;

    while(cn--){

        solve();

    }

    return 0;

}