class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        std::vector<int> prefix(size, 1);
        std::vector<int> sufix(size, 1); 
        
        for (int i = 1; i < size; i++) {
            prefix[i] = prefix[i - 1] * nums[i - 1];
        }
        
        for (int i = size - 2; i >= 0; i--) {
            sufix[i] = sufix[i + 1] * nums[i + 1];
        }
        
        std::vector<int> result(size);
        for (int i = 0; i < size; i++) {
            result[i] = prefix[i] * sufix[i];
        }
        return result;
    }
};
