class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;

        int index=0;

        for(auto num : nums){
            int need = target - num;
            if(m.count(need) > 0){
                return {m[need],index};
            }
            m[num]=index;
            index++;
        }
        return {};
    }
};
