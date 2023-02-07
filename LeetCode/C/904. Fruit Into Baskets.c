int totalFruit(int* fruits, int fruitsSize){
    int last=-1;
        int second=-1;
        int last_count =0;
        int current =0;
        int mx=0;
        for(int i=0;i<fruitsSize;i++)
        {
            if(fruits[i]==last || fruits[i]==second)
                current+=1;
            else 
                current=last_count+1;
            if(fruits[i] == last)
                last_count+=1;
            else
                last_count=1;
            if(fruits[i]!=last)
            {
                second=last;
                last=fruits[i];
            }
            if(mx<current)
                mx=current;
        }
        return mx;
}