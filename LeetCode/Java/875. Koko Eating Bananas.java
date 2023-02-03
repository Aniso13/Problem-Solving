class Solution {
    public int minEatingSpeed(int[] piles, int h) {
        int r=0;
        for(int i=0;i<piles.length;i++)
            {
                if(piles[i]>r)
                    r=piles[i];
            }
        
        int l=1;
        while(l<r)
        {
            int mid =(l+r)/2;
            int total=0;
            for(int i=0;i<piles.length;i++)
            {
                total+=(piles[i]+mid-1)/mid;
            }
            if(total>h)
                l=mid+1;
            else 
                r=mid;
        }
        return r;
    }
}