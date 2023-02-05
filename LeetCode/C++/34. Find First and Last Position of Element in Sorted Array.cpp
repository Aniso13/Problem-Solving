int search(vector<int>nums, int target, bool s)
{
    int l=0;
    int r =nums.size()-1;
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
            if(s)
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



class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int f= search(nums, target, true);
        int l=search(nums, target, false);
        return{l,f};
    }
};