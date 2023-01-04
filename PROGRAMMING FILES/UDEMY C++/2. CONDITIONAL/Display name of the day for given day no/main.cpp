#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int d;
    cout<<"Enter the day no between 1 to 7 : \n";
    cin>>d;
    if (d==1)
        cout<<"Monday"<<endl;
    else if(d==2)
        cout<<"Tuesday"<<endl;
    else if(d==3)
        cout<<"Wednesday"<<endl;
    else if(d==4)
        cout<<"Thursday"<<endl;
    else if(d==5)
        cout<<"Friday"<<endl;
    else if(d==6)
        cout<<"Saturday"<<endl;
    else if(d==7)
        cout<<"Sunday"<<endl;
    else
        cout<<"Invalid Input"<<endl;
    return 0;
}
