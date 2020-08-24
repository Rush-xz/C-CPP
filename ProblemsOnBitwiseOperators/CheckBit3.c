//////////////////////////////////////////////////////////////
//
//	Write a program which checks whether 7th & 8th & 9th bit is On or
//	OFF.
//
//////////////////////////////////////////////////////////////

//Header
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
typedef unsigned int UINT;		/* Unsigned integer*/

//Prototype
BOOL CheckBit( UINT );

//Entry-Point Function
int main()
{
	UINT uValue = 0;
	BOOL bRet = FALSE;

	printf("Enter The Number	:");
	scanf("%d",&uValue);


	bRet = CheckBit( uValue );

	if( bRet == TRUE )
	{
		printf(" Bits are ON.\n");
	}
	else
	{
		printf(" Bits are OFF.\n");
	}

	return 0;

}


//Static Function
BOOL CheckBit( UINT No )
{
	int iMask = 0 , iMask1 , iMask2;
	int iResult = 0;

	iMask1 = 0x00000040;

	iMask2 = 0x00000080 | iMask1;

	iMask = 0x00000100 | iMask2;


	iResult = iMask & No;

	if( iResult == iMask )
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}

}




/*	OUTPUT :

Enter The Number        :85999
 Bits are ON.

Enter The Number        :84956
 Bits are ON.

Enter The Number        :85000
 Bits are OFF.

*/



