#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Type n here: ";
    cin>>n;
   
    for(int i=1;;i++)
    {
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
        if (i>=10)
            break;
        
    }
        return 0;
    
}
