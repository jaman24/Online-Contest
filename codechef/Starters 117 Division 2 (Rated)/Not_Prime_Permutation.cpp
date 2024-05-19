#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MOD = 1e9 + 7;
long long int solve(vector<int>& nums){
    if(nums.empty()){
        return 0;
    }
    long long int sum = 0;
    int mn = INT_MAX;
    for(auto x:nums){
        sum += x;
        mn = min(mn, x);
    }
    long long int cur_ans = sum * mn;
    int ind = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == mn){
            vector<int> next(nums.begin() + ind, nums.begin() + i);
            cur_ans = max(cur_ans, solve(next));
            ind = i + 1;
        }
    }
    if(ind < nums.size()){
        vector<int> next(nums.begin() + ind, nums.end());
        cur_ans = max(cur_ans, solve(next));
    }
    return cur_ans;
}
void solve1(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(auto &x:nums)cin>>x;
    cout<<solve(nums) % MOD<<endl;
    // vector<int> next(nums.begin() + 3, nums.begin() + 3);
    // for(auto x:next)cout<<x<<" ";
    // cout<<endl;

}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve1();
    }
    return 0;
}