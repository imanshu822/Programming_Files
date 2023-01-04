#include <iostream>
using namespace std;
int main()
{
    int *p= new int [5];
    p[0]=23;
    p[1]=24;
    cout<<p[1]<<endl;
    
    
    delete []p;
    p=nullptr;
    
    return 0;
}
