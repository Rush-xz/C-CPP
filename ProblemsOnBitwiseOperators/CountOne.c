//////////////////////////////////////////////////////////////
//
//		Write a program which accept one number from user and count number of
//		ON (1) bits in it without using % and / operator.
//		Input : 11
//		Output : 3
//
//////////////////////////////////////////////////////////////

//Header
#include<stdio.h>

typedef unsigned int UINT;		/* Unsigned integer*/

//Prototype
int CountOne( UINT );

//Entry-Point Function
int main()
{
	UINT uValue = 0;
	int iRet = 0;

	printf("Enter The Number	:");
	scanf("%d",&uValue);

	iRet = CountOne( uValue );

	printf("Number of ones ON(1) bits in %d is 	:%d.\n",uValue,iRet);

	return 0;

}


//Function
int CountOne( UINT No )
{
	int iMask = 0x00000001;
	int iCnt = 0;

	while( No > 0)
	{
		if( No & iMask == iMask)
		{
			iCnt++;
		}

		No = No >> 1;
	}


	return iCnt;
}

//with using % and /
/*int CountOne( UINT No )
{
	int iCnt = 0 , iDigit=0;

	while( No > 0)
	{
		iDigit = No % 2;

		if( iDigit == 1)
		{
			iCnt++;
		}

		No = No / 2;
	}


	return iCnt;
}*/


/*	OUTPUT :

Enter The Number        :15
Number of ones ON(1) bits in 15 is      :4.

Enter The Number        :8
Number of ones ON(1) bits in 8 is       :1.

Enter The Number        :17
Number of ones ON(1) bits in 17 is      :2.

Enter The Number        :19104
Number of ones ON(1) bits in 19104 is   :5.

*/



