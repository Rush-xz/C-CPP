///////////////////////////////////////////////////////////////////////
//
//      Write a program which accept one number from user and print that 
//      number of even numbers on screen 
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//Prototype
void PrintEven( int iNo);

//Entry-Point Function
int main()
{
    int iValue = 0 ;
        
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}

//function 
void PrintEven( int iNo)
{
    int i = 0;

    if( iNo <= 0)       //Filter
    {
        return;
    }

    printf("\n Even Numbers.\n");
    for( i=1; i<=iNo*2; i++)
    {
        if( (i % 2) == 0)
        {
            printf("%d\n",i);
        }
    }
   
    
}

/*  Output :
 
Enter Number :
7

 Even Numbers.
2
4
6
8
10
12
14


*/