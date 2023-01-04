//Find the average of the students and grade accourding to there average marks

#include <stdio.h>
int main ()
{
 float m1,m2,m3,m4,m5;
 float total,avg;
 printf(" enter the marks of 5 subjects\n");
 scanf("%f%f%f%f%f", &m1,&m2,&m3,&m4,&m5);

 total= m1+m2+m3+m4+m5;
 avg = (total/5);

 printf("average mark is %.2f",avg);
 if(avg>=80) printf("\n Grade : A");
 else if(avg>=60) printf("\n Grade : B");
 else if(avg>=40) printf("\n Grade : C");
 else if(avg<40) printf("\n Fail ");

 return(0);
}
