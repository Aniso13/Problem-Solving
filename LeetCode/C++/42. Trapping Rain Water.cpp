class Solution {
public:
    int trap(vector<int>& height) {
        int i=0;
        int j=height.size()-1;


        int mxl= height[i];
        int mxr=height[j];

        int ans=0;

        while(i<j)
        {
            if(mxl<=mxr)
            {
                i++;
                mxl= max(mxl, height[i]);
                ans+=mxl-height[i];

            }
            else
            {
                j--;
                mxr=max(mxr, height[j]);
                ans+=mxr-height[j];
            }
            
        }
        return ans;

    }
};