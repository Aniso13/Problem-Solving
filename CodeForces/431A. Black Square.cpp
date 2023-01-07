#include <bits/stdc++.h>
using namespace std;


int main()
{
    int arr[4];
    for(int i=0;i<4;i++)
        cin>>arr[i];

    string s;
    cin>>s;
     int arrx[5]={0};
     for(int i=0;i<s.size();i++)
     {
         arrx[s[i]-'0']++;
     }
     int mx=0;
     mx+= arr[0]*arrx[1] +arr[1]*arrx[2] +arr[2]*arrx[3] +arr[3]*arrx[4];

     cout<<mx;
    return 0;
}
