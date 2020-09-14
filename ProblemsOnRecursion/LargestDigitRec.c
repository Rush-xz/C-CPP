///////////////////////////////////////////////////////////////
//
//	Write a recursive program which accept number from user and
//  return largest digit
//	Input : 87983
//	Output : 9
//
///////////////////////////////////////////////////////////////

//Header
#include<stdio.h>

//Prototype
int Maximum( int );

//Driver Function
int main()
{
	int iValue = 0 , iRet = 0;

	printf("Enter the Number   :");
	scanf("%d",&iValue);

	iRet = Maximum( iValue );

	printf("Largest Digit from Number %d is :%d",iValue,iRet);

	return 0;

}

////////////////////////////////////////////////////////////
//
//  Name        :Maximum
//  Input       :int
//  Returns     :int
//  Description :Comptes largest digit from number using recursion
//  Author      :Rushikesh Godase
//  Date        :9 Sep 2020
//
////////////////////////////////////////////////////////////
int Maximum( int iNo)
{
	static int iMax = 0;
	int iDigit = 0;

	if( iNo < 0)		//Updater
	{
		iNo = -iNo;
	}

		if( iNo != 0)
		{
			iDigit = iNo % 10;

			if( iDigit > iMax)
				iMax = iDigit;

			iNo = iNo / 10;

			Maximum( iNo );
		}

	return iMax;

}

/* OUTPUT : 

Enter the Number   :48956
Largest Digit from Number 48956 is :9

Enter the Number   :12470123
Largest Digit from Number 12470123 is :7

*/