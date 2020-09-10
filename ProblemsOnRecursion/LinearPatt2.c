	///////////////////////////////////////////////////////////////
	//
	//	Write a recursive program which display below pattern.
	//	Output : 1 2 3 4 5	
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

	}

	//Function
	void DisplayR( int iNo)
	{
		static int i = 1;

			if( i <= iNo)
			{
				printf("%d  ",i);
					i++;
				DisplayR( iNo );
			}

	}

	/* OUTPUT : 

	Enter the Number.
	5
	1  2  3  4  5


	Enter the Number.
	9
	1  2  3  4  5  6  7  8  9

	*/