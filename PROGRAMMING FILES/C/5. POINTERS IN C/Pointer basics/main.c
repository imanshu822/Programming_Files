#include <stdio.h>
int main()
{
    int arr1[5],arr2[5],*ptr;
    printf("Enter elements ");
    for(int i=0;i<5;i++)
        scanf("%d",&arr1[i]);
    ptr=arr1;
    
    for (int i = 0; i < 5; ++i)
    {
        arr2[i]= ptr[i];
    }
    for (int i = 0; i < 5; ++i)
    {
        arr2[i]= ptr[i];
        printf("Element of copyed array at %d is %d\n",i,arr2[i]);
        
    }
    return 0;
}
  
