class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> s;
        vector<int> v(temperatures.size(), 0);

        for(int i=0; i<temperatures.size(); i++){ 
            while(!s.empty()&&temperatures[i]>temperatures[s.top()]){
                int prev = s.top();
                s.pop();
                v[prev]=(i-prev);
            }
            s.push(i);
        }
        return v;
    }
};
