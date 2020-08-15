/////////////////////////////////////////////////////////////
//
//    Write a program which accept radius of circle from user 
//      and calculate its area.Consider value of PI as 3.14. 
//      (Area = PI * Radius * Radius)
/////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//Prototype 
double AreaOfRectangle( float , float);

//Entry-Point Function
int main()
{
    float fValue1 = 0.0 , fValue2 = 0;
    double dRet = 0.0;

    printf("Enter Width of Rectangle :\n");
    scanf("%f",&fValue1);

    printf("Enter Height of Rectangle :\n");
    scanf("%f",&fValue2);

    dRet = AreaOfRectangle(fValue1 , fValue2);

    printf(" Area Of Rectangle is%9.3lf.",dRet);

    return 0;

}

//Function
double AreaOfRectangle( float fWidth , float fHeight )
{
	
  if( fWidth < 0 )
  {
    fWidth = -fWidth;
  }

  if( fHeight < 0 )
  {
    fHeight = -fHeight;
  }

  return (fWidth*fHeight);

}



/*  Output : 
Enter Width of Rectangle :
5.3
Enter Height of Rectangle :
9.78
 Area Of Rectangle is   51.834.
*/