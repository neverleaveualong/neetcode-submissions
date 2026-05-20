class Solution {
public:
    string minWindow(string s, string t) {
        string result = "";
        unordered_map<char,int> tStore;
        unordered_map<char,int> sStore;

        for(auto s1 : t){
            tStore[s1]++;
        }

        int left = 0;
        for(int right = 0; right<s.length(); right++){
            sStore[s[right]]++;

            bool ok =true;

            for(auto p : tStore){
                if (sStore[p.first] < p.second){
                    ok = false;
                    break;
                }
            }

            while(ok){
                if (result == "" || (right - left + 1) < result.length()) {
                    result = s.substr(left, right - left + 1);
                }

                sStore[s[left]]--;
                left++;

                ok = true;
                for (auto p : tStore) {
                    if (sStore[p.first] < p.second) {
                        ok = false;
                        break;
                    }
                }

                if (!ok) break;
            }
        }
        return result;
    }
};
