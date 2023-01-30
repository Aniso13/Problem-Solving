class Solution {
public:
    int search(vector<int>& nums, int target) {
        int idx=0;
        int flag=false;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                flag=true;
                idx=i;
                break;
            }
            if(nums[i]>target)
                break;
        }
        if(flag)
            return idx;
        else
            return -1;
    }
};