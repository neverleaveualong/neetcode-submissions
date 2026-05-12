class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> m;
        for(char c : s){
            m[c]++;
        }
        for(char c : t){
            m[c]--;
        }

        for(auto o : m){
            if(o.second != 0){
                return false;
            }
        }
        return true;
    }
};
