/* ------------- SHARIAT ULLAH PATHAN ------------- */
/* ---------- PROGRAMMER & ETHICAL HACKER --------- */
/* ------- INSTITUTE OF SCIENCE & TECHNOLOGY ------ */

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define CLEAR ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define PI acos(-1.0)
#define sp " "
#define br "\n"
#define vout(v) for(int i=0;i<v.size();i++) cout << v[i] << " "

void solve()
{
    ll n, one, two;
    string s;
    cin >> n >> s;
    vector<ll> v;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='B')
        {
            v.push_back(i);
        }
    }
    cout << v[v.size()-1] - v[0] +1 << br;
    return;
}

int main()
{
    CLEAR;
    ll t=1;
    cin >> t;
    while(t--) solve();
    return 0;
}
