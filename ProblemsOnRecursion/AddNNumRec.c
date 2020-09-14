///////////////////////////////////////////////////////////////
//
//	Write a program which accept n numbers from user and return
//  addition of that numbers in recursive manner. Value of n is accepted from user.
//
///////////////////////////////////////////////////////////////

//Header
#include<stdio.h>
#include<stdlib.h>

//Prototype
int Addition( int * , int );

//Driver Function
int main()
{
	int iValue = 0 , iRet = 0 , i = 0;
	int *Arr = NULL;

	printf("Enter Total Number   :");
	scanf("%d",&iValue);

	Arr = (int *)malloc(sizeof(int)*iValue);

	printf("Enter the Numbers :\n");
	for( i=0; i<iValue; i++)
		scanf("%d",&Arr[i]);

	iRet  = Addition( Arr , iValue );

	printf("Addition of the Numbers is :%d.\n",iRet);

	return 0;

}

////////////////////////////////////////////////////////////
//
//  Name        :Addition
//  Input       :int * , int
//  Returns     :int
//  Description :Computers addition of 'N' numbers
//  Author      :Rushikesh Godase
//  Date        :9 Sep 2020
//
////////////////////////////////////////////////////////////
int Addition( int *Arr , int iNo)
{
	static int iSum = 0;

	if( NULL == Arr)		//Updater
	{
		return -1;
	}

		if( iNo != 0)
		{
			
			iSum = iSum + *Arr; 
			
			--iNo;
			Addition( Arr+1 , iNo );
		}

	return iSum;	

}

/* OUTPUT : 

Enter Total Number   :3
Enter the Numbers :
5
6
4
Addition of the Numbers is :15.



Enter Total Number   :6
Enter the Numbers :
49
56
78
12
23
56
Addition of the Numbers is :274.


*/