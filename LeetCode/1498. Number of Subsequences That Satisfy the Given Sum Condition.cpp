class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector <int> pow(nums.size()+1 , 1);
        int mod=(int)1e9 + 7;

        for(int i=1;i < nums.size() ;i++)
        {
            pow[i] = pow[i-1]*2 %mod;
        }
        int l=0;
        int r=nums.size()-1;
        int ans=0;
        while(l<=r)
        {
            if(nums[l]+nums[r]>target)
                r--;
            else
            {
                ans=(ans+pow[r-l])%mod;
                l++;
            }



        }
        return ans;
        
    }
};