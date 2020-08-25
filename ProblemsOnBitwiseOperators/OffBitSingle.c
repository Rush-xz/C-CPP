//////////////////////////////////////////////////////////////
//
//		Write a program which accept one number from user and off 7th bit of that
//		number if it is on. Return modified number.
//		Input : 79
//		Output : 15
//
//////////////////////////////////////////////////////////////

//Header
#include<stdio.h>

typedef unsigned int UINT;		/* Unsigned integer*/

//Prototype
int OffBit( UINT );

//Entry-Point Function
int main()
{
	UINT uValue = 0;
	int iRet = 0;

	printf("Enter The Number	:");
	scanf("%d",&uValue);

	iRet = OffBit( uValue );

	printf("Result After Doing 7th bit Off 	:%d.\n",iRet);

	return 0;

}


//Static Function
int OffBit( UINT No )
{
	int iMask = 0;
	int iResult = 0;

	iMask = 0xFFFFFFBF; 		/*Hexadecimal Here we did 7th bit off so if we
									Off the bit  then B will be there 
									1011 0000 = B(11) 0*/

	iResult = iMask & No;

	return iResult;
}



/*	OUTPUT :

Enter The Number        :79
Result After Doing 7th bit Off  :15.

Enter The Number        :81
Result After Doing 7th bit Off  :17.

Enter The Number        :61
Result After Doing 7th bit Off  :61.

*/



