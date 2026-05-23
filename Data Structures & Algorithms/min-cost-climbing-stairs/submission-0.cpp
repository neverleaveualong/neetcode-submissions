class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int target = cost.size();
        
        vector<int> dp(target+1);

        dp[0] = 0;
        dp[1] = 0;

        for(int i =2; i<=target; i++){
            dp[i] = min(dp[i-2]+cost[i-2], dp[i-1]+cost[i-1]);
        }

        return dp[target];
    }
};
