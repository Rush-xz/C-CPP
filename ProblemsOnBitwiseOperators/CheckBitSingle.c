//////////////////////////////////////////////////////////////
//
//		Write a program which checks whether 15th bit is On or OFF.
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
		printf(" Bit is On.\n");
	}
	else
	{
		printf(" Bit is OFF.\n");
	}

	return 0;

}


//Function
BOOL CheckBit( UINT No )
{
	int iMask = 0;
	int iResult = 0;

	iMask = 0x00004000; 		/*Hexadecimal*/

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

Enter The Number        :1111111
 Bit is On.

Enter The Number        :50000
 Bit is On.

Enter The Number        :10000
Bit is OFF.

*/



