///////////////////////////////////////////////////////////////////////
//
//      Print Hollow Full Pyramid.
//      
//      Input : iRow = 6 iCol = 6
//      Output :          *
//                      *   *
//                    *       *
//                  *          *
//                *               *
//              * * * * * * * * * * *
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
    int  i = 0 , j=0 , k=0;

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


    for( i=1; i<=iRow; i++ , k=0)
    {
        for( j=1; j<=iCol-i; j++)
        {
            printf("  ");
        }

        while( k != 2*i-1)
        {

            if( k==0 || k==2*i-2 || i==iRow)
                printf("* ");
            else
                printf("  ");

            ++k;
        }

        printf("\n");

    }
    
}

/*  Output :
 
Enter Number of Rows :
6
Enter Number of Columns :
6
          *
        *   *
      *       *
    *           *
  *               *
* * * * * * * * * * *


Enter Number of Rows :
8
Enter Number of Columns :
8
              *
            *   *
          *       *
        *           *
      *               *
    *                   *
  *                       *
* * * * * * * * * * * * * * *

Enter Number of Rows :
10
Enter Number of Columns :
10
                  *
                *   *
              *       *
            *           *
          *               *
        *                   *
      *                       *
    *                           *
  *                               *
* * * * * * * * * * * * * * * * * * *

*/