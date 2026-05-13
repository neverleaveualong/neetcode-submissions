class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(),1);

        int left_count = 1;
        for(int i = 0; i<nums.size(); i++){
              result[i] = left_count;
              left_count *= nums[i];
        }

        int right_count = 1;
        for(int i = nums.size()-1; i>=0; i--){
            result[i] *= right_count;
            right_count *= nums[i];
        }

        return result;
    }
};
