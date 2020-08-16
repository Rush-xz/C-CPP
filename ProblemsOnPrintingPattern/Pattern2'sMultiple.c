///////////////////////////////////////////////////////////////////////
//
//      Accept number from user and display below pattern.
//      Input : 8
//      Output : 2 4 6 8 10 12 14 16
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

    if( iNo < 0)       //Filter
    {
        iNo = -iNo;
    }

    for( i=1; i<=iNo; i++)
    {

        printf("%d ",2*i);
    }
    
}

/*  Output :
 
Enter Number :
8
2 4 6 8 10 12 14 16
*/