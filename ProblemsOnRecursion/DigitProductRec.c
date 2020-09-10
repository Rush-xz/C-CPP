///////////////////////////////////////////////////////////////
//
//	Write a recursive program which accept number from user and
//  return its product of digits.
//	Input : 523
//	Output : 30
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

	printf("Product of Digits :%d",iRet);

	return 0;

}

//Function
int DigitSumR( int iNo)
{
	static int iMult = 1;
	int iDigit = 0;

	if( iNo < 0)		//Updater
	{
		iNo = -iNo;
	}


	if( iNo == 0 )
	{
		return 0;
	}

		if( iNo != 0)
		{
			iDigit = iNo % 10;

			iMult = iMult * iDigit;

			iNo = iNo / 10;

			DigitSumR( iNo );
		}

	return iMult;

}

/* OUTPUT : 

Enter the Number   :456
Product of Digits :120

Enter the Number   :7894
Product of Digits :2016

Enter the Number   :523
Product of Digits :30

*/