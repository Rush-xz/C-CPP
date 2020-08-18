///////////////////////////////////////////////////////////////////////
//
//    Accept number of rows and number of columns from user and display below
//      pattern.
//      Input : iRow = 4 iCol = 4
//      Output : *
//               * *
//               * * *
//               * * * *
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//Prototype
void Pattern( int , int );

//Entry-Point Function
int main()
{
    int iValue1 = 0 , iValue2 = 0;
        
    printf("Enter Number of Rows :\n");
    scanf("%d",&iValue1);

    printf("Enter Number of Columns :\n");
    scanf("%d",&iValue2);

    Pattern(iValue1 , iValue2);

    return 0;
}

//function 
void Pattern( int iRow , int iCol)
{
    int  i = 0 , j=0;

    if( iRow < 0)       //updater
    {
        iRow = -iCol;
    }

    if( iCol < 0)       //updater
    {
        iCol = -iCol;
    }

     if( iRow != iCol )     //Filter
    {
        printf("Please Enter identical Number of Rows and Columns.\n");
        return;
    }


    for( i=1; i<=iRow; i++)
    {
        for( j=1; j<=iCol; j++)
        {
            if( i >= j)
            {
                printf("*\t");
            }
            else
            {
                printf(" ");
            }

        }
        printf("\n");
    }
    
}

/*  Output :
 
Enter Number of Rows :
4
Enter Number of Columns :
4
*
*       *
*       *       *
*       *       *       *

Enter Number of Rows :
5
Enter Number of Columns :
5
*
*       *
*       *       *
*       *       *       *
*       *       *       *       *

*/