#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int i,n,count=0;
    cout<<"Enter a no.: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        
        if(n%i==0)
        {
        cout<<i<<", ";
        count++;
        }
    }
    
    cout<<"\nTotal no of factors of n is "<<count<<endl;
    if (count==2)
        cout<<"So "<<n<<" is a PRIME NO"<<endl;
    else
        cout<<"So "<<n<<" is  not a PRIME NO"<<endl;
        
    return 0;
}
