#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 202206214218227;
void cal(int n, int k){
    if(k < n){
        cout<<"sin("<<k;
        if(k%2)cout<<"-";
        else cout<<"+";
        cal(n, k+1);
    }
    else{
        cout<<"sin("<<n;
    }
    cout<<")";
}
void print(int n, int k){
    if(n < 1){
        return;
    }
    cout<<"(";
    print(n-1, k+1);
    cal(n, 1);
    cout<<"+"<<k<<")";
}
int main(){
    int n;
    cin>>n;
    print(n-1, 2);
    cal(n, 1);
    cout<<"+1"<<endl;
    return 0;
}
// 1 = sin(1) + 1; = A1 + 1
// 2 = (sin(1) + 2)sin(1 - sin(2)) + 1; = (A1 + 2)A2 + 1
// 3 = ((sin(1)+3)sin(1-sin(2))+2)sin(1-sin(2+sin(3)))+1; 
// = ((A1 + 3)A2 + 2)A1 + 1
// a1 = sin(1);
// a2 = sin(1 - sin(2));
// a3 = sin(1 - sin(2 + sin(3)));
