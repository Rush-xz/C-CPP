///////////////////////////////////////////////////////////////////////
//
//      Write a program which accept a number from user and returns the
//      count of even digits.
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//Prototype 
int  CountOdd( int );

//Entry-Point Function
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please Enter Number :\n");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("Count of Odd digits  :%d.\n",iRet);
  
    return 0;
}

//Function
int CountOdd( int  iNo)
{
    int iDigit = 0 , iCnt = 0;

    if( iNo < 0)        //Filter
    {
        iNo = -iNo;
    }

    while( iNo != 0)
    {
        iDigit = iNo % 10;

        if( (iDigit%2) != 0)
        {
            iCnt++;
        }

        iNo = iNo / 10;
    }

   return iCnt;
    
}

/*  Output :
 
Please Enter Number :
458979
Count of Odd digits  :4.

Please Enter Number :
1694
Count of Odd digits  :2.
*/