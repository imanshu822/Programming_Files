#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
    int  n;
    cout<<"Enter a no. n :";
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        if (n%i==0)
            cout<<i<<endl;
    }
    return 0;
}
