#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int sumS=0;
    int sumD=0;
    int start=0;
    int last=n-1;
    if(n<2)
    {
        cout<<arr[0]<<" "<<0;
        return 0;
    }
    while(start<=last)
    {
        if(arr[start]>=arr[last])
        {
            sumS+=arr[start];
            arr[start]=0;
            start++;

        }
        else
        {
            sumS+=arr[last];
            arr[last]=0;
            last--;
        }
        if(arr[start]>=arr[last])
        {
            sumD+=arr[start];
            arr[start]=0;
            start++;
        }
        else
        {
            sumD+=arr[last];
            arr[last]=0;
            last--;
        }

    }
    cout<<sumS<<" "<<sumD;

}
