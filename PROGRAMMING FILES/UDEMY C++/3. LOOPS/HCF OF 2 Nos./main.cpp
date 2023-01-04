#include <iostream>
using namespace std;
int main ()
{
    int n,m;
    cout<<"Enter 2 nos.: ";
    cin>>m>>n;
    int x=m,y=n;
    while (n!=m)
    {
        if (n>m)
            n=n-m;
        else if (m>n)
            m=m-n;
    }
    cout<<"GCD of "<<x<<" and "<<y<< " is "<<n<<endl;
    return 0;
}
