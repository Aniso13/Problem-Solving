#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    long long minarr[n]={0};
    long long maxarr[n]={0};

    for(int i=0;i<n;i++)
    {
        maxarr[i]=max(abs(arr[i]-arr[0]),abs(arr[i]-arr[n-1]));
        if(i==0)
            minarr[0]= abs(arr[i]-arr[1]);
        else if (i==n-1)
            minarr[n-1]=abs(arr[n-1]-arr[n-2]);
        else
            minarr[i]=min (abs(arr[i]-arr[i-1]),abs(arr[i]-arr[i+1]));
    }

    for(int i=0;i<n;i++)
        cout<<minarr[i]<<" "<<maxarr[i]<<"\n";
}