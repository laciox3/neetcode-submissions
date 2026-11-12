
static const auto fast_io = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return 0;
}();

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::unordered_set<int> set;
        set.reserve(nums.size());
        
        for (const auto& num : nums){
            set.insert(num);
        }

        int longest = 0;
        
        for (const auto& num : set) {
            if (!set.contains(num - 1)) {
                int next = num + 1;
                while (set.contains(next)){
                    ++next;
                }
                longest = std::max(longest, next - num);
            }
        }

        return longest;
    }
};
