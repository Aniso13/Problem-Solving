class Solution {
    public int search(int[] nums, int target) {
        int idx=0;
        int flag=0;
        for(int i=0;i<nums.length;i++)
        {
            if(nums[i]==target)
            {
                flag=1;
                idx=i;
                break;
            }
            if(nums[i]>target)
                break;
        }
        if(flag==1)
            return idx;
        else
            return -1;
    }
}