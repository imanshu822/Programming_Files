#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a,b,c ,D;
    cout<<"Enter the coeffecient of quadratic equation a, b, c,"<<endl;
    cin>>a>>b>>c;
    D = b*b-4*a*c;
    if (D==0)
    {
        cout<<"Roots are equal : "<<-b/(2*a)<<endl;
    }
    
         else if (D > 0)
            cout<<"Roots are real and different : "<<-b+sqrt(D)/(2*a)<<" and "<<-b-sqrt(D)/(2*a)<<endl;
        
            
         else
            cout<<"Roots are imagenary";
        
       
   
    return 0;
}
    
