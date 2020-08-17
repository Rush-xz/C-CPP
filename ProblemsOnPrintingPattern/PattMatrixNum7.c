///////////////////////////////////////////////////////////////////////
//
//    Accept number of rows and number of columns from user and display
//      below pattern.
//      Input : iRow = 4 iCol = 4
//      Output : 2 4 6 8 10
//               1 3 5 7 9
//               2 4 6 8 10
//               1 3 5 7 9
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
    int iEven = 2 , iOdd = 1;

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

            if( ( i%2 )!= 0)
            {
                printf("%d\t",iEven);

                iEven += 2;  
            }
            else
            {
                printf("%d\t",iOdd);

                iOdd += 2;
                
            }

        }

        iEven = 2;
        iOdd = 1;

        printf("\n");
    }
    
}

/*  Output :
 
Enter Number of Rows :
4
Enter Number of Columns :
5
2       4       6       8       10
1       3       5       7       9
2       4       6       8       10
1       3       5       7       9

*/