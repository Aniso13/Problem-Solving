class Solution {
public:
int arr[100001];
    int findDuplicate(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            arr[nums[i]]++;
        }
        for(int i=0;i<100001;i++)
        {
            if(arr[i]>1)
            {
                return i;
            }
        }
        return 0;
    }
};