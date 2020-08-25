//////////////////////////////////////////////////////////////
//
//		Write a program which accept one number from user and on its first 4
//		bits. Return modified number.
//		Input : 73
//		Output : 79
//
//////////////////////////////////////////////////////////////

//Header
#include<stdio.h>

typedef unsigned int UINT;		/* Unsigned integer*/

//Prototype
int OnBit( UINT );

//Entry-Point Function
int main()
{
	UINT uValue = 0;
	int iRet = 0;

	printf("Enter The Number	:");
	scanf("%d",&uValue);

	iRet = OnBit( uValue );

	printf("Modified Number after On It First four bits	:%d.\n",iRet);

	return 0;

}


//Function
int OnBit( UINT No )
{
	int iMask = 0;
	int iResult = 0;

	iMask = 0x0000000F; 		

	iResult = iMask | No;

	return iResult;
}



/*	OUTPUT :

Enter The Number        :73
Modified Number after On It First four bits     :79.

Enter The Number        :96
Modified Number after On It First four bits     :111.

*/



