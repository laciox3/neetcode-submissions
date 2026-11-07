class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        static const auto fast_io = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return nullptr;
}();

        if(std::count(nums.begin(), nums.end(), 0) > 1) {
            std::vector<int> result(nums.size(), 0);
            return result;
        }

        int size = nums.size();
        int prefix = 1;
        int sufix = 1;
        
        std::vector<int> result(size, 1);

        for (int i = 0; i < size; i++) {
            result[i] *= prefix;
            prefix *= nums[i];

            result[size - i - 1] *= sufix;
            sufix *= nums[size - i - 1];
        }
        
        
        return result;
    }
};
