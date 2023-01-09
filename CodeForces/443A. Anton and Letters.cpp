#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    getline(cin, s);
    int arr[300]={0};
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a' && s[i]<='z')
            arr[s[i]]++;
    }
    int c=0;
    for(int i=0;i<301;i++)
    {
        if(arr[i]>0)
            c++;
    }
    cout<<c-1;

}
