#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    long long r=0;
    string s;
    while(n--)
    {
        cin>>s;
        if(s=="Tetrahedron")
            r+=4;
        else if(s=="Cube")
            r+=6;
        else if(s=="Octahedron")
            r+=8;
        else if(s=="Dodecahedron")
            r+=12;
        else if(s=="Icosahedron")
            r+=20;
    }
    cout<<r;
    return 0;
}



