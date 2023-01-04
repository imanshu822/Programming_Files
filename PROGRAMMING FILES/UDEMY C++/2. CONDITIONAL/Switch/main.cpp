#include <iostream>
using namespace std;
int main ()
{
    int x;
    cout<<"Enter a no. :"<<endl;
    cin>>x;
    switch (x)
    {
          case 1: cout<<"ONE"<<endl;
              break;
          case 2: cout<<"TWO"<<endl;
              break;
          case 3: cout<<"THREE"<<endl;
              break;
          default :cout<<"Ivalid Input"<<endl;
              break;
        
    }
    return 0;
}
