#include<iostream>
using namespace std;
inline int maximum(int a,int b,int c)
{
    return (a>b)?((a>c)?a:c):((b>c)?b:c);
}
main()
{
    int a,b,c;
    cout<<"Enter the a:";
    cin>>a;
    cout<<"enter the b:";
    cin>>b;
    cout<<"Enter the c:";
    cin>>c;
    int max=maximum(a,b,c);
    cout<<"\nMaximum value:"<<max;
    return 0;
}
