d = arccos(sin(ϕ1) sin(ϕ2) + cos(ϕ1) cos(ϕ2) cos(∆)) · R

ϕ1 = latitude[-90 to 90]
ϕ2 = latitude[-90 to 90]
∆ = longitude[-180 to 180]
r = deg / 180· π



Location Distance
========================
Origin: (41.948300, -87.655600)
	Destination : (40.820600, -96.705600)
	Air distance is 764.990931 kms

	A = origin(1), B = destination(2) (from paper)

	latitude, longitude
	========================
	ϕ1 = latitude = 41.948300
	ϕ2 = latitude = 40.820600
	∆ = longitude - 96.705600 - -87.655600
	all(r = deg / 180· π)
	R=, 6, 371 kilometers

	d = arccos(sin(ϕ1) sin(ϕ2) + cos(ϕ1) cos(ϕ2) cos(∆)) · R

	========================




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
/* distance = arccos (sin(rad1) sin(rad2) + cos(rad1) cos(rad2) cos(dif) · Radius */
/* distance = a + b. */

double distance, a, b,c ;
a= sin (rad1)*sin (rad2) ;
c= acos(a);
b= cos(rad1) * cos(rad2) * cos(dif) * (Radius) ; 
distance= c+b ;

double Origin,Destination, AirDistance;
printf("Location Distance\n");
printf("===========================\n");
printf("Origin: (%lf,%lf)\n",lat1,long1);
printf("Destination: (%lf,%lf)\n",lat2,long2);
printf("Air Distance is %lf kms\n",distance);

return 0; 
}
