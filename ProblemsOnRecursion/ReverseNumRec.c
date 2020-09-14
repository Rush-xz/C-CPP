///////////////////////////////////////////////////////////////
//
//	Write a recursive program which accept number from user and
//  return its reverse number.
//	Input : 523
//	Output : 325
//
///////////////////////////////////////////////////////////////

//Header
#include<stdio.h>

//Prototype
int ReverseNumR( int );

//Driver Function
int main()
{
	int iValue = 0 , iRet = 0;

	printf("Enter the Number   :");
	scanf("%d",&iValue);

	iRet = ReverseNumR( iValue );

	printf("Modified Number is   :%d.\n",iRet);

	return 0;

}

////////////////////////////////////////////////////////////
//
//  Name        :ReverseNumR
//  Input       :int
//  Returns     :int
//  Description :Reverse number by using recursion
//  Author      :Rushikesh Godase
//  Date        :9 Sep 2020
//
////////////////////////////////////////////////////////////
int ReverseNumR( int iNo)
{
	static int iDigit = 0;

	if( iNo < 0)		//Updater
	{
		iNo = -iNo;
	}

		if( iNo != 0)
		{
			iDigit = iDigit * 10 + (iNo % 10);

			iNo = iNo / 10;

			ReverseNumR( iNo );
		}

	return iDigit;
}

/* OUTPUT : 

Enter the Number   :4658
Modified Number is   :8564.


Enter the Number   :523
Modified Number is   :325.


*/