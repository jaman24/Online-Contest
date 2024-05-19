    #include <bits/stdc++.h>
    #include <iostream>
    #include <cmath>
    #include<iomanip>
    #define dbg(x) cout << #x << " = " << x << endl;
    #define fast_io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
    #define pans cout << ans << "\n";
    #define endl "\n"
    #define pb push_back
    #define mp make_pair
    #define MAX 1000000000
    #define pii pair<int,int>
    #define EPS 1e-9
    // const ll mod=1e9+7;
    typedef long long int ll;
    typedef unsigned long long int ull;
    typedef long double ld;
    using namespace std;
    int n;
    int** dp;
    int f(int prev,int current,vector<int>& h)
    {
        if(current==n) return abs(h[current]-h[prev]);
        else if(current>n) return INT_MAX;
        if(dp[current-prev][current]!=-1)
            return dp[current-prev][current];
   
        dp[1][current]=f(current,current+1,h);
        dp[2][current]=f(current,current+2,h);
        return abs(h[current]-h[prev])+min(dp[1][current],dp[2][current]);
    }
    void solve() {
    cin>>n;
    vector<int> v(n);
    for(auto &it:v)
        cin>>it;
    dp=(int** )malloc(3*sizeof(int* ));
    dp[0]=(int* )malloc(1e5*sizeof(int));
    dp[1]=(int* )malloc(1e5*sizeof(int));
    dp[2]=(int* )malloc(1e5*sizeof(int));
    for(int i=0;i<1e5;i++)
    {
        dp[0][i]=dp[1][i]=dp[2][i]=-1;
    }
    cout<<f(0,0,v)<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
            cout<<dp[i][j]<<" ";
        cout<<endl;
    }
    }

    int main()
    {
         //fast_io;
        // int t;
        // cin>>t;
        // while(t--)
           solve();
    }