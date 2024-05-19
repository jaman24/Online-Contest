#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define vb vector<bool>
#define vvb vector<vector<bool>>
#define f float
#define pi 3.14

#define forp(n) for(ll i=0;i<n;i++)
// #define forp(l,r) for(ll i=l;i<r;i++)

bool checkParity(int j,int i,vector<int>&arr)
{
	if(j==i)
		return true;

	if(i==0)
		return true;

	if(abs(arr[i])%2==0 and abs(arr[i-1])%2!=0)
		return true;
	if(abs(arr[i])%2==1 and abs(arr[i-1])%2==0)
		return true;

	return false;
}
void solve()
{
	int n;
	cin>>n;

	vector<int>arr(n);

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	if(n==1)
	{
		cout<<arr[0]<<endl;
		return ;
	}

	int i=0,j=0;

	long long sum=0;
	long long ans=INT_MIN;

	while(j<n)
	{
		while(j<n and sum>=0 and checkParity(i,j,arr))
		{
			sum+=arr[j];
			j++;
			ans=max(ans,sum);
		}
		while(i<j)
		{
			sum-=arr[i];
			ans=max(ans,sum);
			i++;
		}
		i=j;
		if(sum<0)
		{
			j++;
			sum=0;
		}
	}

	cout<<ans<<endl;
	return ;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}

	return 0;
}