//
//  main.c
//  Write a program to accept a series in an array from the user. Test the series to find out whether it is an Arithmetic progression, Geometric progression or none?
//
//  Created by ANSHU on 02/01/22.
//

#include <stdio.h>
int main()
{
    int n,flag=0,flag1=0;
    int arr[n],k[n-1];
    printf("Enter no of elements in array");
    scanf("%d",&n);
    printf("Enter elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int d = arr[1]-arr[0];
    int r = arr[1]/arr[0];
    for (int i=0;i<n;i++)
    {
        k[i]=arr[i+1]-arr[i];
        if (k[i]!=d)
            flag =1;
    }
    if (flag==1)
        printf("Series is in AP\n");
    else
        printf("Series is Not in AP\n");
    
        for (int i=0;i<n;i++)
        {
            k[i]=arr[i+1]/arr[i];
            if (k[i]!=r)
                flag1 =1;
        }
    if (flag1==1)
        printf("Series is In GP\n");
  else
      printf(" Series is Not in GP\n");
    return 0;
}
