class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result;
        for(auto num : nums){
            result.push_back(num);
        }
        for(auto num : nums){
            result.push_back(num);
        }
        return result;
    }
};