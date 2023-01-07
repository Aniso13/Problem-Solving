#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,sum=0,c=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            sum+=arr[i];
        }
        else if(arr[i]<0 and sum>0)
        {
            sum+=arr[i];
            if(sum<0)
                sum=0;
        }
        else if(arr[i]<0 and sum==0)
        {
            c++;
        }
    }
    cout<<c;
    return 0;
}
