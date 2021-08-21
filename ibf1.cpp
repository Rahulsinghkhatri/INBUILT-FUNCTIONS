//    pow(a,b);      //inside math.h

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int b,p,ans;
    cout<<"Enter the base : "<<endl;
    cin>>b;
    cout<<"Enter the power : "<<endl;
    cin>>p;
    ans=pow(b,p);
    cout<<"ANSWER IS : "<<ans<<endl;
    return 0;
}
