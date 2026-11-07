class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
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
