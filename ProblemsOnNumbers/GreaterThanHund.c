///////////////////////////////////////////////////////////////////////
//
//      Write a program which accept one number from user and check whether 
//      that number is greater than 100 or not.
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

//Prototype 
BOOL  GreaterThanHund( int );

//Entry-Point Function
int main()
{
    int iValue = 0 ;
    BOOL bRet = 0;
        
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    bRet = GreaterThanHund(iValue);

    if( bRet == TRUE )
    {
        printf("%d is Greater Than 100.\n",iValue);
    }
    else
    {
        printf("%d is Not Greater Than 100.\n",iValue);
    }

    return 0;
}

//Function
BOOL  GreaterThanHund( int iNo)
{
   if( iNo > 100)
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
456
456 is Greater Than 100.

Enter Number :
99
99 is Not Greater Than 100.

*/