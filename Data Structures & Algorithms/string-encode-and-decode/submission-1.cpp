class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string;
        for(auto str : strs){
            encoded_string += to_string(str.length());
            encoded_string += '#';
            encoded_string += str;
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        int i = 0;

        while(i < s.length()){
            int j = i;
            while(s[j] != '#'){
                j++;
            }
            int len = stoi(s.substr(i,j-i));

            string content = s.substr(j+1,len);
            strs.push_back(content);

            i=j+1+len;
        }
        return strs;
    }
};
