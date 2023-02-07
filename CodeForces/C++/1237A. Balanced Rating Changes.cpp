#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    bool d=0;
    for(int i=0; i<n; i++)
    {

        double r= (double)arr[i]/2;
        if(arr[i]%2==0)
        {
            arr[i]/=2;
        }
        else
        {
            if(d==0)
            {
                arr[i]=ceil(r);
                d=1;
            }
            else
            {
                arr[i]=floor(r);
                d=0;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
