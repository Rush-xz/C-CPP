///////////////////////////////////////////////////////////////////////
//
//      Write a program which accept a one number and one digit from user
//      count frequency of such digits which are less than that given digit.
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//Prototype 
int  Frequency( int , int);

//Entry-Point Function
int main()
{
    int iValue = 0 , iDig = 0;
    int iRet = 0;

    printf("Please Enter Number :\n");
    scanf("%d",&iValue);

    printf("Please Enter Digit :\n");
    scanf("%d",&iDig);

    iRet = Frequency(iValue , iDig);

    printf("Frequency of digits which are less than %d is :%d.\n",iDig,iRet);
  
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

        if(iDigit<iDig)
        {
            iCnt++;
        }

        iNo = iNo / 10;
    }

   return iCnt;
    
}

/*  Output :
 
Please Enter Number :
84526
Please Enter Digit :
5
Frequency of digits which are less than 5 is :2.

Please Enter Number :
489561
Please Enter Digit :
3
Frequency of digits which are less than 3 is :1.

*/