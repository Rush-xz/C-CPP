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
	int i = 1;

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
			while( Start)
			
			Start++;
			PrimeNumR( Start , End );
		}

}

/* OUTPUT : 

Enter the Number   :50
  1  3  5  7  9 11 13 15 17 19 21 23 25 27 29 31 33 35 37 39 41 43 45 47 49

*/