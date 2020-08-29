///////////////////////////////////////////////////////////////////
//
//		Write a program which number from user and display below pattern.
//		Input : 7846
//		Output : 7
//				 7 8
//				 7 8 4
//				 7 8 4 6
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

	int i = 0 , j = 0 , k = 0 , z=0;
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
	for( i=1; i<=iSize; ++i)
	{
		for( j=1; j<=iSize; ++j , --k)
		{
			if( i>=j)
				printf("%d\t",Arr[k]);

		}

		k=z;
		printf("\n");
	}

}


/*Output:
	
Enter number    :7846
7
7       8
7       8       4
7       8       4       6

Enter number    :618913
6
6       1
6       1       8
6       1       8       9
6       1       8       9       1
6       1       8       9       1       3

*/