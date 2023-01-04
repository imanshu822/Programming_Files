//  If the person is old then the person is eligible for the offer
//  If the person is child then then the person is eligible for the offer but not for young
//  Check the offer is for only child and old not for young
//  Created by ANSHU on 02/10/21.

#include <iostream>
using namespace std;

int main() {
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if (age <12 || age > 50 )
    {
        cout<<"You are eligible for offer"<<endl;
    }
    else
    {
        cout<<"Your are not eligible for offer"<<endl;
    }
    
    return 0;
}
