#include <iostream>
using namespace std;
int main()
{
    int n,j,sum=0;
    cout<<"Enter how many nos you want to print ";
    cin>>n;
    int A[n];
    int k=n;
    for(int i=1;i<=n;i++)
    {
        cout<<"Enter no."<<i<<" ";
        cin>>A[i];
    }
    for (j=0;j<k;j++)
    {
        sum=sum+A[j];
    }
    cout<<"Sum of all "<<n<<" nos is "<<sum<<endl;
    return 0;
}
