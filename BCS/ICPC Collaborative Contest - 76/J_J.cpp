#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int lis(int arr[], int n)
{
    int *lis, i, j, max = 0;
    lis = (int*)malloc(sizeof(int) * n);
 
    for (i = 0; i < n; i++)
        lis[i] = 1;
 
    for (i = 1; i < n; i++)
        for (j = 0; j < i; j++)
            if (arr[i] > arr[j] && lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1;
 
    for (i = 0; i < n; i++)
        if (max < lis[i])
            max = lis[i];
 
    free(lis);
    return max;
}
void solve(){
    ll n;
    string s;
    cin>>s;
    n = s.size();
    int v[n];
    for(int i=0;i<n;i++){
        v[i] = s[i]-'a'+ 1;
    }
    cout<<26 - lis(v , n)<<endl;
    

}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}