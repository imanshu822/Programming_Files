#include <iostream>
using namespace std;
int main()
{   int sum=0;
    int A[6]={4,8,6,9,5,2};
    for(int i=0;i<6;i++)
        sum=sum+A[i];
    cout<<sum<<endl;
    return 0;
}
