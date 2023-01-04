#include <iostream>
#include <math.h>
using namespace std;
int main()
{   int n;
    cout<<"Enter a no of which you want to print a table:\t"<<endl;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cout<<n<<" * "<<i<<" = "<<i*n<<endl;
    }
    return 0;
}
