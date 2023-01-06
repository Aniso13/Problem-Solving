class Solution {
public:
    int countPalindromicSubsequence(string s) {
       int f[26]={[0 ... 25]=INT_MAX} ,l[26]={0}, res=0;

       for(int i=0; i<s.size(); i++)
       {
           f[s[i]-'a'] = min(i,f[s[i]-'a']) ;
           l[s[i]-'a'] = i;
       }

       for(int i=0; i<26; i++)
       {
           if (f[i]<l[i])
           {
               res+= unordered_set<char>(begin(s)+f[i]+1,begin(s)+l[i]).size();
           }
       }
       return res;

    }
};


/*
class Solution {
public:
    int countPalindromicSubsequence(string s) {
       int f[26]={[0 ... 25]=INT_MAX} ,l[26]={0}, res=0;

       for(int i=0; i<s.size(); i++)
       {
           f[s[i]-'a'] = min(i,f[s[i]-'a']) ;
           l[s[i]-'a'] = i;
       }

       for(int i=0; i<26; i++)
       {
           if (f[i]<l[i])
           {
               res+= unordered_set<char>(begin(s)+f[i]+1,begin(s)+l[i]).size();
           }
       }
       return res;

    }
};

*/