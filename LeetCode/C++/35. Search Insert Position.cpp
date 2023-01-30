class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int idx=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                idx=i;
                break;
            }
            if(nums[i]>target)
            {
                idx=i;
                break;
            }
            if(i==nums.size()-1)
                idx=i+1;
        }
        return idx;
    }
};