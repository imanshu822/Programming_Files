#include <iostream>
using namespace std;
int main()
{
    float bill_amount;
    float discount=0.0;
    cout<<"Enter bill amount : ";
    cin>>bill_amount;
    if(bill_amount>=500 )
        discount=bill_amount*20/100;
    else if(bill_amount<=500 && bill_amount>100)
        discount=bill_amount*10/100;
    cout<<"Bill Amount is :"<<bill_amount<<endl;
    cout<<"Discount Amount is :"<<discount<<endl;
    cout<<"Discounted Amount is :"<<bill_amount-discount<<endl;
    return 0;
}
