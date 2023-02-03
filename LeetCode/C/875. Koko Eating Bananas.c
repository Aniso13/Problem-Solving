int minEatingSpeed(int* piles, int pilesSize, int h){
    long long r=1e9+1;
    int l=1;
    while(l<r)
    {
        int mid =(l+r)/2;
        int total=0;
         for(int i=0;i<pilesSize;i++)
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