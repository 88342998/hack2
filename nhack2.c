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
int main (void) {  

double lat1, lat2, ϕ1, ϕ2
lat1=41.948300
scanf("%lf"& ϕ1)
lat2= 40.820600
scanf("%lf"& ϕ2)

ϕ1=lat1/180· π
ϕ2=lat2/180· π

double long1,long2,∆=
long1= -96.705600 
long2= -87.655600
∆=(long2-long1)/180· π


double Origin,Destination, AirDistance;
printf("Enter Origin\n");
printf("Enter Destination\n");
printf("Enter AirDistance\n");
scanf("%lf"& x)
