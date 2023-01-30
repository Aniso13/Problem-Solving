class Solution {
public:
    int arrangeCoins(int n) {
        if(n==1) return 1;
        int c=0;
        int i=1;
        while(i<=n)
        {
            n-=i;
            c++;
            i++;
        }
        return c;
    }
};