int findMin(int* nums, int numsSize){
    int l=0;
    int r=numsSize-1;
    while(l<r)
    {
        if(nums[l]<nums[r])
             return nums[l];
          int mid =(l+r)/2;
          if(nums[mid]>nums[r])
              l=mid+1;
          else
             r=mid;
     }
     return nums[r];
}