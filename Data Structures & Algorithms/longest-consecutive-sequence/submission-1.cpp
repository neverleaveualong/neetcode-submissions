class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int result = 0;
        unordered_set<int> s(nums.begin(),nums.end());

        for(auto num : s){
            if(s.find(num-1) == s.end()){
                int current = num;
                int longest = 1;

                while(s.find(current+1)!=s.end()){
                    current = current+1;
                    longest += 1;
                }
                result = max(result,longest);
            }
        }
        return result;
    }
};
