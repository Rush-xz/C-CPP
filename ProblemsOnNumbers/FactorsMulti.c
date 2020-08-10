///////////////////////////////////////////////////////////////////////
//
//      Write a program which accept number from user and Display  
//       Multiplication factors of that number
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//Prototype 
int  FactorsMulti( int );

//Entry-Point Function
int main()
{
    int iValue = 0 , iRet = 0;
        
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = FactorsMulti(iValue);

    printf("Factors Multiplication is : %d\n",iRet);

    return 0;
}

//Function
int  FactorsMulti( int iNo)
{
    int iFact = 0 , iMult = 1;

    if( iNo <= 0)       //Filter
    {
        return -1;
    }

    for( iFact=1; iFact<=iNo/2; iFact++)
    {
        if( (iNo % iFact) == 0 ) 
        {
            iMult = iMult * iFact;
        }
    }

    return iMult;
   
    
}

/*  Output :
 
Enter Number :
12
Factors Multiplication is : 144

Enter Number :
13
Factors Multiplication is : 1

*/