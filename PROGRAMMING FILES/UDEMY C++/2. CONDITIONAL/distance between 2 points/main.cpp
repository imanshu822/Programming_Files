#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x1,y1,x2,y2;
    float d;
    cout<<"Enter the co-ordinates of the point A and B";
    cin>>x1>>y1>>x2>>y2;
    d = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    cout<<"Distance between the point A and B is "<<d<<endl;
    return 0;
}
