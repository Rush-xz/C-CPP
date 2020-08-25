//////////////////////////////////////////////////////////////
//
//		Write a program which accept one number from user and 
//		toggle 7th bit of that number. Return modified number.
//		Input : 137
//		Output : 201
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
	int iRet = 0;

	printf("Enter The Number	:");
	scanf("%d",&uValue);

	iRet = ToggleBit( uValue );

	printf("Modified Number after toggle 7th bit	:%d.\n",iRet);

	return 0;

}


//Static Function
int ToggleBit( UINT No )
{
	int iMask = 0;
	int iResult = 0;

	iMask = 0x00000040; 		

	iResult = iMask ^ No;

	return iResult;
}



/*	OUTPUT :

Enter The Number        :137
Modified Number after toggle 7th bit    :201.

Enter The Number        :73
Modified Number after toggle 7th bit    :9.

*/



