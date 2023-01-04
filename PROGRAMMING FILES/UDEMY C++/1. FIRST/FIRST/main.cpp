//find the volume of cylender

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float r,h,volume;
    cout<<"Enter the r and h of the cylender";
    cin>>r>>h;
    volume=(float) 22/7*r*r*h;
    cout<<"volume is"<<volume;
    
    return 0;
}


