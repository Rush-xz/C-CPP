///////////////////////////////////////////////////////////////////////
//
//      Write a program which accept a number from user and returns the
//      count of even digits.
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//Prototype 
int  CountEven( int );

//Entry-Point Function
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please Enter Number :\n");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("Count of Even digits  :%d.\n",iRet);
  
    return 0;
}

//Function
int CountEven( int  iNo)
{
    int iDigit = 0 , iCnt = 0;

    if( iNo < 0)        //Filter
    {
        iNo = -iNo;
    }

    while( iNo != 0)
    {
        iDigit = iNo % 10;

        if( (iDigit%2) == 0)
        {
            iCnt++;
        }

        iNo = iNo / 10;
    }

   return iCnt;
    
}

/*  Output :
 
Please Enter Number :
46529
Count of Even digits  :3.

Please Enter Number :
-726534
Count of Even digits  :3.

*/