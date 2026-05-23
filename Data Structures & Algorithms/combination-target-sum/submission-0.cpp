class Solution {
public:
    vector<vector<int>> result;
    vector<int> subset;
    int Target;

    void dfs(vector<int>& nums, int idx, int sum){
        if(sum == Target){
            result.push_back(subset);
            return;
        }
        if(sum > Target){
            return;
        }
        for(int i = idx; i<nums.size(); i++){
            subset.push_back(nums[i]);
            dfs(nums,i,sum+nums[i]);
            subset.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        Target = target;
        dfs(nums, 0, 0);
        return result;
    }
};
