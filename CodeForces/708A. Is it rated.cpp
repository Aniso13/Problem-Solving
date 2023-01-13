#include<bits/stdc++.h>
using namespace std;


int main()
{

    int n ;
    cin>>n;
    int arr1[n], arr2[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i]>>arr2[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr1[i]!=arr2[i])
        {
            cout<< "rated";
            return 0;
        }

    }
     for(int i=0;i<n-1;i++)
     {
         if(arr1[i]<arr1[i+1])
        {
            cout<< "unrated";
            return 0;
        }
     }
    cout<< "maybe";

    return 0;
}

