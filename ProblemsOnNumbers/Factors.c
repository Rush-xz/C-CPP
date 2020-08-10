///////////////////////////////////////////////////////////////////////
//
//      Write a program which accept number from user and print 
//      factors of that number
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//Prototype 
void PrintFactors( int );

//Entry-Point Function
int main()
{
    int iValue = 0 ;
        
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    PrintFactors(iValue);

    return 0;
}

//Function
void PrintFactors( int iNo)
{
    int iFact = 0;

    if( iNo <= 0)       //Filter
    {
        return;
    }

    printf("\n Factors.\n");
    for( iFact=1; iFact<=iNo/2; iFact++)
    {
        if( (iNo % iFact) == 0 ) 
        {
            printf("%d\n",iFact);
        }
    }
   
    
}

/*  Output :
 
Enter Number :
24

 Factors.
1
2
3
4
6
8
12

*/