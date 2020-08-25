//////////////////////////////////////////////////////////////
//
//		Write a program which accept one number and two Bit position
//		 from user and toggle that bit position of that number.
//		 Return modified number.
//		
//		Input : 137
//		Bit Pos: 7 10
//		Output : 713
//
//////////////////////////////////////////////////////////////

//Header
#include<stdio.h>

typedef unsigned int UINT;		/* Unsigned integer*/

//Prototype
int ToggleBit( UINT , int , int );

//Entry-Point Function
int main()
{
	UINT uValue = 0;
	int iBit1 = 0 , iBit2 = 0;
	int iRet = 0;

	printf("Enter The Number	:");
	scanf("%d",&uValue);

	printf("Enter Bit Position	:");
	scanf("%d",&iBit1);

	printf("Enter Bit Position	:");
	scanf("%d",&iBit2);

	iRet = ToggleBit(uValue, iBit1 , iBit2);

	printf("Modified Number after Toggling %dth and %dth bit 	:%d.\n",iBit1,iBit2,iRet);

	return 0;

}


//Dynamic Function
int ToggleBit( UINT No , int iPos1 , int iPos2 )
{
	int iMask = 0 , iMask1 = 0 , iMask2 = 0;
	int iResult = 0;

	if( (iPos1 <1) || (iPos1>32) || (iPos2<1) || (iPos2>32) )
	{
		return -1;
	}

	iMask1 = 0x00000001 << (iPos1 - 1);

	iMask2 = 0x00000001 << (iPos2 - 1);

	iMask = iMask1 | iMask2; 		

	iResult = iMask ^ No;

	return iResult;
}



/*	OUTPUT :

Enter The Number        :137
Enter Bit Position      :7
Enter Bit Position      :10
Modified Number after Toggling 7th and 10th bit         :713.


Enter The Number        :137
Enter Bit Position      :2
Enter Bit Position      :3
Modified Number after Toggling 2th and 3th bit  :143.


*/



