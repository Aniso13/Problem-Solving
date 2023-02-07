class Solution {
    public int totalFruit(int[] fruits) {
        int last=-1;
        int second=-1;
        int last_count =0;
        int current =0;
        int mx=0;
        for(Integer fruit : fruits)
        {
            if(fruit==last || fruit==second)
                current+=1;
            else 
                current=last_count+1;
            if(fruit == last)
                last_count+=1;
            else
                last_count=1;
            if(fruit!=last)
            {
                second=last;
                last=fruit;
            }
            mx=Math.max(current,mx);
        }
        return mx;
    }
}