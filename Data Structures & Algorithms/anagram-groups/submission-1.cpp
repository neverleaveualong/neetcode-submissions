class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> m;

        for(auto str : strs){
            string word = str;
            sort(word.begin(),word.end());
            m[word].push_back(str);
        }

        for(auto item : m){
            result.push_back(item.second);
        }

        return result;
    }
};
