///////////////////////////////////////////////////////////////
//
//	Write a program which accept range from user and print all
//	 perfect numbers in that range in recursive manner.
//
///////////////////////////////////////////////////////////////

//Header
#include<stdio.h>

//Prototype
void Range( int , int);
void PerfectNum( int , int* ,  int);

//Driver Function
int main()
{
	int iValue1 = 0 , iValue2 = 0;


	printf("Enter the Range.\n");
	printf("Enter the Starting Number of range   :");
	scanf("%d",&iValue1);

	printf("Enter the Ending Number of range   :");
	scanf("%d",&iValue2);

	Range( iValue1 , iValue2 );

	return 0;

}


////////////////////////////////////////////////////////////
//
//  Name        :Range
//  Input       :int
//  Returns     :int
//  Description :Helper Function for PerfectNum function
//  Author      :Rushikesh Godase
//  Date        :9 Sep 2020
//
////////////////////////////////////////////////////////////
void Range( int Start , int End)
{
	 int iSum = 0;

	if( Start <= End)
	{
		PerfectNum(Start , &iSum ,Start/2 );

		if( iSum == Start)
			printf("%d\t",Start);

		Start++;
		Range(Start , End);
	}

}


////////////////////////////////////////////////////////////
//
//  Name        :PerfectNum
//  Input       :int
//  Returns     :int
//  Description :Display Perfect Numbers from given range using recursion
//  Author      :Rushikesh Godase
//  Date        :9 Sep 2020
//
////////////////////////////////////////////////////////////
void PerfectNum( int iNo , int* iSum , int j)
{
		if( j > 0 )
		{
			if( iNo % j == 0)
			{
				*iSum = *iSum + j;
			}

			j--;
			PerfectNum( iNo , iSum ,  j );
		}

}

/* OUTPUT : 

Enter the Range.
Enter the Starting Number of range   :1
Enter the Ending Number of range   :9000
6       28      496     8128

*/