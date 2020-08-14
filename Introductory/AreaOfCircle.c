/////////////////////////////////////////////////////////////
//
//    Write a program which accept radius of circle from user 
//      and calculate its area.Consider value of PI as 3.14. 
//      (Area = PI * Radius * Radius)
/////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>
#define PI 3.14

//Prototype 
double AreaOfCircle( float );

//Entry-Point Function
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius of circle :\n");
    scanf("%f",&fValue);

    dRet = AreaOfCircle(fValue);

    printf(" Area Of Circle is :%3lf.",dRet);

    return 0;

}

//Function
double AreaOfCircle( float fRadius )
{
	
  if( fRadius < 0 )
  {
    fRadius = -fRadius;
  }

  return (PI*fRadius*fRadius);

}



/*  Output : 
Enter radius of circle :
5.3
 Area Of Circle is :88.202606.


 Enter radius of circle :
10.4
 Area Of Circle is :339.622375.
*/