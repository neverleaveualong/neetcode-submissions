class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        int result = 1;
        unordered_set<int> s(nums.begin(),nums.end());

        for(auto num : nums){
            if(s.count(num-1)){
                continue;
            }
            else{
                int current = num;
                while(s.count(current+1)){
                    current++;
                }
                result =max(result,(current-num)+1);
            }
        }

        return result;
    }
};
