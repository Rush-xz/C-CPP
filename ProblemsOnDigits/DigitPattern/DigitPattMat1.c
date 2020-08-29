///////////////////////////////////////////////////////////////////
//
//		Write a program which accept number from user and display below pattern.
//		Input : 7846
//		Output : 6 4 8 7
//				 6 4 8 7
//				 6 4 8 7
//				 6 4 8 7
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

	int i = 0 , j = 0;
	int iDigit = 0 , iSize = 0;
	int iNum = iNo;

	while(iNo != 0)
	{
		iDigit = iNo % 10;

		iSize++;

		iNo = iNo / 10;
	}

	iNo = iNum;
	for( i=1; i<=iSize; ++i)
	{
		for( j=1; j<=iSize && iNo != 0; ++j)
		{
			iDigit = iNo % 10;

			printf("%d\t",iDigit);

			iNo = iNo / 10;
		}

		printf("\n");
		iNo = iNum;
	}

}


/*Output:
	
Enter number    :7846
6       4       8       7
6       4       8       7
6       4       8       7
6       4       8       7

Enter number    :54697
7       9       6       4       5
7       9       6       4       5
7       9       6       4       5
7       9       6       4       5
7       9       6       4       5

*/