#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int t;
    cin>>t;
    while(t--){
        long long n,x;
        cin>>n>>x;
        long long a[n+1];
        for(int i = 1; i <= n; i++){
            cin>>a[i];
        }
        long long l = 0;
        long long r = 1e10;
        while(l<r){
            long long mid = (l+r+1) / 2;
            long long k = 0;
            bool flag = 0;
            for(int i = 1; i <= n; i++){
                if(a[i]<mid)
                    k += (mid - a[i]);
                if(x<k){
                    flag = 1;
                    break;
                }
            }
            if(flag)
                r = mid-1;
            else
                l = mid;
        }
        cout<<max(l,r)<<"\n";
    }   
}