//////////////////////////////////////////////////////////////
//
//		Write a program which accept one number from user and range of
//		positions from user. Toggle all bits from that range.
//		Input : 897 9 13
//		Toggle all bits from position 9 to 13 of input number ie 879.
//
//////////////////////////////////////////////////////////////

//Header
#include<stdio.h>

typedef unsigned int UINT;		/* Unsigned integer*/

//Prototype
int ToggleBitRange( UINT , int , int);

//Entry-Point Function
int main()
{
	UINT uValue = 0;
	int iStart = 0 , iEnd = 0;
	int iRet =0;

	printf("Enter The Number	:");
	scanf("%d",&uValue);

	printf("Enter Starting Bit Position	:");
	scanf("%d",&iStart);

	printf("Enter Starting Bit Position	:");
	scanf("%d",&iEnd);

	iRet = ToggleBitRange( uValue , iStart ,iEnd);

	printf("Modified Number after Toggle	:%d.\n", iRet);

	return 0;

}


// Function
int ToggleBitRange( UINT No ,int iStart ,int iEnd )
{
	int iMask = 0 , iMask1 =0 ,iMask2 = 0;
	int iResult = 0;

	if( (iStart>iEnd) || (iStart<1) || (iStart>32) || (iEnd<0) || (iEnd>32) )
	{
		return No;
	}

	iMask1 = 0xFFFFFFFF << (iStart - 1);

	iMask2 = 0xFFFFFFFF >> (32 - iEnd);

	iMask = iMask1 & iMask2;
	
	iResult = iMask ^ No;

	return iResult;
}

//int ToggleBitRange( UINT No ,int iStart ,int iEnd )
/*{
	return ( No ^ (0xFFFFFFFF << (iStart-1)) & (0xFFFFFFFF >> (32-iEnd)) );
}
*/

/*	OUTPUT :

Enter The Number        :897
Enter Starting Bit Position     :9
Enter Starting Bit Position     :13
Modified Number after Toggle    :7297.

Enter The Number        :15
Enter Starting Bit Position     :2
Enter Starting Bit Position     :3
Modified Number after Toggle    :9.

Enter The Number        :879
Enter Starting Bit Position     :9
Enter Starting Bit Position     :13
Modified Number after Toggle    :7279.

*/



