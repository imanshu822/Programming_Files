//  Find greatest of 3 nos.
//  Created by ANSHU on 02/10/21.

#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter 3 nos. a, b, c, : ";
    cin>>a>>b>>c;
    
    if (a>b && a>c)
    {
        cout<<"greatest amoung 3 nos that is :"<<a<<endl;
    }
    else
    {
        if(b>c)
        {
            cout<<"greatest amoung 3 nos that is :"<<b<<endl;
            
        }
        else
        {
            cout<<"greatest amoung 3 nos that is :"<<c<<endl<<endl;
        }
    }
    
    return 0;
}
