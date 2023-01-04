#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n ,sum;
    cout<<"Enter a no. n: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if (n%i==0)
        sum+=i;
    }
    if (2*n== sum)
        cout<<n<<" is a perfect no"<<endl;
    else
        cout<<n<<" is NOT a perfect no"<<endl;
        return 0;
    
}
