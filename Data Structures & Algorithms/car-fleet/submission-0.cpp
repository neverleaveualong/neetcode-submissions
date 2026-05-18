class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> cars;

        for(int i = 0; i<position.size(); i++){
            cars.push_back({position[i],speed[i]});
        }

        sort(cars.begin(),cars.end());

        int count = 0;
        double fleetTime = 0;
        
        for(int i = cars.size()-1; i>=0; i--){
            double arrival = (double)(target - cars[i].first) / cars[i].second;
            if(arrival > fleetTime){
                count++;
                fleetTime = arrival;
            } 
        }
        return count;
    }
};

