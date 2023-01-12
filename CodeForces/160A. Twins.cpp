#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int arr[n];
    int sum =0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }

    sort(arr,arr+n);
    reverse(arr,arr+n);
    int sum2=0;
    int c=0;
    for(int i=0;i<n;i++)
    {
        sum2+=arr[i];
        sum-=arr[i];
        c++;
        if(sum2>sum)
            break;
    }
    cout<<c;
    return 0;
}

