///////////////////////////////////////////////////////////////////////
//
//      Print Full Inverted Pyramid pyramid.
//      
//      Input : iRow = 6 iCol = 6
//      Output :       * * * * * *
//                       * * * *
//                        * * *
//                         * *
//                          *
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
    int  i = 0 , j=0 , k=0 , Space = 0;

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


    for( i=1; i<=iRow; ++i)
    {
        ++Space;
            if( i>1)
            {
                k=Space;

                while( k !=0)
                {
                    printf(" ");
                    --k;
                }



            }

        for( j=1; j<=iCol; ++j)
        {

            if( i+j <= iRow)
                printf("* ");
            else
                printf("  ");

            if( (i == 1) && (j==iCol) )
            {
                printf("\b\b*");
            }
        }

        printf("\n");

    }
    
}

/*
// C program to print inverted full pyramid pattern using stars
#include <stdio.h>
int main()
{
    int i, j, n, k = 0;

    scanf(“%d”,&n);

    for(i=n; i>=1; --i)
    {
        for(j=0; j < n-i; ++j)
            printf(” “);

        for(j=i; j <= 2*i-1; ++j)
            printf(“* “);

        for(j=0; j < i-1; ++j)
            printf(“* “);

        printf(“\n”);
    }

    return 0;
}
*/

/*  Output :
 
Enter Number of Rows :
6
Enter Number of Columns :
6
* * * * * *
  * * * *
   * * *
    * *
     *


C:\Users\HP\Documents\GitHub\C-CPP\ProblemsOnPrintingPattern>myexe
Enter Number of Rows :
9
Enter Number of Columns :
9
* * * * * * * * *
  * * * * * * *
   * * * * * *
    * * * * *
     * * * *
      * * *
       * *
        *
*/