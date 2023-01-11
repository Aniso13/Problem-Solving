class Solution {
public:
    int maxArea(vector<int>& height) {
      int mx=INT_MIN;
        int start=0;
        int end=height.size()-1;
        while(start<=end)
        {
            int ans = min(height[start], height[end]) * (end-start);
            mx = max(mx,ans);
            if(height[start]<height[end])
                start++;
            else
                end--;
        }
        return mx;
    }
};