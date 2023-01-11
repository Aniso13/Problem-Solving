class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        string y=to_string(x);
        if(y.size()==1)
            return true;
        int l=y.size()-1;
        int i=0;
        while(i<=l)
        {
            if(y[i]!=y[l])
                return false;
            i++;
            l--;
        }
        return true;
    }
};