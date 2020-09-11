///////////////////////////////////////////////////////////////
//
//	Write a program which prints following pattern in recursive
//  manner.Accept number of rows from user.
//		1 2 3
//		4 5 6
//		7 8 9
//
///////////////////////////////////////////////////////////////

//Header
#include<stdio.h>

//Prototype
int Pattern( int );

//Driver Function
int main()
{
	int iValue = 0;

	printf("Enter the Number of Rows   :");
	scanf("%d",&iValue);

	Pattern( iValue );

	return 0;

}

//Function
int Pattern( int iRow)
{
	int i = 0;
	static int k = 1;
	static int j = 1;

	if( iRow < 0)		//Updater
	{
		iRow = -iRow;
	}

		if( j<=iRow)
		{
			for( i=1; i<=iRow; ++i , ++k)
				printf("%d   ",k);
			printf("\n");
			
			j++;			
			Pattern( iRow );
		}

}

/* OUTPUT : 

Enter the Number of Rows   :3
1   2   3
4   5   6
7   8   9

*/