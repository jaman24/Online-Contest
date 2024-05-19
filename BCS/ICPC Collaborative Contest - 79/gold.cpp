#include<iostream>
#include<map>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;

int perRescueTime[35];
int profit[35];
int dp[35][1005];

int knapsack(int n, int weight){
    if(n <= 0 || weight <= 0)  return 0;

    if(dp[n][weight] != -1)  return dp[n][weight];

    int excludedTreasur = knapsack(n-1, weight);

    if(perRescueTime[n] <= weight){
        dp[n][weight] = max(excludedTreasur, knapsack(n-1, weight - perRescueTime[n]) + profit[n]);
    }else{
        dp[n][weight] = excludedTreasur;
    }

    return dp[n][weight];
}

int main()
{
    int cnt = 0;

    int oxygen, constant, numOfTreasures, depth, gold;

    while(cin >> oxygen >> constant){

        cin >> numOfTreasures;

        map<int, pair<int, int> > m;

        for(int i = 1; i <= numOfTreasures; i++){
            cin >> depth >> gold;

            profit[i] = gold;
            m[i] = make_pair(depth, gold);
            perRescueTime[i] = depth * (3 * constant);
        }

        if(cnt)
            cout << endl;

        cnt = 1;

        memset(dp, -1, sizeof(dp));

        int result = knapsack(numOfTreasures, oxygen);

        cout << result << endl;

        vector<int> takenTreasure;

        int p = numOfTreasures;

        while(p){
            if(oxygen && dp[p][oxygen] != dp[p-1][oxygen]){
				takenTreasure.push_back(p);
                oxygen -= perRescueTime[p];
            }
            p--;
        }

        int len = takenTreasure.size();
        cout << len << endl;

        for(int i = len-1; i >= 0; i--){
            cout << m[ takenTreasure[i] ].first << " " << m[ takenTreasure[i] ].second << endl;
        }
    }

    return 0;
}

