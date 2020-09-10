///////////////////////////////////////////////////////////////
//
//	Write a recursive program which accept number from user and
//  return smallest digit
//	Input : 87983
//	Output : 3
//
///////////////////////////////////////////////////////////////

//Header
#include<stdio.h>

//Prototype
int Minimum( int );

//Driver Function
int main()
{
	int iValue = 0 , iRet = 0;

	printf("Enter the Number   :");
	scanf("%d",&iValue);

	iRet = Minimum( iValue );

	printf("Smallest Digit from Number %d is :%d",iValue,iRet);

	return 0;

}

//Function
int Minimum( int iNo)
{
	static int iMin = 9;
	int iDigit = 0;

	if( iNo < 0)		//Updater
	{
		iNo = -iNo;
	}

		if( iNo != 0)
		{
			iDigit = iNo % 10;

			if( iDigit < iMin)
				iMin = iDigit;

			iNo = iNo / 10;

			Minimum( iNo );
		}

	return iMin;

}

/* OUTPUT : 

Enter the Number   :46897
Smallest Digit from Number 46897 is :4

Enter the Number   :894219856
Smallest Digit from Number 894219856 is :1

*/