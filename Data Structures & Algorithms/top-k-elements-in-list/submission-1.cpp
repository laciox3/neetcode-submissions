class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int before = -1001;
        int count = -1;
        std::vector<std::pair<int, int>>frequencies;
        std::sort(nums.begin(), nums.end());
        for (const auto& num : nums) {
            if (num != before) {
                frequencies.push_back(std::make_pair(1, num));
                before = num;
                count++;
            }
            else {
                frequencies[count].first++;
            }
        }
        std::sort(frequencies.begin(), frequencies.end(), std::greater<std::pair<int, int>>());

        std::vector<int> result;

        for (int i = 0; i < k; i++) {
            result.push_back(frequencies[i].second);
        }

        return result;
    }
};
