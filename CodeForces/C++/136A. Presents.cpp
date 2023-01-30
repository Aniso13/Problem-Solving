#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int >v;
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
        cin>>arr[i];
    int i=1;
    while(i<=n)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[j]==i)
                v.push_back(j+1);
        }
        i++;
    }
    for(int x=0;x<v.size();x++)
        cout<<v[x]<<" ";
	return 0;
}
