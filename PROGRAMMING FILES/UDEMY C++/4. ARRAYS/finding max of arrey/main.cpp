#include <iostream>
using namespace std;
int main()
{
    int A[7],max;
    cout<<"Enter 7 nos"<<endl;
    for(int i=0;i<7;i++)
    {
        cin>>A[i];
    }
    max= INT_MIN;
    for(int i=0;i<7;i++)
    {
        if(A[i]>max)
            max=A[i];
    }
    cout<<"max is "<<max<<endl;
    return 0;
    
}
