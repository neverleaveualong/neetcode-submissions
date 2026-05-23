class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> h;
        for(auto s:stones){
            h.push(s);
        }
        while(h.size() > 1){
            int x = h.top(); h.pop();
            int y = h.top(); h.pop();

            if ( x != y){
                h.push(x-y);
            }
        }
        return h.empty() ? 0 : h.top();
    }
};
