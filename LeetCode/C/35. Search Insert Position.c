int searchInsert(int* nums, int numsSize, int target){
        int idx=0;
        for(int i=0;i<numsSize;i++)
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
            if(i==numsSize-1)
                idx=i+1;
        }
        return idx;
}