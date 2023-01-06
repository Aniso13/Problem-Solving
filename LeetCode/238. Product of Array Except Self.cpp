class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // Initialize empty output vector
        vector<int> output;
        
        // Initialize left and right product vectors
        vector<int> left(nums.size(), 1);
        vector<int> right(nums.size(), 1);
        
        // Loop through the vector and calculate left and right products
        for (int i = 1; i < nums.size(); i++) {
            left[i] = nums[i-1] * left[i-1];
            right[nums.size()-i-1] = nums[nums.size()-i] * right[nums.size()-i];
        }
        
        // Calculate the output by multiplying left and right products
        for (int i = 0; i < nums.size(); i++) {
            output.push_back(left[i] * right[i]);
        }
        
        return output;
    }
};
