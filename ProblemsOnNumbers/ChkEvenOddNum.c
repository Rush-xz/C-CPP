///////////////////////////////////////////////////////////////////////
//
//      Accept number from user and check whether number is even or odd
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

//Prototype
BOOL ChkEvenOdd( int );         //Using Modulus Operator
BOOL ChkEvenDivOperator( int );         //Using Division Operator
BOOL ChkEvenOddBitwise( int );      //Using Bitwise Operator

//Entry-Point Function
int main()
{
    int iValue = 0 ;
    BOOL bRet = FALSE;
    
    
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    //bRet = ChkEvenOdd(iValue);
    //bRet = ChkEvenDivOperator(iValue);
      bRet = ChkEvenOddBitwise(iValue);
    
    if( bRet == TRUE)
    {
        printf(" %d is Even Number.\n",iValue);
    }
    else
    {
        printf(" %d is Odd Number.\n",iValue);
    }

    return 0;
}

//function 
BOOL ChkEvenOdd( int iNo)
{
    
    if( (iNo % 2) == 0)
    {
      return TRUE;
    }
    else
    {
      return FALSE;
    }
    
}

BOOL ChkEvenDivOperator(int iNo)
{

    if( (iNo / 2)*2 == iNo )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}

BOOL ChkEvenOddBitwise( int iNo )
{

    if( ( iNo & 1 ) == 0 )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}


/*  Output :
 
Enter Number :
12
 12 is Even Number.

Enter Number :
9
 9 is Odd Number.
*/