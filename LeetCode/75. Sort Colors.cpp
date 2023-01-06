class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int>mp;

        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }

        for(int i=0;i<nums.size();i++)
        {
            if(mp[0])nums[i]=0,mp[0]--;
            else if(mp[1])nums[i]=1,mp[1]--;
            else nums[i]=2,mp[2]--;
        }
    }
};
/*

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int st=0;
		int ed=nums.size()-1;
		
		for(int i=0;i<=ed;i++)
		{
			if(nums[i]==2){
				swap(nums[i--],nums[ed--]);
			}
			
			else if(nums[i]==0){
				swap(nums[i],nums[st++]);
			}
				
		}
    }
};


*/