/////////////////////////////////////////////////////////////
//
//    Write a program which accept area in square feet and 
//		convert it into square meter. (1 square feet = 0.0929 Square meter).
//
/////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>
#define SqrMeter 0.0929		/* 1 square feet = 0.0929 Square meter */

//Prototype 
double SquareMeter( int );

//Entry-Point Function
int main()
{
    int  iValue = 0;
    double dRet = 0.0;

    printf("Enter Area in Square feet:\n");
    scanf("%i",&iValue);

    dRet = SquareMeter( iValue );

    printf(" Area in Square meter is :%lf.",dRet);

    return 0;

}

//Function
double SquareMeter( int SqrFt)
{
	
  return (SqrFt*SqrMeter);

}



/*  Output : 
Enter Temperature  in Fahrenheit:
10
 Temperature in Celcius is-12.222.

Enter Temperature  in Fahrenheit:
34
 Temperature in Celcius is 1.111.
*/