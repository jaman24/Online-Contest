#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;while(t--){

        int n, k, d, w; cin >> n >> k >> d >> w; 
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];

        // first dose of any pack given to the j'th person,
        int i = n - 2, j = n - 1, ans = 0, doses = 1;
        for(; i >= 0; i--){
            if(doses == k) {ans++; j = i; doses = 1;}
            else if(v[j] - (v[i] + w) > d) {doses = 1; ans++; j = i;}
            else doses++; 
        }
        cout << ans + 1 << endl;
 

    }
    return 0;
}