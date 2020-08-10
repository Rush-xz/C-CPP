///////////////////////////////////////////////////////////////////////
//
//      Write a program which accept number from user and print 
//      factors of that number in decreasing order
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//Prototype 
void PrintFactorsDecre( int );

//Entry-Point Function
int main()
{
    int iValue = 0 ;
        
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    PrintFactorsDecre(iValue);

    return 0;
}

//Function
void PrintFactorsDecre( int iNo)
{
    int iFact = 0;

    if( iNo <= 0)       //Filter
    {
        return;
    }

    printf("\n Factors In Decreasing Order.\n");
    for( iFact=iNo/2; iFact>0; --iFact)
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

 Factors In Decreasing Order.
12
8
6
4
3
2
1


*/