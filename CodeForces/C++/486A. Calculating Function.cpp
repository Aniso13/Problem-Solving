#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long res=0;

    if(n%2==0)
        res=n/2;
    else
        res=(n/2)-n;
    cout<<res;
}

