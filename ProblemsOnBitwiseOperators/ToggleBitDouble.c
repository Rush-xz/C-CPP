//////////////////////////////////////////////////////////////
//
//		Write a program which accept one number from user and 
//		toggle 7th and 10th bit of that number. Return modified number.
//		Input : 137
//		Output : 713
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

	printf("Mofified Number after Toggling 7th and 10th bit 	:%d.\n",iRet);

	return 0;

}


//Function
int ToggleBit( UINT No )
{
	int iMask = 0;
	int iResult = 0;

	iMask = 0x00000240; 		

	iResult = iMask ^ No;

	return iResult;
}



/*	OUTPUT :

Enter The Number        :137
Mofified Number after Toggling 7th and 10th bit         :713.

Enter The Number        :713
Mofified Number after Toggling 7th and 10th bit         :137.

Enter The Number        :1161
Mofified Number after Toggling 7th and 10th bit         :1737.


*/



