///////////////////////////////////////////////////////////////////////
//
//      Write a program which accept number from user and return difference
//       between summation of all its factors and non-factors.
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//Prototype 
int  FactDiff( int );

//Entry-Point Function
int main()
{
    int iValue = 0 , iRet = 0;
        
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Difference between Summation of Factors and Non Factors is : %d\n",iRet);

    return 0;
}

//Function
int  FactDiff( int iNo)
{
    int iFact = 0 , iSumF = 0 , iSumNF = 0;

    if( iNo <= 0)       //Filter
    {
        return -1;
    }

    for( iFact=1; iFact<iNo; iFact++)
    {
        if( (iNo % iFact) == 0 ) 
        {
            iSumF = iSumF + iFact;
        }
        else if( (iNo % iFact) != 0)
        {
            iSumNF = iSumNF + iFact;
        }
    }

    printf("%d-%d\n",iSumF , iSumNF );

    return iSumF - iSumNF;
   
    
}

/*  Output :
 
Enter Number :
12
16-50
Difference between Summation of Factors and Non Factors is : -34

Enter Number :
10
8-37
Difference between Summation of Factors and Non Factors is : -29

*/