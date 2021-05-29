#include <iostream>
#include<math.h>
using namespace std;
int power(int x,int y);
int main()
{
    int x,y,p;
    cout<<"Enter 2 numbers"<<"\n";
    cin>>x>>y;
    p=power(x,y);
    cout<<x<<" to the power of "<<y<<" is : "<<p;
    return 0;
}
int power(int x,int y)
{
    int p;
    p=pow(x,y);
    return p;
}