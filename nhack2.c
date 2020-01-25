/*
  Programmer's Name: Nathan Liew
  NUID: 41087562
  Date: 1/23/20
  Description of the program: A program that computes distance with origin and destination
  Collaborators: John Cerny

======================================================================
d = arccos (sin(ϕ1) sin(ϕ2) + cos(ϕ1) cos(ϕ2) cos(∆)) · R
ϕ1=latitude [-90 to 90]
ϕ2=latitude  [-90 to 90]
∆= longitude [-180 to 180]
r =deg/180· π
Origin: (41.948300, -87.655600)
Destination: (40.820600, -96.705600)
lat 1,lat2, long1,long2 (41.948300, 40.82060,  -87.65560 -96.70560)
*/


#include <stdio.h>
#include <math.h>

int main (void) {  
double lat1, lat2,rad1, rad2;

printf("Enter the origin latitude: \n");
scanf("%lf", & lat1);
printf("Enter the destination latitude: \n");
scanf("%lf", & lat2);

//convert radian
rad1=lat1/180 * M_PI;
rad2=lat2/180 * M_PI;

double long1,long2,dif;

printf("Enter the origin longitude: \n");
scanf("%lf", &long1 );
printf("Enter the destination longitude: \n");
scanf("%lf", &long2 );
dif=(long2-long1)/180 * M_PI;

double Radius;
Radius= 6371;


/* d = arccos (sin(ϕ1) sin(ϕ2) + cos(ϕ1) cos(ϕ2) cos(∆)) · R*/
/* distance = (arccos ((sin(rad1) sin(rad2) + cos(rad1) cos(rad2) cos(dif)) )· Radius */
/* distance = a + b. */

double distance, a, b  ;
a= (sin (rad1)*sin (rad2)) ;
b= cos(rad1) * cos(rad2) * cos(dif)  ;
distance= acos(a+b) *Radius;


double Origin,Destination, AirDistance;
printf("Location Distance\n");
printf("=================================\n");
printf("Origin: (%lf,%lf)\n",lat1,long1);
printf("Destination: (%lf,%lf)\n",lat2,long2);
printf("Air Distance is %lf kms\n",distance);

return 0; 
}
