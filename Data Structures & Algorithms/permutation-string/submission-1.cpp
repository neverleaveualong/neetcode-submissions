class Solution {
   public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> s1Store;
        unordered_map<char, int> s2Store;
        for (auto s : s1) {
            s1Store[s]++;
        }
        int left = 0;
        int windowSize = s1.length();

        for (int right = 0; right < s2.size(); right++) {
            s2Store[s2[right]]++;

            if ((right - left + 1) > windowSize) {
                s2Store[s2[left]]--;
                if (s2Store[s2[left]] == 0) {
                    s2Store.erase(s2[left]);
                }
                left++;
            }
            
            if ((right - left + 1) == windowSize) {
                if (s1Store == s2Store) {
                    return true;
                }
            }
        }
        return false;
    }
};
