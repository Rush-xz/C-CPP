/////////////////////////////////////////////////////////////
//
//  Accept single digit number from user and print it into word.
//
/////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//Prototype 
int  Factorial( int );

//Entry-Point Function
int main()
{
    int iValue = 0 ,iRet = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of %d is %3d.",iValue,iRet);

    return 0;

}

//Function
int Factorial( int iNo)
{
	int iProd = 1;

	if( iNo == 0 )
	{
		return 0;
	}

	if( iNo < 0 )
	{
		iNo = -iNo;
	}

	while( iNo != 0)
	{
		iProd = iProd * iNo;

		--iNo;
	}
	
	return iProd;
}



/*  Output : 
Enter number :
5
Factorial of 5 is 120.

Enter number :
-5
Factorial of -5 is 120.

Enter number :
4
Factorial of 4 is  24.

Enter number :
0
Factorial of 0 is   0.

	Enter number :
-0
Factorial of 0 is   0.
*/