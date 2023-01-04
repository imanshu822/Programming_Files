#include <stdio.h>
int main()
{
    int arr[5]={12,345,2,6,7896},count=0,i,count2=0;
    for(i=0;i<=5;i++)
    {
        while(arr[i]>0)
        {
            arr[i]= arr[i]/10;
            count ++;
        }
        if (count%2==0)
            count2 ++;
        count=0;
            
    }
    printf("%d\n",count2);
    return 0;
}
