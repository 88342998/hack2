
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

	double aPieLatitude, aPieLongitude, bPieLatitude, bPieLongitude;

	aPieLatitude = aLatitude / 180 ;
	aPieLongitude = aLongitude / 180 ;
	bPieLatitude = bLatitude / 180 ;
	bPieLongitude = bLongitude / 180 ;
	
	double aRadLatitude, aRadLongitude, bRadLatitude, bRadLongitude;

	aRadLatitude = aPieLatitude * M_PI ;
	aRadLongitude = aPieLongitude * M_PI ;
	bRadLatitude = bPieLatitude * M_PI ;
	bRadLongitude = bPieLongitude * M_PI ;
/*
		Now we use the spherical law of cosines
		d = arccos (sin(φ1) sin(φ2) + cos(φ1) cos(φ2) cos(∆))·R
		φ1 = aRadLatitude , φ2 = bRadLatitude , ∆ = aRadLongitude - bRadLongitude , R = 6371
*/
	double cDifLongitude;

	cDifLongitude = aRadLongitude - bRadLongitude ;

	double cTrigLongitude;

	cTrigLongitude = cos cDifLongitude ;

	double aSinLatitude, bSinLatitude, aCosLatitude, bCosLatitude;

	aSinLatitude = sin aRadLatitude ;
	bSinLatitude = sin bRadLatitude ;
	aCosLatitude = cos aRadLatitude ;
	bCosLatitude = cos bRadLatitude ;

	double cSinLatitude, cCosLatitude;

	cSinLatitude = aSinLatitude * bSinLatitude ;
	cCosLatitude = aCosLatitude * bCosLatitude * cTrigLongitude ;

	double cTrigLatitude;

	cTrigLatitude = cSinLatitude + cCosLatitude ;

	double cArcTrig;
	
	cArcTrig = acos cTrigLatitude ;

	double cRadius;
	
	cRadius = 6371 ;

	double cDistance;

	cDistance = cArcTrig * cRadius ;

	printf("Location Distance\n");
	printf("========================\n");
	printf("Origin:		( %lf , %lf )\n", aLatitude, aLongitude);
	printf("Destination:	( %lf , %lf )\n", bLatitude, bLongitude);
	printf("Air distance is %lf kms\n", cDistance);

	return 0;

}