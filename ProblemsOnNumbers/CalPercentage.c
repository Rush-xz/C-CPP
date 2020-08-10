///////////////////////////////////////////////////////////////////////
//
//      Write a program which accept total marks and obtined marks from
//      user and calculate percentage.
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//Prototype 
float  CalPercentage( int , int );

//Entry-Point Function
int main()
{
    int iValue1 = 0  ,  iValue2 = 0;
    float fRet = 0.0;

    printf("Please Enter Total marks :\n");
    scanf("%d",&iValue1);

     printf("Please Enter obtained marks :\n");
    scanf("%d",&iValue2);

    fRet = CalPercentage(iValue1,iValue2);

    if( fRet == -1)
    {
             printf("Invalid(Total marks Can't be 0). \n");
    }
    else
    {
         printf("Your Percentage is  : %f %.\n",fRet);
    }
    
    return 0;
}

//Function
float  CalPercentage(int iNo1 , int iNo2)
{

    if( (iNo1==0) )
    {
       return -1;
    }
    else
    {
     return ((float)iNo2/iNo1)*100;
    }
}

/*  Output :
 
Please Enter Total marks :
1000
Please Enter obtained marks :
745
Your Percentage is  : 74.500000.

*/