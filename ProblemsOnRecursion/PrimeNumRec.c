///////////////////////////////////////////////////////////////
//
//	Write a program which accept range from user and print all
//  prime numbers in that range in recursive manner.
//
///////////////////////////////////////////////////////////////

//Header
#include<stdio.h>

//Prototype
void PrimeNumR( int , int );

//Driver Function
int main()
{
	int iValue1 = 0 , iValue2 = 0;

	printf("Enter the Range.\n");

	printf("Enter the Starting Number   :");
	scanf("%d",&iValue1);

	printf("Enter the Starting Number   :");
	scanf("%d",&iValue2);

	PrimeNumR( iValue1 , iValue2 );

	return 0;

}

//Function
void PrimeNumR( int Start , int End)
{
	int i = 2;

	if( Start < 0)		//Updater
	{
		Start = -Start;
	}

	if( End < 0)		//Updater
	{
		End = -End;
	}


		if( Start <= End )
		{
			Start++;
			PrimeNumR( Start , End );
		}

}


void Prime( Start )
{
	static int i = 1;

			if( i<Start)
			{
				if( Start % i == 0)
					break;
				++i;
			}

			if( i == Start)
				printf("%d ",Start);

}

/* OUTPUT : 

Enter the Range.
Enter the Starting Number   :15
Enter the Starting Number   :25
17 19 23

Enter the Range.
Enter the Starting Number   :1
Enter the Starting Number   :100
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97


*/