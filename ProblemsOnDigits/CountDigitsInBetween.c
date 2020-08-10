///////////////////////////////////////////////////////////////////////
//
//      Write a program which accept a number from user and returns the
//      count of digits in between(eg.3to7 or 5to9).
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//Prototype 
int  CountDigitsInbetween( int , int , int);

//Entry-Point Function
int main()
{
    int iValue = 0 , iStart =0 , iEnd =0;
    int iRet = 0;

    printf("Please Enter Number :\n");
    scanf("%d",&iValue);

    printf("Please Enter Range In between you want to count digits:\n");
    scanf("%d%d",&iStart,&iEnd);

    iRet = CountDigitsInbetween(iValue ,iStart , iEnd);

    printf("Count of digits in between %d to %d :%d.\n",iStart,iEnd,iRet);
  
    return 0;
}

//Function
int CountDigitsInbetween( int  iNo , int iStart , int iEnd)
{
    int iDigit = 0 , iCnt = 0;

    if( iNo < 0)        //Filter
    {
        iNo = -iNo;
    }

    while( iNo != 0)
    {
        iDigit = iNo % 10;

        if( (iDigit>iStart) && (iDigit<iEnd) )
        {
            iCnt++;
        }

        iNo = iNo / 10;
    }

   return iCnt;
    
}

/*  Output :
Please Enter Number :
57891
Please Enter Range In between you want to count digits:
5
9
Count of digits in between 5 to 9 :2.

Please Enter Number :
9922
Please Enter Range In between you want to count digits:
5
8
Count of digits in between 5 to 8 :0.
*/