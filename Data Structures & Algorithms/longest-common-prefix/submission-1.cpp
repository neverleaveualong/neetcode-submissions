class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";

        for(int i = 0; i < strs[0].length(); i++){
            for(auto str : strs){
                if(i > str.length()-1 ){
                    return result;
                }
                if(str[i] != strs[0][i]){
                    return result;
                }
            }
            result.push_back(strs[0][i]);
        }
        return result;
    }
};