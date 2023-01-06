class Solution {
public:
    bool isAnagram(string s, string t) {
       if(s.size()!=t.size())
            return false;
        int a[300]={};
        int b[300]={};
        for(int i=0;i<s.size();i++){
            a[s[i]]++; b[t[i]]++;
        }
            
        for(int i=0;i<300;i++){
            if(a[i]!=b[i])
                return false;
        }
        return true;
    }
};