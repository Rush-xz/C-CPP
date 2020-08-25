//////////////////////////////////////////////////////////////
//
//		Write a program which accept one number and position from user and on
//		that bit. Return modified number.
//		Input : 10 3
//		Output : 14
//
//////////////////////////////////////////////////////////////

//Header
#include<stdio.h>

typedef unsigned int UINT;		/* Unsigned integer*/

//Prototype
int OnBit( UINT , int);

//Entry-Point Function
int main()
{
	UINT uValue = 0;
	int iBit = 0;
	int iRet = 0;

	printf("Enter The Number	:");
	scanf("%d",&uValue);

	printf("Enter Bit Position	:");
	scanf("%d",&iBit);

	iRet = OnBit( uValue , iBit);

	printf("Modified Number after Doing %dth bit ON 	:%d.\n",iBit , iRet);

	return 0;

}


//Dynamic Function
int OnBit( UINT No ,int iPos )
{
	int iMask = 0;
	int iResult = 0;

	if( (iPos<1) || (iPos>32) )
	{
		return -1;
	}

	iMask = 0x00000001 << (iPos - 1);
	
	iResult = iMask | No;

	return iResult;
}



/*	OUTPUT :

Enter The Number        :10
Enter Bit Position      :3
Modified Number after Doing 3th bit ON  :14.

Enter The Number        :7
Enter Bit Position      :4
Modified Number after Doing 4th bit ON  :15.

Enter The Number        :7
Enter Bit Position      :1
Modified Number after Doing 1th bit ON  :7.

*/



