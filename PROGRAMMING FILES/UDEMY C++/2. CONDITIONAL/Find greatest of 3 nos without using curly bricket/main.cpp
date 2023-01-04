//  Find greatest of 3 nos without using curly bricket
//  Created by ANSHU on 02/10/21.

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int x,y,z;
    cout<<"Enter 3 nos x,y,z : ";
    cin>>x>>y>>z;
    if (x>y && x>z)
        cout<<"x is greater : "<<x<<endl;
    else if (y>z)
        cout<<"y is greatest : "<<y<<endl;
        else
            cout<<"z is greatest : "<<z<<endl;
    return 0;
}
