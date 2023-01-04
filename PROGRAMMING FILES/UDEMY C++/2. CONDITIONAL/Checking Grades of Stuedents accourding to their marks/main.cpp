//
//  main.cpp
//  Checking Grades of Stuedents accourding to their marks
//
//  Created by ANSHU on 07/10/21.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int m1,m2,m3,m4,avg;
    cout<<"Enter the marks m1,m2,m3,n4"<<endl;
    cin>>m1>>m2>>m3>>m4;
    avg=(m1+m2+m3+m4)/4;

    cout<<"Your total marks percent is :"<<avg<<endl;
    if (avg>=60)
        cout<<"First Division"<<endl;
    else if (avg<60 && avg>=50)
        cout<<"Second devision"<<endl;
    else if (avg<50 && avg <=40)
        cout<<"Third Division"<<endl;
    else if (avg <40)
        cout <<"Fail"<<endl;
    
    return 0;
}
