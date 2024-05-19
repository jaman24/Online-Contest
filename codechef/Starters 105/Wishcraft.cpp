#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n;
    cin>>n;
    ll p,q;
    cin>>p>>q;
    priority_queue<ll> pos,neg;
    ll mn = INT_MAX , mx = -1 * INT_MAX;
    ll c = 0;
    for(int i = 0; i < n; i++)
    {
        ll x;
        cin>>x;
        if(x<0)
        {
            ll y = abs(x);
            neg.push(abs(y));
        }
        else if(x>0)
        {
            pos.push(x);
        }
        mn = min(x,mn);
        mx = max(x,mx);
        if(x == 0)
        {
            c++;
        }
    }
    if(c>1)
    {
        neg.push(0);
        pos.push(0);
    }
    else if(c==1)
    {
        if(neg.size()==0)neg.push(0);
        else if(pos.size()==0)pos.push(0);
    }
    if(neg.size() == 0)
    {
        for(int i=0;i<p;i++)
        {
            if(pos.size()>2)
            {
                ll a = pos.top();
                pos.pop();
                ll b = pos.top();
                pos.pop();
                pos.push(a+b);
            }
        }
        ll big = pos.top();
        pos.pop();
        ll small = -mn;
        while(q and pos.size()>1)
        {
            small+=pos.top();
            pos.pop();
            q--;
        }
        cout<<big + small<<endl;
        return;
    }
    else if(pos.size() == 0)
    {
        for(int i=0;i<p;i++)
        {
            if(neg.size()>2)
            {
                ll a = neg.top();
                neg.pop();
                ll b = neg.top();
                neg.pop();
                neg.push(a+b);
            }
        }
        ll small = neg.top();
        neg.pop();
        ll big = mx;
        while(q and neg.size()>1)
        {
            big+=neg.top();
            neg.pop();
            q--;
        }
        cout<<big + small<<endl;
        return;
    }
    for(int i = 0; i < p; i++)
    {
        if(pos.size()>1 and neg.size()>1)
        {
            ll a = pos.top();
            pos.pop();
            ll b = pos.top();
            pos.pop();

            ll c = neg.top();
            neg.pop();
            ll d = neg.top();
            neg.pop();

            if(a+b >= c+d)
            {
                pos.push(a+b);
                neg.push(c);
                neg.push(d);
            }
            else
            {
                neg.push(c+d);
                pos.push(a);
                pos.push(b);
            }
        }
        else if(pos.size()>1)
        {
            ll a = pos.top();
            pos.pop();
            ll b = pos.top();
            pos.pop();

            pos.push(a+b);
        }
        else if(neg.size()>1)
        {
            ll c = neg.top();
            neg.pop();
            ll d = neg.top();
            neg.pop();

            neg.push(c+d);
        }
        else
        {
            break;
        }
    }
    ll big = pos.top();
    pos.pop();
    ll small = neg.top();
    neg.pop();
    while(q--)
    {
        if((pos.size()>=1 and neg.size()>=1) and pos.top()>neg.top())
        {
            small+=pos.top();
            pos.pop();
        }
        else if((pos.size()>=1 and neg.size()>=1) and pos.top()<=neg.top())
        {
            big+=neg.top();
            neg.pop();
        }
        else if(pos.size()>=1)
        {
            small+=pos.top();
            pos.pop();
        }
        else if(neg.size()>=1)
        {
            big+=neg.top();
            neg.pop();
        }
    }
    cout<<big + small<<endl;
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--)
    {
        solve();
    }
    return 0;
}