/*#include <stdio.h>
int main()
{
    int n;
    printf("Input no of rows :\t");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for (int j=1;j<=i;j++)
        {
            printf(" %d\t",j);
        }
        printf("\n");
    }
    return 0;
}
 
 */
/*
#include <stdio.h>
int main()
{
    int n,t,cube=0;
    printf("Enter a no:\t");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("Number %d:\t",i);
        scanf("%d",&t);
        cube = cube + t*t*t;
    }
    printf("Sum of cube of n nos is %d",cube);
    printf("\n ");
    return 0;
}
 */
/*
#include <stdio.h>
int main()
{
    int n;
    printf("Input a no.:\t");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for (int j=1;j<=10;j++)
        {
            printf("%d * %d = %d\n",i,j,i*j);
        }
        printf("\n");
    }
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter a no.:\t");
    scanf("%d",&n);
    for(int i=1;i<=n;i+=2)
    {
        printf("%d\t",i);
        sum=sum+i;
    }
    printf("\nSum of odd no from 1 to %d is %d",n,sum);
    printf("\n");
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int n,k=0;
    printf("Enter a no:\t");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=i;j++)
        {
            k=k+1;
            printf("%d\t",k);
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int i,n,j,k,t,spc;
    printf("Enter number of rows:\t");
    scanf("%d",&n);
    t=1;
    spc=n-1;
    for (i=1;i<=n;i++)
    {
        for (k=spc;k>=i;k--)
        {
            printf(" ");
        }
        for (j=1;j<=i;j++)
        {
        printf("* ");
        }
    printf("\n");
    }
}
/*
    1
   2 3
  4 5 6
 7 8 9 10
 

#include <stdio.h>
int main()
{
    int i=0,j=0;
    while (i<3,j<7)
    {
        i++;
        j++;
        
    }
    printf("%d and %d\n",i,j);
    return 0;
}

#include <stdio.h>
int main()
{

    float r,n,x,sum=0,i,fact=0,j;
    
    printf("Enter 2 nos");
    scanf("%f%f",&x,&n);
    for(i=0;i<=n;i++)
    {
        r=pow(x,i);
        for (j=0; j<=i; j++)
        {
            fact = fact * j;
        }
    
        sum=sum+(r/fact);
        
    }
    printf("Sum= %f",sum);
    return 0;
}


 #include <stdio.h>
 #include <time.h> //for sleep() function
 #include <unistd.h>
 #include <stdlib.h>
  
 int main()
 {
     int hour, minute, second;
      
     hour=minute=second=0;
  
     while(1)
     {
         //clear output screen
         system("clear");
          
         //print time in HH : MM : SS format
         printf("%02d : %02d : %02d ",hour,minute,second);
          
          //clear output buffer in gcc
         fflush(stdout);
          
          //increase second
         second++;
  
         //update hour, minute and second
         if(second==60){
             minute+=1;
             second=0;
         }
         if(minute==60){
             hour+=1;
             minute=0;
         }
         if(hour==24){
             hour=0;
             minute=0;
             second=0;
         }
          
         sleep(1);   //wait till 1 second
     }
  
     return 0;
 }
 */
//#include <stdio.h>
//int main()
//{
//    int sum=0,i;
//    for(i=100;i<=200;i++)
//    {
//        if(i%5==0)
//            sum=sum+i;
//    }
//    printf("Sum of all no between 100 and 200 which is divisible by 5 is %d\n",sum);
//    return 0;
//}
#include <stdio.h>
int main()
{
    int m,n,r,k,cube=0;
    printf("Enter a no:\t ");
    scanf("%d%d",&m,&n);
   
    k=n;
    {
    for(n=0;n<=m;n++)
    {
    while (n>0)
    {
        r=n%10;
        n=n/10;
        cube = cube + r*r*r;
    }
    
    if(k==cube)
        printf("%d",k);
    }
    }
    return 0;
}
