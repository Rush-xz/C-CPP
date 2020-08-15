///////////////////////////////////////////////////////////////////////
//
//     Write a program which accept range from user and return addition
//		 of all numbers in between that range. (Range should contains 
//		positive numbers only)
//
///////////////////////////////////////////////////////////////////////


//Header
#include<stdio.h>

//Prototype
int  Range( int , int );

//Entry-Point Function
int main()
{
	int iValue1 = 0, iValue2 = 0;
	int iRet = 0;

	printf("Enter the Starting Number of range :\n");
	scanf("%d",&iValue1);

	printf("Enter the Ending Number of range :\n");
	scanf("%d",&iValue2);

	iRet = Range( iValue1 , iValue2);

	printf("Addition of Numbers between range :%d\n",iRet);

	return 0;

}


//Function
int  Range( int iStart, int iEnd)
{
	int iSum = 0;

		if( iStart > iEnd || iStart < 0 )				//Filter
		{
			printf("Invalid Range.");
			return -1;
		}


	for( iStart; iStart<=iEnd; iStart++)
	{		
		iSum += iStart;
	}

	return iSum;
	
}


/* Output

Enter the Starting Number of range :
23
Enter the Ending Number of range :
34
Addition of Numbers Range From 23 to 34.
Addition of Numbers between range :342


*/