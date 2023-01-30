#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n,k;
	cin>>n>>k;
	string s="";
	for(int i=0;i<n;i++)
    {
        s+=(char)((int)'a'+i%k);
    }
    cout<<s;
}
