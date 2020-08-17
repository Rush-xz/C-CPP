///////////////////////////////////////////////////////////////////////
//
//     Accept number of rows and number of columns from user and display below
//      pattern.
//      Input : iRow = 4 iCol = 5
//      Output : 4 4 4 4 4
//               3 3 3 3 3
//               2 2 2 2 2
//               1 1 1 1 1
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

    for( i=iRow; i>0; i--)
    {

        for( j=iCol; j>0; j--)
        {
            printf("%d\t",i);
        }

        printf("\n");
    }
    
}

/*  Output :
 
Enter Number of Rows :
4
Enter Number of Columns :
5
4       4       4       4       4
3       3       3       3       3
2       2       2       2       2
1       1       1       1       1

*/