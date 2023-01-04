#include <iostream>
using namespace std;
int main()
{
    int A[5]{2,4,6,8,10};
    int *p=A,*q=&A[3];
    cout<<*p-1<<endl;
    cout<<*(p+3)<<endl;
    cout<<p+2<<endl;
    cout<<*p-*q<<endl;
    for (int i=0;i<5;i++)
    {
        cout<<*(p+i) <<endl;
    }
    return 0;
}
