///////////////////////////////////////////////////////////////////////
//
//      Write a program which accept number from user and Display 
//       its non-factors.
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//Prototype 
void PrintNonFactors( int );

//Entry-Point Function
int main()
{
    int iValue = 0 ;
        
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    PrintNonFactors(iValue);

    return 0;
}

//Function
void PrintNonFactors( int iNo)
{
    int iFact = 0;

    if( iNo <= 0)       //Filter
    {
        return;
    }

    printf("\nDisplay Non-Factors.\n");
    for( iFact=1; iFact<=iNo; iFact++)
    {
        if( (iNo % iFact) != 0 ) 
        {
            printf("%d\n",iFact);
        }
    }
   
    
}

/*  Output :
 
Enter Number :
12

Display Non-Factors.
5
7
8
9
10
11



*/