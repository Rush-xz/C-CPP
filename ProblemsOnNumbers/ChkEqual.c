///////////////////////////////////////////////////////////////////////
//
//      Write a program which accept two numbers and check whether that
//      numbers are eqaul or not.
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

//Prototype 
BOOL  CheckEqual( int , int );

//Entry-Point Function
int main()
{
    int iValue1 = 0  ,  iValue2 = 0;
    BOOL bRet = 0;
        
    printf("Enter First Number :\n");
    scanf("%d",&iValue1);

     printf("Enter Second Number :\n");
    scanf("%d",&iValue2);

    bRet = CheckEqual(iValue1,iValue2);

    if( bRet == TRUE )
    {
        printf("Both numbers are equal.\n");
    }
    else
    {
        printf("Both numbers are not equal.\n");
    }

    return 0;
}

//Function
BOOL  CheckEqual( int iNo1 , int iNo2)
{
   if( iNo1 == iNo2)
   {
     return TRUE;
   }
   else
   {
    return FALSE;
   }
}

/*  Output :
 
Enter First Number :
45
Enter Second Number :
45
Both numbers are equal.

Enter First Number :
56
Enter Second Number :
55
Both numbers are not equal.
*/