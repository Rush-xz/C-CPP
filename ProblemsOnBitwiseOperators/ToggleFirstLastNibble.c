//////////////////////////////////////////////////////////////
//
//		Write a program which accept one number from user and toggle contents
//		of first and last nibble of the number. Return modified number. (Nibble is a
//		group of four bits)
//	
//////////////////////////////////////////////////////////////

//Header
#include<stdio.h>

typedef unsigned int UINT;		/* Unsigned integer*/

//Prototype
int ToggleBit( UINT );

//Entry-Point Function
int main()
{
	UINT uValue = 0;
	long  iRet = 0;

	printf("Enter The Number	:");
	scanf("%d",&uValue);

	iRet = ToggleBit( uValue );

	printf("Modified Number after toggle First and Last Nibble of Number  :%d.\n",iRet);

	return 0;

}


//Function
int ToggleBit( UINT No )
{
	int iMask = 0;
	long  iResult = 0;

	iMask = 0xF000000F; 		

	iResult = iMask ^ No;

	return iResult;
}



/*	OUTPUT :


*/



