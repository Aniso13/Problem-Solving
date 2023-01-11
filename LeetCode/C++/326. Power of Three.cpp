class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==1)
            return true;
        if(n<3 and n>-3 or n%3!=0)
            return false;
        int i=1;
        while(n>=pow(3,i))
        {
            if(n==pow(3,i))
                return true;
          i++;  
        }
        return false;
    }
};