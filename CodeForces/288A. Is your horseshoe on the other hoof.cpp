#include<bits/stdc++.h>
using namespace std;
void horseshoe(vector<int>v)
{
    set<int> s( v.begin(), v.end() );
    v.assign( s.begin(), s.end() );
    if(v.size()>=4)
        cout<<0;
    else
        cout<<4-v.size();
}
int main()
{
    vector<int>v;
    int a;
    for(int i=0;i<4;i++){
        cin>>a;
        v.push_back(a);
    }

    horseshoe(v);
}