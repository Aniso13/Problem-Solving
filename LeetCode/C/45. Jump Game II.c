int jump(int* nums, int numsSize){
    for(int i = 1; i <numsSize; i++)
    {
        if(nums[i] + i>nums[i-1])
            nums[i] = nums[i] + i;
        else
            nums[i]=nums[i-1];
    }

    int ind = 0;
    int ans = 0;

    while(ind < numsSize - 1)
    {
        ans++;
        ind = nums[ind];
    }

    return ans;
}