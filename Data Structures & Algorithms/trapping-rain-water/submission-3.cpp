class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;

        int sum = 0;

        int leftmax = 0;
        int rightmax = 0;

        while(left<right){
            if(height[left]<height[right]){
                if(height[left] < leftmax){
                    sum += leftmax - height[left];
                }else{
                    leftmax = height[left];
                }
                left++;
            }else{
                if(height[right]<rightmax){
                    sum += rightmax - height[right];
                }else{
                    rightmax = height[right];
                }
                right--;
            }
        }
        return sum;
    }
};
