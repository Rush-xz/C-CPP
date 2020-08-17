///////////////////////////////////////////////////////////////////////
//
//      Accept number of rows and number of columns from user and display below
//      pattern.
//      Input : iRow = 4 iCol = 4
//      Output : A B C D
//               A B C D
//               A B C D
//               A B C D
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

        cAlpha = 'A';
        printf("\n");
    }
    
}

/*  Output :
 
Enter Number of Rows :
5
Enter Number of Columns :
4
A       B       C       D
A       B       C       D
A       B       C       D
A       B       C       D
A       B       C       D


*/