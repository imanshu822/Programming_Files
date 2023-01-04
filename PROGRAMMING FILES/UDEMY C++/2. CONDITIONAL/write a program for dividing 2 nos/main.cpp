//Write a program for dividing 2 nos
#include <iostream>
using namespace std;

int main()
{
    float a,b,c;
    cout<<"Enter two nos ";
    cin>>a>>b;
    if (b==0)
    {
        cout<<"Divided by 0 ";
    }
    else
    {
        c=a/b;
        cout<<"your ans is : "<<c<<endl;
        
    }
    return 0;
}

