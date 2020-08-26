//////////////////////////////////////////////////////////////
//
//		Write a program which accept one number from user and check whether
//		9th or 12th bit is on or off.
//		Input : 257
//		Output : TRUE
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
	int iMask1 = 0 , iMask2 =0;
	int iResult1 = 0, iResult2 = 0;

	iMask1 = 0x00000100; 		//Hexadecimal
	iMask2 = 0x00000800;

	iResult1 = iMask1 & No;
	iResult2 = iMask2 & No;

	if( (iResult1 == iMask1) || (iResult2 == iMask2) )//if Anyone of ON
	{													//then result will TRUE 
		return TRUE;
	}
	else
	{
		return FALSE;
	}

}




/*	OUTPUT :

Enter The Number        :1
 Bit is OFF.

Enter The Number        :256
 Bit is On.

Enter The Number        :257
 Bit is On.

Enter The Number        :5632
 Bit is OFF.

Enter The Number        :2048
 Bit is On.

*/



