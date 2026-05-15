class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size()-1;

        int result = 0;

        while(left<right){
            int width = min(heights[left],heights[right]) * (right - left);
            
            if(heights[left] > heights[right]){
                right--;
            } else {
                left++;
            } 

            result = max(result,width);
        }
        return result;
    }
};
