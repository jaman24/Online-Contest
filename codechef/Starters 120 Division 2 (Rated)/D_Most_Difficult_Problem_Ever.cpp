#include <string>
#include <bits/stdc++.h>
#define int long long

using namespace std;

int F(int A, int B, int C, long long x)  {
    long long res = A * x * x + B * x + C ;
    return res;
}

void solve(){
	int a,b,c,l,r;
	cin>>a>>b>>c>>l>>r;
	int mid,high=sqrt(r/a)+10,low=1;
	while(high>low){
		mid=(high+low)/2;
		int ans=F(a,b,c,mid);
		if(ans>r) high=mid;
		else low=mid+1;
	}
	int highest=high;
	high=sqrt(r/a)+10,low=1;
	while(high>low){
		mid=(high+low)/2;
		int ans=F(a,b,c,mid);
		if(ans<l) low=mid+1;
		else high=mid;
	}
	int lowest=low;
	cout<<highest-lowest<<endl;

	 // cout<<mid<<endl;
	 // int ll=F(a,b,c,mid);
	 // cout<<ll<<endl;


}
int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++) solve();
    
	return 0;
}