#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void generateMatrix(int n, int k) {
    for(int i = 2; i <= n; i+=2){
        if(i*i == k){
            cout<<"Yes"<<endl;
            vector<vector<int>> matrix(n, vector<int>(n, 0));
            for(int j = 0; j < i; j++){
                for(int k = 0; k < i; k++){
                    matrix[j][k] = 1;
                }
            }
            for(auto x:matrix){
                for(auto y:x){
                    cout<<y<<" ";
                }
                cout<<endl;
            }
            return;
        }
    }
    if (k % n != 0 || k > n * n) {
        cout << "No" << endl;
        return;
    }
    cout<<"Yes"<<endl;
    vector<vector<int>> matrix(n, vector<int>(n, 0));

    int onesPerRow = k / n;
    int onesPerColumn = k / n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < onesPerRow; ++j) {
            matrix[i][(i + j) % n] = 1;
        }
    }
    for(auto x:matrix){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return;
}

void solve(){
    ll n,k;
    cin>>n>>k;
    generateMatrix(n, k);
}
int main(){
    int cn = 1;
    cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}