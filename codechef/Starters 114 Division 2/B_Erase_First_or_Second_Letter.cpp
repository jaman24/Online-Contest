//Complexity_Cutter is back

#include<bits/stdc++.h>
#include<cmath>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define debug printf("Debug\n");
#define en '\n'
#define all(x) x.begin() , x.end()

#define ll long long
#define ull unsigned long long

#define pi acos(-1.0)
#define mod 1000000007

#define _fastio  ios_base:: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define in_fre  freopen("in.txt", "r", stdin);
#define out_fre freopen("out.txt", "w", stdout);

struct Node{
    ll x,y;
};
struct cmp{
    bool operator()(const Node &a,const Node &b)const{
        if(a.x==b.x) return a.y<b.y;
        else return a.x>b.x;
    }
};

//Algos
template<typename T> using Pbds=tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;

/*Containers*/
priority_queue<ll,deque<ll>,greater<ll>>pq;
set<Node,cmp>st1;
map<Node,ll,cmp>mp1;
priority_queue<Node,deque<Node>,cmp>pq1;
Pbds<ll>ost;




int main(){
    _fastio
    ll t;
    
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        set<char>ch[n+10];
        set<char>c;
        for(ll i=0;i<n;i++){
            c.insert(s[i]);
            ch[i]=c;
        }
        ull po[n+10];
        po[n-1]=1;
        ull b=97;
        for(ll i=n-2;i>=0;i--){
            po[i]=po[i+1]*b;
        }
        
        unordered_set<ull>ans;
        ull cur=0;
        for(ll i=n-1;i>=0;i--){
            ull x=s[i]*po[n-1];
            ans.insert(x);
            cur+=po[i]*s[i];
            ans.insert(cur);
            //cout<<p<<en;
            if(i-1<0) continue;
            for(auto j:ch[i-1]){
                ull x1=po[i-1]*j;
                ans.insert(cur+x1);
            }
        }
        cout<<ans.size()<<en;

    }

    return 0;
}