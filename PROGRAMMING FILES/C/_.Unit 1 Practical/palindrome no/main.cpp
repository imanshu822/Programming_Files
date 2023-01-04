#include <iostream>
using namespace std;
int main() {
    int n,i;
    cout<<"Enter a no."<<endl;
    cin>>n;
    for(i=1;i<n;i++)
    {
        if(i*i==n)
        return i;
        else if (i*i>n)
        return (i-1);
    }
}
