#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void solve(){
    int arr[6] = {4, 8, 15, 16, 23, 42};
    map<int, pair<int, int>> mp;
    for(int i = 0; i < 6-1; i++){
        for(int j = i+1; j < 6; j++){
            int mul = arr[i] * arr[j];
            mp[mul] = {arr[i], arr[j]}; 
        }
    }
    int ans[7];
    cout<<"? 1 2"<<endl;
    int x;
    cin>>x;
    int a, b;
    a = mp[x].first;
    b = mp[x].second;
    cout<<"? 2 3"<<endl;
    int y;
    cin>>y;
    int c, d;
    c = mp[y].first;
    d = mp[y].second;
    if(a == c){
        ans[2] = a;
        ans[1] = b;
        ans[3] = d;
    }
    else if(a == d){
        ans[2] = a;
        ans[1] = b;
        ans[3] = c;
    }
    else if(b == c){
        ans[2] = b;
        ans[1] = a;
        ans[3] = d;
    }
    else if(b == d){
        ans[2] = b;
        ans[1] = a;
        ans[3] = c;
    }
    cout<<"? 4 5"<<endl;
    int x1;
    cin>>x1;
    int a1, b1;
    a1 = mp[x1].first;
    b1 = mp[x1].second;
    cout<<"? 5 6"<<endl;
    int y1;
    cin>>y1;
    int c1, d1;
    c1 = mp[y1].first;
    d1 = mp[y1].second;
    if(a1 == c1){
        ans[5] = a1;
        ans[4] = b1;
        ans[6] = d1;
    }
    else if(a1 == d1){
        ans[5] = a1;
        ans[4] = b1;
        ans[6] = c1;
    }
    else if(b1 == c1){
        ans[5] = b1;
        ans[4] = a1;
        ans[6] = d1;
    }
    else if(b1 == d1){
        ans[5] = b1;
        ans[4] = a1;
        ans[6] = c1;
    }
    cout<<"! ";
    for(int i = 1; i < 7; i++)cout<<ans[i]<<" ";
    cout<<endl;


}
int main(){
    int cn = 1;
    // cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}
/*
 
 a[] = 4 8 16 15 23 42
 4 * 8 = 32
 4 * 16 = 64
 4 * 15 = 60
 4 * 23 = 92
 4 * 42 = 168
 8 * 16 = 128
 8 * 15 = 120
 8 * 23 = 184
 8 * 42 = 336
 16 * 15 = 240
 16 * 23 = 368
 16 * 42 = 672
 15 * 23 = 345
 15 * 42 = 630
 23 * 42 = 966
 1 2 = a[1] * a[2] = x = 32
 2 3 = a[2] * a[3] = y = 128




 1 1 = a[1] * a[1] = x
 a[1] = sqrt(x);



*/