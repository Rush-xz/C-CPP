///////////////////////////////////////////////////////////////////////
//
//    Accept number of rows and number of columns from user and display below
//      pattern.
//      Input : iRow = 4 iCol = 4
//      Output : 1 2 3 4
//               1 * * 4
//               1 * * 4
//               1 2 3 4
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

    for( i=1; i<=iRow; i++)
    {
        for( j=1; j<=iCol; j++)
        {
            if( (i == 1 ) )
            {
                printf("%d\t",j);
            }
            else if( j == 1 )
            {
                printf("%d\t",j);
            }
            else if( i == iRow )
            {
                printf("%d\t",j);
            }
            else if( j == iCol )
            {
                printf("%d\t",j);
            }
            else
            {
                printf("*\t");
            }

        }
        printf("\n");
    }
    
}

/*  Output :
 
Enter Number of Rows :
6
Enter Number of Columns :
5
1       2       3       4       5
1       *       *       *       5
1       *       *       *       5
1       *       *       *       5
1       *       *       *       5
1       2       3       4       5

Enter Number of Rows :
4
Enter Number of Columns :
4
1       2       3       4
1       *       *       4
1       *       *       4
1       2       3       4

*/