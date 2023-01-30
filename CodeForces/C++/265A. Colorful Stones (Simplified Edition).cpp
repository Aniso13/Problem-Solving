#include<bits/stdc++.h>
using namespace std;

int main()
{
   string s1;
   cin>>s1;
   string s2;
   cin>>s2;
   int ans=0;
   for(int i=0;i<s2.size();i++)
   {
       if(s1[ans]==s2[i])
            ans++;

   }
   cout<<ans+1;
}