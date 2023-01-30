#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    if(n<26)
    {
        cout<< "NO";
        return 0;
    }
    char s[n];
    for(int i=0;i<n;i++)
    {
        char a;
        cin>>a;
        s[i]=tolower(a);
    }
    int counter =0;
    sort(s,s+n);
    for(int i=0;i<n;i++)
    {
        if(s[i]!=s[i+1])
            counter++;
    }

    if(counter==26)
        cout<< "YES";
    else
        cout<< "NO";

    return 0;

}

