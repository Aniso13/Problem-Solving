#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin>>s;
    int arr[300]={0};
    for(int i=0;i<s.size();i++)
        arr[s[i]]++;
    int c=0;
    for(int i=0;i<300;i++)
        if(arr[i]>0)
            c++;
    if(c%2==0)
        cout<< "CHAT WITH HER!";
    else
        cout<< "IGNORE HIM!";
}
