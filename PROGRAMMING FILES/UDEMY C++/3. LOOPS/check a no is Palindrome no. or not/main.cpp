#include <iostream>
using namespace std;
int main()
{
    int r,n,rev=0;
    cout<<"Enter a positive no.: ";
    cin>>n;
    int x=n;
    while (n>0)
    {
        r=n%10;
        n=n/10;
        rev = rev*10+r;
        
    }
    cout<<"Reverse of "<<x<<" is "<<rev<<endl;
    if (x==rev)
        cout<<x<<" is Palindrome no."<<endl;
    else
        cout<<x<<" is not a Palindrome no."<<endl;
    return 0;
}
