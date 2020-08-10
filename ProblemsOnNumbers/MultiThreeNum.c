///////////////////////////////////////////////////////////////////////
//
//      Write a program which accept three numbers and prints its Multiplication.
//      Note:if one number among three is 0 still print the multiplication of
//      remaining two.
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>


//Prototype 
int  Mult( int , int , int);

//Entry-Point Function
int main()
{
    int iValue1 = 0 , iValue2 = 0 , iValue3 = 0;
    int iRet=0;

    printf("Please Enter Three Numbers :\n");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    iRet = Mult(iValue1,iValue2,iValue3);

    printf("\n%d*%d*%d Multiplication is  : %d.\n",iValue1,iValue2,iValue3,iRet);

    return 0;
}

//Function
int Mult( int iNo1 , int iNo2 , int iNo3)
{
   if(iNo1==0)
   {
    return iNo2*iNo3;
   }
   else if(iNo2==0)
   {
    return iNo1*iNo3;
   }
   else if(iNo3==0)
   {
    return iNo2*iNo1;
   }
   else
   {
    return iNo1*iNo2*iNo3;
   }
}

/*  Output :
Please Enter Three Numbers :
5
0
6

5*0*6 Multiplication is  : 30.

Please Enter Three Numbers :
23
2
0

23*2*0 Multiplication is  : 46.

Please Enter Three Numbers :
0
9
5

0*9*5 Multiplication is  : 45.

*/