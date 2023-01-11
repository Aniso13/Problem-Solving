class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits.size()==1 and digits[0]==9)
        {
            digits[0] =1;
            digits.push_back(0);
            return digits;
        }
        digits[digits.size()-1]++;
        int temp;
        for(int i=digits.size()-1;i>=0;i--)
        {
            temp=digits[i];
           
            if(temp>=10)
            {
                if(i==0)
                {
                    digits[0]=0;
                     digits.insert(digits.begin(),1);
                }
                else
                {
                    digits[i-1]++;
                    digits[i]%=10;
                }
                
            }
        }
    return digits;
    }
};