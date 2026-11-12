class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::unordered_set<int> set;
        int count = 1;
        int longest = 0;
        int next = 0;
        
        for (const auto& num : nums){
            set.insert(num);
        }

        for (const auto& num : set) {
            if (set.find(num - 1) == set.end()) {
                next = num + 1;
                while (set.find(next) != set.end()){
                    next++;
                    count++;
                }
            }
            longest = std::max(longest, count);
            count = 1;
        }

        return longest;
    }
};
