///////////////////////////////////////////////////////////////
//
//	Write a program which prints alternate numbers from 1 to 100 in
//	recursive manner.
//	Output : 1 3 5 7 9 11 …………..
//
///////////////////////////////////////////////////////////////

//Header
#include<stdio.h>

//Prototype
int AlternateR( int );

//Driver Function
int main()
{
	int iValue = 0;

	printf("Enter the Number   :");
	scanf("%d",&iValue);

	AlternateR( iValue );

	return 0;

}

//Function
int AlternateR( int iNo)
{
	static int i = 1;

	if( iNo < 0)		//Updater
	{
		iNo = -iNo;
	}

		if( i <= iNo)
		{
			printf("%3d",i);

			i = i + 2;
			
			AlternateR( iNo );
		}

}

/* OUTPUT : 

Enter the Number   :50
  1  3  5  7  9 11 13 15 17 19 21 23 25 27 29 31 33 35 37 39 41 43 45 47 49

*/