///////////////////////////////////////////////////////////////////////
//
//      Write a program which accept number from user and Display  
//       Summation Non-factors of that number
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//Prototype 
int  NonFactorsSum( int );

//Entry-Point Function
int main()
{
    int iValue = 0 , iRet = 0;
        
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = NonFactorsSum(iValue);

    printf("Non Factors Summation is : %d\n",iRet);

    return 0;
}

//Function
int  NonFactorsSum( int iNo)
{
    int iFact = 0 , iSum = 0;

    if( iNo <= 0)       //Filter
    {
        return -1;
    }

    for( iFact=1; iFact<=iNo; iFact++)
    {
        if( (iNo % iFact) != 0 ) 
        {
            iSum = iSum + iFact;
        }
    }

    return iSum;
   
    
}

/*  Output :
 
Enter Number :
12
Non Factors Summation is : 50

*/