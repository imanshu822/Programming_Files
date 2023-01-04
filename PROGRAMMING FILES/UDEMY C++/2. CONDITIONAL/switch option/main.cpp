
#include <iostream>
using namespace std;

int main()
{
    cout<<"Options\n";
    cout<<"1. Add\n"<<"2. Sub\n"<<"3. Multiply\n"<<"4. Division\n";
    int option;
    cout<<"Choose your choice : ";
    cin>>option;
    int a,b,c;
    cout<<"enter 2 nos. : ";
    cin>>a>>b;
    switch(option)
    {
        case 1:
            cout<<"Addition is: ";
            c=a+b;
            break;
        case 2: c=a-b;
            cout<<"Subtract is: ";
            break;
        case 3: c=a*b;
            cout<<"Multiply is: ";
            break;
        case 4: c=a/b;
            cout<<"Devide is: ";
            break;
    }
    cout<<c<<endl;
    return 0;
}

