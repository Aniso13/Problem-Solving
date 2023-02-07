
#include <bits/stdc++.h>
using namespace std;

int main() {


	int n;
	cin>>n;
	char arr[n];
	for(int i=0;i<n;i++)
        cin>>arr[i];
        int f, l;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!='.')
        {
            f=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]!='.')
        {
            l=i;
            break;
        }
    }
    if(arr[f]=='R'&& arr[l]=='R')
        cout<<f+1<<" "<<l+1+1<<endl;
    else if(arr[f]=='L'&& arr[l]=='L')
        cout<<l+1<< " "<<f-1+1<<endl;
    else if (arr[f]=='R'&&arr[l]=='L')
    {
        for(int i=f ;i<n;i++)
        {
            l=i;
            if(arr[i]=='L')
                break;
        }
        cout<<f+1<< " "<< l+1-1<<endl;
    }


	return 0;
}
