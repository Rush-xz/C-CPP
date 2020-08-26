//////////////////////////////////////////////////////////////
//
//		Write a program which accept one number and position from
//		 user and off that bit. Return modified number.
//		Input : 10 2
//		Output : 8
//
//////////////////////////////////////////////////////////////

//Header
#include<stdio.h>

typedef unsigned int UINT;		/* Unsigned integer*/

//Prototype
int OffBit( UINT , int );

//Entry-Point Function
int main()
{
	UINT uValue = 0;
	int iBit = 0;
	int iRet = 0;

	printf("Enter The Number	:");
	scanf("%d",&uValue);

	printf("Enter The Number	:");
	scanf("%d",&iBit);

	iRet = OffBit( uValue , iBit);

	printf("Modified Number after doing %dth bit Off 	:%d.\n",iBit,iRet);

	return 0;

}


//Dynamic Function
int OffBit( UINT No , int iPos)
{
	int iMask = 0;
	int iResult = 0;

	if( (iPos<0) || (iPos>32) )		//Filter
	{
		return -1;
	}
											//If iPos = 2
	iMask = ~( 0x00000001 << (iPos - 1) );  /*	 ~(0000 0000 0000 0000
												 0000 0000 0000 0010)
												 		= 
												 (1111 1111 1111 1111
												  1111 1111 1111 1101)*/

	iResult = iMask & No;

	return iResult;
}



/*	OUTPUT :

Enter The Number        :15
Enter The Number        :4
Modified Number after doing 4th bit Off         :7.


Enter The Number        :7
Enter The Number        :3
Modified Number after doing 3th bit Off         :3.


Enter The Number        :8
Enter The Number        :4
Modified Number after doing 4th bit Off         :0.

*/



