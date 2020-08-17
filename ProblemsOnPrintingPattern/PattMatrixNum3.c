///////////////////////////////////////////////////////////////////////
//
//      Accept number of rows and number of columns from user and display
//      below pattern.
//      Input : iRow = 3 iCol = 4
//      Output : 1 1 1 1
//               2 2 2 2
//               3 3 3 3
//               4 4 4 4
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

    if( iRow < 0)       //Filter
    {
        iRow = -iCol;
    }

    if( iCol < 0)
    {
        iCol = -iCol;
    }

    for( i=1; i<=iRow; i++)
    {

        for( j=1; j<=iCol; j++)
        {
            printf("%d\t",i);
        }

        printf("\n");
    }
    
}

/*  Output :
 
Enter Number of Rows :
6
Enter Number of Columns :
4
1       1       1       1
2       2       2       2
3       3       3       3
4       4       4       4
5       5       5       5
6       6       6       6


*/