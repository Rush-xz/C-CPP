///////////////////////////////////////////////////////////////
//
//	Write a program which prints following pattern in recursive
//  manner.Accept number of rows from user.
//		*
//		* *
//		* * *
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
	static int j = 0;

	if( iRow < 0)		//Updater
	{
		iRow = -iRow;
	}

		if( iRow != 0)
		{
			++j;
			for( i=1; i<=j; ++i)
				printf("*  ");
			printf("\n");
			
			--iRow;			
			Pattern( iRow );
		}

}

/* OUTPUT : 

Enter the Number of Rows   :5
*
*  *
*  *  *
*  *  *  *
*  *  *  *  *

Enter the Number of Rows   :6
*
*  *
*  *  *
*  *  *  *
*  *  *  *  *
*  *  *  *  *  *

Enter the Number of Rows   :3
*
*  *
*  *  *


*/