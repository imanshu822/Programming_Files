#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int i, n , fact =1 ;
    cout<<"Enter a no n :";
    cin>>n;
    for (i=1; i<=n; i++)
    {
        fact *= i;
        
    }
    cout<<fact<<endl;
    return 0;
}
