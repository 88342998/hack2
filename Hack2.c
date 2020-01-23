
/*
  Programmer's Name: John Cerny
  NUID: 88342998
  Date: 1/23/20
  Description of the program: A program that computes a math equation
  Collaborators: Nathan Liew
*/


#include <stdio.h>
#include <math.h>

int main (void) {  

			//Define variables: aLatitude, aLongitude, bLatitude, bLongitude
	double aLatitude, aLongitude, bLatitude, bLongitude;

	printf("Enter the latitude of the origin in degrees:\n");
	scanf("%lf", &aLatitude);

	printf("Enter the longitude of the origin in degrees:\n");
	scanf("%lf", &aLongitude);

	printf("Enter the latitude of the destination in degrees:\n");
	scanf("%lf", &bLatitude);

	printf("Enter the latitude of the destination in degrees:\n");
	scanf("%lf", &bLatitude);

			//latitude range [-90,90] and longitude range [-180,180]

	double aRadLatitude, aRadLongitude, bRadLatitude, bRadLongitude;

	aRadLatitude = aLatitude / 180
	aRadLongitude = aLongitude / 180
	bRadLatitude = bLatitude / 180
	bRadLongitude = bLongitude / 180
	

	
	return 0;

}