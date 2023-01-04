#include <iostream>
using namespace std;
int fun1(int a[], int b[], int n, int m)
{
    return 0;
}


int main()
{
    int t=1;
    while(t>0)
    {
        int n,m,x;
        cin>>n>>m;
        int a[n],b[m];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int j = 0; j < m; j++)
        {
            cin>> a[j];
        }
        x= fun1(a,b,n,m);

        return x;

    }
}
