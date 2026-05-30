class Solution {
   public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";

        for (int i = 0; i < strs[0].length(); i++) {
            for (const string& str : strs) {
                if(i>str.length()){
                    return result;
                }
                if (strs[0][i] != str[i]) {
                    return result;
                }
            }
            result.push_back(strs[0][i]);
        }
        return result;
    }
};