//////////////////////////////////////////////////////////////
//
//		Write a program which accept one number and one Bit position
//		 from user and toggle that bit position of that number. Return modified number.
//		Input : 137
//		Bit : 7
//		Output : 201
//
//////////////////////////////////////////////////////////////

//Header
#include<stdio.h>

typedef unsigned int UINT;		/* Unsigned integer*/

//Prototype
int ToggleBit( UINT , int);

//Entry-Point Function
int main()
{
	UINT uValue = 0;
	int iBit = 0;
	int iRet = 0;

	printf("Enter The Number	:");
	scanf("%d",&uValue);

	printf("Enter The Bit Position	:");
	scanf("%d",&iBit);

	iRet = ToggleBit( uValue ,iBit );

	printf("Modified Number after toggle	:%d.\n",iRet);

	return 0;

}


// Function
int ToggleBit( UINT No , int iPos)
{
	int iMask = 0;
	int iResult = 0;

	if( (iPos1 <1) || (iPos1>32) )
	{
		return -1;
	}

	iMask = 0x00000001 << (iPos - 1); 		

	iResult = iMask ^ No;

	return iResult;
}



/*	OUTPUT :

Enter The Number        :137
Enter The Bit Position  :7
Modified Number after toggle    :201.

Enter The Number        :73
Enter The Bit Position  :9
Modified Number after toggle    :329.

Enter The Number        :73
Enter The Bit Position  :7
Modified Number after toggle    :9.

Enter The Number        :15
Enter The Bit Position  :4
Modified Number after toggle    :7.


*/



