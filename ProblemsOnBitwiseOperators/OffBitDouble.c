//////////////////////////////////////////////////////////////
//
//		Write a program which accept one number from user and off 7th and 10th
//		bit of that number. Return modified number.
//		Input : 577
//		Output : 1
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

	printf("Mofified Number after Doing 7th and 10th bit Off 	:%d.\n",iRet);

	return 0;

}


//Function
int OffBit( UINT No )
{
	int iMask = 0;
	int iResult = 0;

	iMask = 0xFFFFFDBF; 		/*Hexadecimal Here we did 7th bit off so if we
									Off the bit  then B will be there 
									1101 1011 0000 = D(13) B(11) 0*/

	iResult = iMask & No;

	return iResult;
}



/*	OUTPUT :

Enter The Number        :577
Mofified Number after Doing 7th and 10th bit Off        :1.

Enter The Number        :500
Mofified Number after Doing 7th and 10th bit Off        :436.

Enter The Number        :692
Mofified Number after Doing 7th and 10th bit Off        :180.

Enter The Number        :180
Mofified Number after Doing 7th and 10th bit Off        :180.

Enter The Number        :1460
Mofified Number after Doing 7th and 10th bit Off        :1460.


*/



