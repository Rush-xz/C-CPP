//////////////////////////////////////////////////////////////
//
//	Accept number from user and two positions from user and check
//	whether that bit at that position is ON/OFF. 
//
//////////////////////////////////////////////////////////////

//Header
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
typedef unsigned int UINT;		/* Unsigned integer*/

//Prototype
BOOL CheckBit( UINT , int , int );

//Entry-Point Function
int main()
{
	UINT uValue = 0;
	int iBit1 = 0 ,iBit2 = 0;
	BOOL bRet = FALSE;

	printf("Enter The Number	:");
	scanf("%d",&uValue);

	printf("Enter The Bit Position	:");
	scanf("%d",&iBit1);

	printf("Enter The Bit Position	:");
	scanf("%d",&iBit2);	

	bRet = CheckBit( uValue , iBit1 , iBit2 );

	if( bRet == TRUE )
	{
		printf(" Bits are On.\n");
	}
	else
	{
		printf(" Bits are OFF.\n");
	}

	return 0;

}


//Dynamic Function
BOOL CheckBit( UINT No , int iPos1 , int iPos2)
{
	int iMask = 0 , iMask1 = 0 , iMask2 = 0;
	int iResult = 0;

	if( (iPos1<1) || (iPos1>32) || (iPos2<1) || (iPos2>32) )
	{
		return FALSE;
	}

	/*if( iPos == 0)
	{	
		iMask = 0x00000001;
	}*/

	iMask1 = 0x00000001 << (iPos1 - 1); //Hexadecimal

	iMask2 = 0x00000001 << (iPos2 - 1); //Hexadecimal

	iMask  = iMask1 | iMask2;

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

Enter The Number        :999999
Bit is On.

Enter The Number        :1564
Bit is OFF.

*/



