class Solution {
   public:
    int largestRectangleArea(vector<int>& heights) {
        int result = 0;
        stack<int> s;

        for (int i = 0; i < heights.size(); i++) {
            while (!s.empty() && heights[i] < heights[s.top()]) {
                int height = heights[s.top()];
                s.pop();

                int width;
                if (s.empty()) {
                    width = i;
                } else {
                    width = i - s.top() - 1;
                }
                result = max(result, height * width);
            }
            s.push(i);
        }

        while (!s.empty()) {
            int height = heights[s.top()];
            s.pop();

            int width;
            if (s.empty()) {
                width = heights.size();
            } else {
                width = heights.size() - s.top() - 1;
            }
            result = max(result, height * width);
        }

        return result;
    }
};
