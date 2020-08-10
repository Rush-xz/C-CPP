///////////////////////////////////////////////////////////////////////
//
//      Write a program which accept a number from user and returns the
//      Multiplication of all digits present in that number.
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//Prototype 
int  DiffSumEvenSumOddDig( int );

//Entry-Point Function
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please Enter Number :\n");
    scanf("%d",&iValue);

    iRet = DiffSumEvenSumOddDig(iValue);

    printf("Difference between summation of even digits and summation of odd digits  :%d.\n",iRet);
  
    return 0;
}

//Function
int DiffSumEvenSumOddDig( int  iNo)
{
    int iDigit = 0 , iSumEv = 0 , iSumOd = 0;

    while( iNo != 0)
    {
        iDigit = iNo % 10;

        if( ( iDigit%2 )==0)
        {
            iSumEv = iSumEv + iDigit;
        }
        else
        {
            iSumOd = iSumOd + iDigit;
        }

        iNo = iNo / 10;
    }

    printf("[%d-%d]\n",iSumEv,iSumOd);

   return (iSumEv - iSumOd);
    
}

/*  Output :

Please Enter Number :
2651
[8-6]
Difference between summation of even digits and summation of odd digits  :2.

Please Enter Number :
4523
[6-8]
Difference between summation of even digits and summation of odd digits  :-2.


*/