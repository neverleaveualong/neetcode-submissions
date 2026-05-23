class Solution {
public:
    vector<vector<int>> result;
    vector<int> subset;

    void dfs(vector<int>& num, int idx){
        result.push_back(subset);
        for(int i = idx; i<num.size(); i++){
            subset.push_back(num[i]);
            dfs(num,i+1);
            subset.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        dfs(nums,0);
        return result;
    }
};
