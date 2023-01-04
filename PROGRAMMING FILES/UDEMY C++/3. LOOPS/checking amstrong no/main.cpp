/*what is Amstrong no
 if the sum of cube of all the digits of a no
 is equal to the no. itself then it is a amstrong no.
 nn= 153=1*1*1+5*5*5+3*3*3
 */

#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    int n,r,sum=0,m;
    cout<<"Enter a no: ";
    cin>>n;
    m=n;
    while (n>0)
    {
        r= n%10;
        n= n/10;
        cout<<r<<endl;
        sum=(r*r*r)+sum;

    }
    cout<<"The sum of cobe of all digits is "<<sum<<endl;
    if (sum == m)
        cout<<m<<" is a amstrong no";
    else
        cout<<m<<" is NOT a amstrong no.";
    cout<<endl;
    
    return 0;
    
}
