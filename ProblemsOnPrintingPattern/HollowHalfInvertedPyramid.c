///////////////////////////////////////////////////////////////////////
//
//      Print Hollow inverted half pyramid.
//      
//      Input : iRow = 5 iCol = 5
//      Output : * * * * *
//               *     *
//               *   *
//               * *
//               *
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
            if( (i+j==iRow+1) ||  (i==1) || (j==1) )
            {
                printf("* ");
            }
            else
            {
                printf("  ");
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
* * * * * *
*       *
*     *
*   *
* *
*

Enter Number of Rows :
9
Enter Number of Columns :
9
* * * * * * * * *
*             *
*           *
*         *
*       *
*     *
*   *
* *
*

*/