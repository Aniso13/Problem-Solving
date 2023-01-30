#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int arr[n+1]={0};
    int big=n;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        arr[num]=1;
        while(arr[big])
        {
            cout<<big<< " ";
            big--;
        }
        cout<<endl;
    }


}