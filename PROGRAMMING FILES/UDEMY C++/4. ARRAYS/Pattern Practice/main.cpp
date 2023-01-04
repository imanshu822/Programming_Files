
#include <iostream>
using namespace std;
int main()
{
   int i,j,k;
   for (i=0;i<5;i++)
   {
       for(j=0;j<5;j++)
       {
           if (i<=j)
           cout<<"* "; 
       }
       for(k=0;k<=i;k++)
       cout<<"  ";
       for(j=0;j<5;j++)
       {
           if (i<=j)
           cout<<"* ";
       }
       cout<<endl;
   }
   return 0;
}
