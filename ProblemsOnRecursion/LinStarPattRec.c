///////////////////////////////////////////////////////////////
//
//	Write a recursive program which display below pattern.
//	Output : * * * * *
//
///////////////////////////////////////////////////////////////

//Header
#include<stdio.h>

//Prototype
void DisplayR( int );

//Driver Function
int main()
{
	int iValue = 0;

	printf("Enter the Number.\n");
	scanf("%d",&iValue);

	DisplayR( iValue );

	return 0;

}

//Function
void DisplayR( int iNo)
{
	static int i = 1;

		if( i <= iNo)
		{
			printf("*  ");
				i++;
			DisplayR( iNo );
		}

}

/* OUTPUT :

Enter the Number.
5
*  *  *  *  *


Enter the Number.
8
*  *  *  *  *  *  *  *

*/