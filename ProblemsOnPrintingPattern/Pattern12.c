///////////////////////////////////////////////////////////////////////
//
//  Accept number of rows and number of columns from user and display below
//  pattern.
//  Input : iRow = 4 iCol = 4
//  Output : 1 2 3 4 5
//           1 2     5
//           1   3   5
//           1     4 5
//           1 2 3 4 5
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
            if( i==1 )
            {
                printf("%d\t",j);
            }
            else if( j==1 )
            {
                printf("%d\t",j);
            }
            else if( i==iRow )
            {
                printf("%d\t",j);
            }
            else if( j==iCol )
            {
                printf("%d\t",i);
            }
            else if( i==j )
            {
                printf("%d\t",i);
            }
            else
            {
                printf(" \t");
            }

        }
        printf("\n");
    }
    
}

/*  Output :
 
Enter Number of Rows :
6
Enter Number of Columns :
6
1       2       3       4       5       6
1       2                               2
1               3                       3
1                       4               4
1                               5       5
1       2       3       4       5       6

Enter Number of Rows :
4
Enter Number of Columns :
4
1       2       3       4
1       2               2
1               3       3
1       2       3       4

Enter Number of Rows :
5
Enter Number of Columns :
5
1       2       3       4       5
1       2                       2
1               3               3
1                       4       4
1       2       3       4       5

*/