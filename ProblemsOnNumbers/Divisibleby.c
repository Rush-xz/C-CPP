///////////////////////////////////////////////////////////////////////
//
//      Accept one number and check weather it is divisible by 5 or not
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

//function checks weather given number is divisible by 5 or not
int Check( int iNo)
{
    if( (iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    
}

//Entry-Point Function
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    
    printf("Enter Number\n");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if( bRet == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible 5");
    }
    
    return 0;
}


/*  Output : 
Enter Number
75
Divisible by 5
*/