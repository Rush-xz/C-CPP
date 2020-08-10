///////////////////////////////////////////////////////////////////////
//
//      Write a program which accept a number from user and returns the
//      Multiplication of all digits present in that number.
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//Prototype 
int  MultiOfDigit( int );

//Entry-Point Function
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please Enter Number :\n");
    scanf("%d",&iValue);

    iRet = MultiOfDigit(iValue);

    printf("Multiplication of all digits  :%d.\n",iRet);
  
    return 0;
}

//Function
int MultiOfDigit( int  iNo)
{
    int iDigit = 0 , iMult = 1;

    while( iNo != 0)
    {
        iDigit = iNo % 10;

        iMult = iMult * iDigit;

        iNo = iNo / 10;
    }

   return iMult;
    
}

/*  Output :

Please Enter Number :
452
Multiplication of all digits  :40.
 
Please Enter Number :
2643
Multiplication of all digits  :144.


*/