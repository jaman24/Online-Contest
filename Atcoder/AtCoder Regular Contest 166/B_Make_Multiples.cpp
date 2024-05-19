#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    ll n,a,b,c;
    cin>>n>>a>>b>>c;
    ll ab=(a*b)/__gcd(a,b);
    ll ac=(a*c)/__gcd(a,c);
    ll bc =(b*c)/__gcd(b,c);
    ll abc = (ab * c)/__gcd(ab,c);

    ll ar[n];
    map<ll,ll> sat1,sat2,sat3,sat4,sat5,sat6;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        sat1[ar[i]]++;
        sat2[ar[i]]++;
        sat3[ar[i]]++;
        sat4[ar[i]]++;
        sat5[ar[i]]++;
        sat6[ar[i]]++;
    }
    vector<pair<ll,ll>> st1,st2,st3;
    ll ans = LONG_LONG_MAX,ab1 = LONG_LONG_MAX , ab2 = LONG_LONG_MAX,ac1 = LONG_LONG_MAX , ac2 = LONG_LONG_MAX,bc1 = LONG_LONG_MAX , bc2 = LONG_LONG_MAX;
    for(int i=0;i<n;i++){
        //abc
        ll x = ar[i]%abc;
        ans = min(ans , x==0 ? 0 : abc-x);
        // ab
        x = ar[i]%ab;
        ll p = c-(ar[i]%c==0 ? c : ar[i]%c);
        ll q = x==0? 0 :ab-x;
        st1.push_back({p,q});
        
        // ac
        x = ar[i]%ac;
        ll p1 = b-(ar[i]%b==0? b : ar[i]%b);
        ll q1 = x==0? 0 : ac-x;
        st2.push_back({p1,q1});
        
        // bc
        x = ar[i]%bc;
        ll p2 = a-(ar[i]%a==0?a:ar[i]%a);
        ll q2 = x==0? 0 : bc-x;
        st3.push_back({p2,q2});
        
    }
    if(n==1){
        cout<<ans<<endl;
        return;
    }
    sort(st1.begin(),st1.end());
    sort(st2.begin(),st2.end());
    sort(st3.begin(),st3.end());
    // st1
    ll res = LONG_LONG_MAX;
    for(int i=1;i<n;i++){
        res = min(st1[i].second , res);
    }
    ans = min(ans , min(st1[0].first + res , st1[0].second+st1[1].first));
    //st2
    res = LONG_LONG_MAX;
    for(int i=1;i<n;i++){
        res = min(st2[i].second , res);
    }
    ans = min(ans , min(st2[0].first + res , st2[0].second+st2[1].first));
    //st3
    res = LONG_LONG_MAX;
    for(int i=1;i<n;i++){
        res = min(st3[i].second , res);
    }
    ans = min(ans , min(st3[0].first + res , st3[0].second+st3[1].first));

    // a,b,c
    if(n>=3){
        //a,b,c
        ll temp = 0;
        ll t = LONG_LONG_MAX;
        for(auto [p,q]:sat1){
            if(q>0){
                t = min(t, a-(p%a==0?a:p%a));
            }
        }
        for(auto [p,q]:sat1){
            if(q>0){
                if(t = a-(p%a==0?a:p%a)){
                    sat1[p]--;
                    break;
                }
            }
        }
        temp+=t;

        t = LONG_LONG_MAX;
        for(auto [p,q]:sat1){
            if(q>0){
                t = min(t, b-(p%b==0?b:p%b));
            }
        }
        for(auto [p,q]:sat1){
            if(q>0){
                if(t = b-(p%b==0?b:p%b)){
                    sat1[p]--;
                    break;
                }
            }
        }
        temp+=t;
        t = LONG_LONG_MAX;
        for(auto [p,q]:sat1){
            if(q>0){
                t = min(t, c-(p%c==0?c:p%c));
            }
        }
        temp+=t;
        // for(auto [p,q]:sat1)cout<<p<<" "<<q<<endl;
        ans = min(ans , temp);

        // a,c,b
        temp = 0;
        t = LONG_LONG_MAX;
        for(auto [p,q]:sat2){
            if(q>0){
                t = min(t, a-(p%a==0?a:p%a));
            }
        }
        for(auto [p,q]:sat2){
            if(q>0){
                if(t = a-(p%a==0?a:p%a)){
                    sat2[p]--;
                    break;
                }
            }
        }
        temp+=t;

        t = LONG_LONG_MAX;
        for(auto [p,q]:sat2){
            if(q>0){
                t = min(t, c-(p%c==0?c:p%c));
            }
        }
        for(auto [p,q]:sat2){
            if(q>0){
                if(t = c-(p%c==0?c:p%c)){
                    sat2[p]--;
                    break;
                }
            }
        }
        temp+=t;
        t = LONG_LONG_MAX;
        for(auto [p,q]:sat2){
            if(q>0){
                t = min(t, b-(p%b==0?b:p%b));
            }
        }
        temp+=t;
        // for(auto [p,q]:sat2)cout<<p<<" "<<q<<endl;
        ans = min(ans , temp);

        // b,a,c
        temp = 0;
        t = LONG_LONG_MAX;
        for(auto [p,q]:sat3){
            if(q>0){
                t = min(t, b-(p%b==0?b:p%b));
            }
        }
        for(auto [p,q]:sat3){
            if(q>0){
                if(t = b-(p%b==0?b:p%b)){
                    sat3[p]--;
                    break;
                }
            }
        }
        temp+=t;

        t = LONG_LONG_MAX;
        for(auto [p,q]:sat3){
            if(q>0){
                t = min(t, a-(p%a==0?a:p%a));
            }
        }
        for(auto [p,q]:sat3){
            if(q>0){
                if(t = a-(p%a==0?a:p%a)){
                    sat3[p]--;
                    break;
                }
            }
        }
        temp+=t;
        t = LONG_LONG_MAX;
        for(auto [p,q]:sat3){
            if(q>0){
                t = min(t, c-(p%c==0?c:p%c));
            }
        }
        temp+=t;
        // for(auto [p,q]:sat3)cout<<p<<" "<<q<<endl;
        ans = min(ans , temp);

        // b,c,a
        temp = 0;
        t = LONG_LONG_MAX;
        for(auto [p,q]:sat4){
            if(q>0){
                t = min(t, b-(p%b==0?b:p%b));
            }
        }
        for(auto [p,q]:sat4){
            if(q>0){
                if(t = b-(p%b==0?b:p%b)){
                    sat4[p]--;
                    break;
                }
            }
        }
        temp+=t;

        t = LONG_LONG_MAX;
        for(auto [p,q]:sat4){
            if(q>0){
                t = min(t, c-(p%c==0?c:p%c));
            }
        }
        for(auto [p,q]:sat4){
            if(q>0){
                if(t = c-(p%c==0?c:p%c)){
                    sat4[p]--;
                    break;
                }
            }
        }
        temp+=t;
        t = LONG_LONG_MAX;
        for(auto [p,q]:sat4){
            if(q>0){
                t = min(t, a-(p%a==0?a:p%a));
            }
        }
        temp+=t;
        // for(auto [p,q]:sat4)cout<<p<<" "<<q<<endl;
        ans = min(ans , temp);

        // c,a,b
        temp = 0;
        t = LONG_LONG_MAX;
        for(auto [p,q]:sat5){
            if(q>0){
                t = min(t, c-(p%c==0?c:p%c));
            }
        }
        for(auto [p,q]:sat5){
            if(q>0){
                if(t = c-(p%c==0?c:p%c)){
                    sat5[p]--;
                    break;
                }
            }
        }
        temp+=t;

        t = LONG_LONG_MAX;
        for(auto [p,q]:sat5){
            if(q>0){
                t = min(t, a-(p%a==0?a:p%a));
            }
        }
        for(auto [p,q]:sat5){
            if(q>0){
                if(t = a-(p%a==0?a:p%a)){
                    sat5[p]--;
                    break;
                }
            }
        }
        temp+=t;
        t = LONG_LONG_MAX;
        for(auto [p,q]:sat5){
            if(q>0){
                t = min(t, b-(p%b==0?b:p%b));
            }
        }
        temp+=t;
        // for(auto [p,q]:sat5)cout<<p<<" "<<q<<endl;
        ans = min(ans , temp);

        // c,a,b
        temp = 0;
        t = LONG_LONG_MAX;
        for(auto [p,q]:sat6){
            if(q>0){
                t = min(t, c-(p%c==0?c:p%c));
            }
        }
        for(auto [p,q]:sat6){
            if(q>0){
                if(t = c-(p%c==0?c:p%c)){
                    sat6[p]--;
                    break;
                }
            }
        }
        temp+=t;

        t = LONG_LONG_MAX;
        for(auto [p,q]:sat6){
            if(q>0){
                t = min(t, b-(p%b==0?b:p%b));
            }
        }
        for(auto [p,q]:sat6){
            if(q>0){
                if(t = b-(p%b==0?b:p%b)){
                    sat6[p]--;
                    break;
                }
            }
        }
        temp+=t;
        t = LONG_LONG_MAX;
        for(auto [p,q]:sat6){
            if(q>0){
                t = min(t, a-(p%a==0?a:p%a));
            }
        }
        temp+=t;
        // for(auto [p,q]:sat6)cout<<p<<" "<<q<<endl;
        ans = min(ans , temp);
    }

    cout<<ans<<endl;
}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}