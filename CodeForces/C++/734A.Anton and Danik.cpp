#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    char arr[n];
    int a=0;
    int d=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]=='D')
            d++;
        else
            a++;
    }
    if(a>d)
        cout<<"Anton";
    else if (d>a)
        cout<< "Danik";
    else
        cout<< "Friendship";
}
