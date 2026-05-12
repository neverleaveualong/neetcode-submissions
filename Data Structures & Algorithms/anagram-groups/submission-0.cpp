class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> output;
        unordered_map<string,vector<string>> m;

        for(auto s : strs){
            string key = s;
            sort(key.begin(),key.end());
            m[key].push_back(s);
        }

        for(auto &p :m){
            output.push_back(p.second);
        }        
    return output;
    }
};
