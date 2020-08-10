///////////////////////////////////////////////////////////////////////
//
//      Write a program which accept a one number from user and one digit
//      count the Frquency of that digit.
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//Prototype 
int  Frequency( int ,int );

//Entry-Point Function
int main()
{
    int iValue = 0 , iDigit=0;
    int iRet = 0;

    printf("Please Enter Number :\n");
    scanf("%d",&iValue);

    printf("Please Enter Digit of which you wants Frequency :\n");
    scanf("%d",&iDigit);

    iRet = Frequency(iValue , iDigit);

    printf("Frequency of %d is :%d.\n",iDigit,iRet);
  
    return 0;
}

//Function
int Frequency( int  iNo , int iDig)
{
    int iDigit = 0 , iCnt = 0;

    if( iNo < 0)        //Filter
    {
        iNo = -iNo;
    }

    while( iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit==iDig)
        {
            iCnt++;
        }

        iNo = iNo / 10;
    }

   return iCnt;
    
}

/*  Output :
 
Please Enter Number :
78845
Please Enter Digit of which you wants Frequency :
8
Frequency of 8 is :2.

*/