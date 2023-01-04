
#include <iostream>
using namespace std;
class Base{
public:
    virtual void print()
    {
        cout << "print BAse" << endl;
    }
    void show(){
        cout << "show Base" << endl;
    }
};
class Derived : public Base
{
    void print()
    {
        cout << "print derived" << endl;
    }
    void show(){
        cout << "show derived" << endl;
    }
    
};
int main(){
    Base *p;
    Derived d;
    p = &d;
    p->show();
    p->print();
    return 0;
}
