///////////////////////////////////////////////////////////////////////
//
//     Accept number of rows and number of columns from user and display below
//      pattern.
//      Input : iRow = 4 iCol = 4
//      Output : A B C D
//               a b c d
//               A B C D
//               a b c d
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
    char cAlpha = 'A';

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

        for( j=1; j<=iCol; j++ , cAlpha++)
        {
            printf("%c\t",cAlpha);
        }

        if( ( i%2 )!=0 )
        {
            cAlpha = 'a';
        }
        else
        {
            cAlpha = 'A';
        }

        printf("\n");
    }
    
}

/*  Output :
 
Enter Number of Rows :
5
Enter Number of Columns :
5
A       B       C       D       E
a       b       c       d       e
A       B       C       D       E
a       b       c       d       e
A       B       C       D       E

*/