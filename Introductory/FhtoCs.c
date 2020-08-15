/////////////////////////////////////////////////////////////
//
//    Write a program which accept temperature in Fahrenheit
//     and convert it into celsius. (1 celsius = (Fahrenheit -32) * (5/9))
//
/////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//Prototype 
double FhtoCs( float );

//Entry-Point Function
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Temperature  in Fahrenheit:\n");
    scanf("%f",&fValue);

    dRet = FhtoCs( fValue );

    printf(" Temperature in Celcius is%6.3lf.",dRet);

    return 0;

}

//Function
double FhtoCs( float fTempFh )
{
	
  return ( (fTempFh -32) * ((float)5/9) );

}



/*  Output : 
Enter Temperature  in Fahrenheit:
10
 Temperature in Celcius is-12.222.

Enter Temperature  in Fahrenheit:
34
 Temperature in Celcius is 1.111.
*/