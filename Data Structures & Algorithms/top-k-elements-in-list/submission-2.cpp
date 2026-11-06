class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> count;
        std::vector<std::pair<int, int>> frequencies;
        
        for (const auto& num : nums) {
            count[num]++;
        }

        for (const auto& pair : count) {
            frequencies.push_back({pair.second, pair.first});
        }

        std::sort(frequencies.rbegin(), frequencies.rend());
        
        std::vector<int> result;

        for (int i = 0; i < k; i++) {
            result.push_back(frequencies[i].second);
        }

        return result;
    }
};
