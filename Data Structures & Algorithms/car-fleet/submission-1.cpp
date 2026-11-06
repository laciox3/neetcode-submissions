class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int fleet = 0;
        double before = 0;

        std::vector<std::pair<int,double>> positions;
        for (int i = 0; i < position.size(); i++) {
            positions.push_back(std::make_pair(position[i],(double)(target - position[i]) / speed[i]));
        }

        std::sort(positions.begin(),positions.end(), std::greater<std::pair<int,double>>());

        for (const auto &it : positions) {
            if (it.second > before) {
                fleet++;
                before = it.second;
            }
        }

        return fleet;

    }
};