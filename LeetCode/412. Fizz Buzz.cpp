class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector <string> ans;
        for(int i=1;i<=n;i++)
        {
            if(i==1)
            {
                ans.push_back("1");
                continue;
            }
            if(i%3==0 and i%5==0)
            {
                ans.push_back("FizzBuzz");
                continue;
            }
                
            else if (i%3==0)
            {
                ans.push_back("Fizz");
                continue;
            }
                
            else if(i%5==0)
            {
                ans.push_back("Buzz");
                continue;
            }
                
            else 
            {
                ans.push_back(to_string(i));
                continue;
            }
                
        }
        return ans;
    }
};