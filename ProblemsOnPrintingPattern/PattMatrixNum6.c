///////////////////////////////////////////////////////////////////////
//
//     Accept number of rows and number of columns from user and display
//      below pattern.
//      Input : iRow = 4 iCol = 4
//      Output : 1 2 3 4
//               5 6 7 8
//               9 1 2 3
//               4 5 6 7
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
    int iNum = 1;

    if( iRow < 0)       //updater
    {
        iRow = -iCol;
    }

    if( iCol < 0)       //updater
    {
        iCol = -iCol;
    }

    for( i=1; i<=iRow; i++)
    {

        for( j=1; j<=iCol; j++ , iNum++)
        {
            printf("%d\t",iNum);

             if( iNum == 9 )
            {
                iNum = 0;
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
1       2       3       4
5       6       7       8
9       1       2       3
4       5       6       7

*/