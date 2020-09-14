///////////////////////////////////////////////////////////////
//
//	Write a recursive program which accept number from user and
//  return its factorial.
//	Input : 5
//	Output : 120
//
///////////////////////////////////////////////////////////////

//Header
#include<stdio.h>

//Prototype
int FactorialR( int );

//Driver Function
int main()
{
	int iValue = 0 , iRet = 0;

	printf("Enter the Number   :");
	scanf("%d",&iValue);

	iRet = FactorialR( iValue );

	printf("Factorial of Number %d is :%d.\n",iValue , iRet);

	return 0;

}

////////////////////////////////////////////////////////////
//
//  Name        :FactorialR
//  Input       :int
//  Returns     :int
//  Description :computes Factorial of given number using recursion
//  Author      :Rushikesh Godase
//  Date        :9 Sep 2020
//
////////////////////////////////////////////////////////////
int FactorialR( int iNo)
{
	static int iFact = 1;

	if( iNo < 0)		//Updater
	{
		iNo = -iNo;
	}


	if( iNo == 0)  //Filter
	{
		return 0;
	}

		if( iNo != 0)
		{
			iFact = iFact*iNo;

				--iNo;

			FactorialR( iNo );
		}

	return iFact;

}

/* OUTPUT : 

Enter the Number   :5
Factorial of Number 5 is :120.


Enter the Number   :4
Factorial of Number 4 is :24.

*/