class TimeMap {
public:

    unordered_map<string,vector<pair<int,string>>> m;

    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        m[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        int left = 0;
        int right = m[key].size()-1;

        string result = "";

        while(left<=right){
            int mid = (left + right)/2;

            if(m[key][mid].first <= timestamp){
                result = m[key][mid].second;
                left = mid + 1;
            }else{
                right = mid -1;
            }
        }

        return result;
    }
};
