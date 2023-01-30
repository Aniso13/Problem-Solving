class Solution {
    public int searchInsert(int[] nums, int target) {
        int idx=0;
        for(int i=0;i<nums.length;i++)
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
            if(i==nums.length-1)
                idx=i+1;
        }
        return idx;
    }
}