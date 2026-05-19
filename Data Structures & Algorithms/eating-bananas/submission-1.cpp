using namespace std; 

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int result = high;
        while(low <= high){
            int mid = (low+high)/2;
            int sum = 0;
            for(auto pile : piles){
                sum += (pile + mid - 1)/mid;
            }
            if(sum > h){
                low=mid+1;
            }else{
                result = mid;
                high = mid-1;
            }
        }
        return result;
    }

};
