

#include <bits/stdc++.h>
using namespace std;



int main() {

    int n,m;
    cin>>n>>m;
    n=2*n+1;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int i=1;i<n;i++)
    {
        if(arr[i]>(arr[i-1]+1)&&arr[i]>(arr[i+1]+1))
        {
            arr[i]-=1;
            m--;
        }
        if(m==0)
            break;
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<< " ";
	return 0;
}
