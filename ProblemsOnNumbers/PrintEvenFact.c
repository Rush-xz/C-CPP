///////////////////////////////////////////////////////////////////////
//
//      Write a program which accept number from user and print even 
//      factors of that number
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//Prototype 
void PrintEvenFactors( int );

//Entry-Point Function
int main()
{
    int iValue = 0 ;
        
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    PrintEvenFactors(iValue);

    return 0;
}

//Function
void PrintEvenFactors( int iNo)
{
    int iFact = 0;

    if( iNo <= 0)       //Filter
    {
        return;
    }

    printf("\n Even Factors.\n");
    for( iFact=1; iFact<=iNo/2; iFact++)
    {
        if( (iNo % iFact) == 0 && (iFact % 2) == 0 ) 
        {
            printf("%d\n",iFact);
        }
    }
   
    
}

/*  Output :
 
Enter Number :
24

 Even Factors.
2
4
6
8
12

*/