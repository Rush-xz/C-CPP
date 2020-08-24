//////////////////////////////////////////////////////////////
//
//	Accept number from user and one position from user and check
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
BOOL CheckBit( UINT , int);

//Entry-Point Function
int main()
{
	UINT uValue = 0;
	int iBit = 0;
	BOOL bRet = FALSE;

	printf("Enter The Number	:");
	scanf("%d",&uValue);

	printf("Enter The Bit Position	:");
	scanf("%d",&iBit);


	bRet = CheckBit( uValue , iBit );

	if( bRet == TRUE )
	{
		printf("%dth Bit is On.\n",iBit);
	}
	else
	{
		printf("%dth Bit is OFF.\n",iBit);
	}

	return 0;

}


//Dynamic Function
BOOL CheckBit( UINT No , int iPos)
{
	int iMask = 0;
	int iResult = 0;

	if( (iPos1<1) || (iPos1>32) )
	{
		return FALSE;
	}

	/*if( iPos == 0)
	{	
		iMask = 0x00000001;
	}*/

	iMask = 0x00000001 << (iPos - 1); /*Hexadecimal*/

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

Enter The Number        :8
Enter The Bit Position  :4
4th Bit is On.

Enter The Number        :15
Enter The Bit Position  :2
2th Bit is On.

*/



