


class Solution {
    int search(int[] nums, int target, int s)
{
    int l=0;
    int r =nums.length-1;
    int pos=-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(nums[mid]<target)
        {
            l=mid+1;
        }
        else if(nums[mid]>target)
            r=mid-1;
        else
        {
            pos=mid;
            if(s==1)
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
    }
    return pos;
}
    public int[] searchRange(int[] nums, int target) {
        int f= search(nums, target, 1);
        int l=search(nums, target, 0);
        int arr []={l ,f};
        return arr;
    }
}