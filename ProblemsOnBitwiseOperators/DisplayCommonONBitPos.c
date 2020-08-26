//////////////////////////////////////////////////////////////
//
//		Write a program which accept two numbers from user and 
//		display position of common ON bits from that two numbers.
//		Input : 10 15 (1010 1111)
//		Output : 2 4
//
//////////////////////////////////////////////////////////////

//Header
#include<stdio.h>

typedef unsigned int UINT;		/* Unsigned integer*/

//Prototype
int CommonONBit( UINT , UINT );

//Entry-Point Function
int main()
{
	UINT uValue1 = 0 , uValue2 = 0;

	printf("Enter The Number	:");
	scanf("%d",&uValue1);

	printf("Enter The Number	:");
	scanf("%d",&uValue2);

	CommonONBit( uValue1 , uValue2 );

	return 0;

}


//Function
int CommonONBit( UINT No1 , UINT No2 )
{
	int iMask = 0x00000001;
	int iCnt = 1;
	UINT iNo = 0;

	iNo = No1 & No2;

	printf("Common ON Bit Positions :  ");
	while( iNo > 0)
	{
		if( iNo & iMask == iMask)
		{
			printf("%d\t",iCnt);
		}

		iCnt++;

		iNo = iNo >> 1;
	}

}



/*	OUTPUT :

Enter The Number        :10
Enter The Number        :15
Common ON Bit Positions :  2    4

Enter The Number        :7
Enter The Number        :13
Common ON Bit Positions :  1    3

*/



