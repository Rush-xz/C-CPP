///////////////////////////////////////////////////////////////////////
//
//      Accept number from user and display below pattern.
//      Input : 4
//      Output : # 1 * # 2 * # 3 * # 4 *
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//Prototype
void Pattern( int iNo);

//Entry-Point Function
int main()
{
    int iValue = 0 ;
        
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}

//function 
void Pattern( int iNo)
{
    int  i = 0;

    if( iNo < 0)       //updater
    {
        iNo = -iNo;
    }

    for( i=1; i<=iNo; i++)
    {

        printf("#\t");

        printf("%d\t",i);

        printf("*\t");
    }
    
}

/*  Output :
 
Enter Number :
4
#       1       *       #       2       *       #       3       *       #       4       *

*/