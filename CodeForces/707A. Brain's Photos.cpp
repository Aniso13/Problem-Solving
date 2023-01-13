#include<bits/stdc++.h>
using namespace std;


int main()
{

    int n , m;
    cin>>n>>m;
    char s[n][m];
    int f=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>s[i][j];
            if(s[i][j]!='W'&&s[i][j]!='B'&&s[i][j]!='G')
                f=1;
        }
    }
    if(f==1)
        cout<<"#Color";
    else
        cout<< "#Black&White";

    return 0;
}
