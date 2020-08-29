///////////////////////////////////////////////////////////////////
//
//		Write a program which number from user and display below pattern.
//		Input : 7846
//		Output : * * * * * * *
//				 * * * * * * * *
//				 * * * *
//				 * * * * * *
//
////////////////////////////////////////////////////////////////////

//Header
#include<stdio.h>

//Prototype
void Pattern( int );

//Entry-Point function
int main()
{
	int iValue1 = 0;

	printf("Enter number	:");
	scanf("%d",&iValue1);

	Pattern(iValue1);


	return 0;
}


//Function
void Pattern( int iNo )
{

	int i = 0 , j = 0 , k = 0 ;
	int iDigit = 0 , iSize = 0;
	int Arr[10];

	while(iNo != 0)
	{
		iDigit = iNo % 10;

		Arr[k] = iDigit;
		iSize++;

		++k;
		iNo = iNo / 10;
	}--k;


	z = k;
	for( i=1; i<=iSize; ++i , --k)
	{
		for( j=1; j<=Arr[k]; ++j )
		{

			printf("*\t");

		}

		printf("\n");
	}

}


/*Output:
	
Enter number    :7846
*       *       *       *       *       *       *
*       *       *       *       *       *       *       *
*       *       *       *
*       *       *       *       *       *

C:\Users\HP\Documents\GitHub\C-CPP\ProblemsOnDigits\DigitPattern>myexe
Enter number    :89456
*       *       *       *       *       *       *       *
*       *       *       *       *       *       *       *       *
*       *       *       *
*       *       *       *       *
*       *       *       *       *       *

*/