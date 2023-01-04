//  Convert the distance from km into m,inch,feet and cms
//  Created by ANSHU on 02/10/21.

#include <stdio.h>
int main()
{
    float a, dist_in_m, dist_in_feet, dist_in_inch, dist_in_cm;
    printf ("\nEnter the distance between cities in km : ");
    scanf("%f",&a);
    dist_in_m    = a*1000;
    dist_in_feet = a*3280.84;
    dist_in_inch = a*39370.1;
    dist_in_cm   = a*100000;
    printf("Distance between the cities in meter is : %.2f \n", dist_in_m );
    printf("Distance between the cities in feet is : %.2f \n", dist_in_feet);
    printf("Distance between the cities in inch is : %.2f \n", dist_in_inch);
    printf("Distance between the cities in cm is : %.2f \n", dist_in_cm);
    
    return 0;
}
