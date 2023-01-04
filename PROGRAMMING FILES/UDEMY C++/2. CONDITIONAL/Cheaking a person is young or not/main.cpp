// If age is greater then 50 then he or she is old
// if age is less then 12 then he or she is child
//  Cheaking a person is young or not
//  Created by ANSHU on 02/10/21.

#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your age:";
    cin>>age;
    if (age>=12 && age<=50)
    {
        cout<<"YOUR ARE YOUNG"<<endl;
    }
    else
    {
        cout<<"YOU ARE NOT YOUNG"<<endl;
    }
    
    
    return 0;
}
