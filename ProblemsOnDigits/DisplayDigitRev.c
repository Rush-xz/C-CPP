///////////////////////////////////////////////////////////////////////
//
//      Write a program which accept a number from user and display in
//        reverse order.
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//Prototype 
void DipslayDigitReverse( int );

//Entry-Point Function
int main()
{
    int iValue = 0;

    printf("Please Enter Number :\n");
    scanf("%d",&iValue);

    DipslayDigitReverse(iValue);

    return 0;
}

//Function
void DipslayDigitReverse( int iNo)
{
    int iDigit = 0;

    if( iNo < 0)        //Filter
    {
        iNo = -iNo;
    }

    printf("Digits in Reverse Order :\n");
    while( iNo != 0)
    {
        iDigit = iNo % 10;

        printf(" %d\n",iDigit);

        iNo = iNo / 10;
    }
    
}

/*  Output :
 
Please Enter Number :
5849
Digits in Reverse Order :
 9
 4
 8
 5

 Please Enter Number :
-45800
Digits in Reverse Order :
 0
 0
 8
 5
 4

*/