class Solution {
public:
    int minSwaps(string s) {
        int mx=0;
        int extra_close=0;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]==']')
            {
                extra_close++;
            }
            else
                extra_close --;
            mx=max(mx,extra_close);
        }

        return (mx+1)/2;
    }
};