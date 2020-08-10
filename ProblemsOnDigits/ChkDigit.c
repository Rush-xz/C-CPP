///////////////////////////////////////////////////////////////////////
//
//      Write a program which accept a one number and one digit and check
//      wether that number contain that digit in it.
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

//Prototype 
BOOL CheckDigit( int , int);

//Entry-Point Function
int main()
{
    int iValue = 0 , iDig=0;
    BOOL bRet = FALSE;

    printf("Please Enter Number :\n");
    scanf("%d",&iValue);

    printf("Please Enter digit :\n");
    scanf("%d",&iDig);

    bRet = CheckDigit(iValue , iDig);

    if( bRet == TRUE)
    {
        printf("It Contains %d in it.\n",iDig);
    }
    else
    {
        printf("It does not contains %d in it.\n",iDig);
    }

    return 0;
}

//Function
BOOL CheckDigit( int  iNo , int iDig)
{
    int iDigit = 0;

    if( iNo < 0)        //Filter
    {
        iNo = -iNo;
    }

    while( iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit==iDig)
        {
            break;
        }

        iNo = iNo / 10;
    }

    if( iNo==0)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
    
}

/*  Output :
 
Please Enter Number :
4589
Please Enter digit :
5
It Contains 5 in it.

Please Enter Number :
4682
Please Enter digit :
9
It does not contains 9 in it.
*/