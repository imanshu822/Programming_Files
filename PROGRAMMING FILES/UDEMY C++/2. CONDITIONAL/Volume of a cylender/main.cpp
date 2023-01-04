//find the volume of cylender

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int r,h,v;
    cout<<"enter the redius and height of the cylender";
    cin>>r>>h;
    v=(float) 22/7*r*r*h;
    cout<<("volume of the cylender is ")<<v<<endl;
    return 0;
    
}
