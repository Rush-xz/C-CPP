///////////////////////////////////////////////////////////////
//
//	Write a recursive program which accept number from user and return
//	summation of its digits.
//	Input : 879
//	Output : 24	
//
///////////////////////////////////////////////////////////////

//Header
#include<stdio.h>

//Prototype
int DigitSumR( int );

//Driver Function
int main()
{
	int iValue = 0 , iRet = 0;

	printf("Enter the Number   :");
	scanf("%d",&iValue);

	iRet = DigitSumR( iValue );

	printf("Summation of Digits :%d",iRet);

	return 0;

}

////////////////////////////////////////////////////////////
//
//  Name        :DigitSumR
//  Input       :int
//  Returns     :int
//  Description :computes Addition of digits from number using recursion
//  Author      :Rushikesh Godase
//  Date        :9 Sep 2020
//
////////////////////////////////////////////////////////////
int DigitSumR( int iNo)
{
	static int iSum = 0;
	int iDigit = 0;

	if( iNo < 0)		//Updater
	{
		iNo = -iNo;
	}


		if( iNo != 0)
		{
			iDigit = iNo % 10;

			iSum = iSum + iDigit;

			iNo = iNo / 10;

			DigitSumR( iNo );
		}

	return iSum;

}

/* OUTPUT : 

Enter the Number   :4589
Summation of Digits :26

Enter the Number   :879
Summation of Digits :24

*/