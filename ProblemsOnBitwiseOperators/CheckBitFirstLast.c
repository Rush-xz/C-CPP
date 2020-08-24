//////////////////////////////////////////////////////////////
//
//	Write a program which checks whether first and last bit is On or
//	OFF. First bit means bit number 1 and last bit means bit number 32.
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
	int iMask = 0;
	int iResult = 0;

	iMask = 0x80000001;

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

Enter The Number        :7849259999
 Bits are ON.


Enter The Number        :7894547764
 Bits are OFF.

*/



