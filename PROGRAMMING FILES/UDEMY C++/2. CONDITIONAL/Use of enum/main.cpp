//Use of enum

#include <iostream>
using namespace std;
enum day {mon,tue=5,wed,thu,fri,sat,sun};
int main()
{
    day d1,d2,d3,d4,d5,d6,d7;
    d1=mon;
    d5=fri;
    cout<<d5<<endl;
    
    return 0;
    
}
