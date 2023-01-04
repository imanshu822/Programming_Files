#include <iostream>
using namespace std;
int main ()
{
    char s[20],t[20];
    cout<<"Enter your name "<<endl;
    cin.get(s,20);
    cout<<s<<endl;
    cin.getline(t, 20);
    cout<<t<<endl;
    return 0;
}
