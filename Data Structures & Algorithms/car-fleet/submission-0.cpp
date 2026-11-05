class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int fleet = 0;
        double before = 0;

        std::map<int, double>time;
        for (int i = 0; i < position.size(); i++) {
            time[-position[i]] = (double)(target - position[i]) / speed[i];
        }

        for (const auto &it : time) {
            if (it.second > before) {
             fleet++;
             before = it.second;
            }
    }

        return fleet;

    }
};