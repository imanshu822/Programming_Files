#include <iostream>
using namespace std;
int main()
{
    int a[6]={1,2,3,4,5,6},temp,i,temp2;
    for(int i=0;i<=2;i++)
    {
        temp=a[i];
        a[i] = a[5-i];
        a[5-i]=temp;
    }
    for(i=0;i<6;i++)
    cout<<a[i]<<endl;
    cout<<endl;
    for(int j=2;j<2;i++)
    {
        temp2=a[j];
        a[j] = a[5-j];
        a[5-j]=temp2;
    }
    for(i=0;i<6;i++)
    cout<<a[i]<<endl;
    return 0;
}
