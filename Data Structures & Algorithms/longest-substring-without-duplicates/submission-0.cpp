class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int result = 0;

        for(int i = 0 ; i < s.length(); i++){
            unordered_set<char> check_set;
            for(int j = i; j<s.length(); j++){
                if(check_set.count(s[j])){
                    break;
                } 
                check_set.insert(s[j]);
                result = max(result,j-i+1);
            }
        }

        return result;
    }
};
