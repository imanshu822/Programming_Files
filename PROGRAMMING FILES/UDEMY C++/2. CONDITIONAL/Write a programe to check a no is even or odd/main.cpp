//Write a programe to check a no is even or odd

#include <iostream>
using namespace std;
int main ()
{
    int a,b;
    cout<<"Enter a no : ";
    cin>>a;
    b=a%2;
    
    if (b==0) {
        cout<<"No is even"<<endl;
    }
    else
    {
        cout<<"No is odd "<<endl;
    }
    return 0;
}
