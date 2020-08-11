/////////////////////////////////////////////////////////////
//
//  Accept single digit number from user and print it into word.
//
/////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//Prototype 
void Word( int );

//Entry-Point Function
int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Word(iValue);

    return 0;

}

//Function
void Word( int iNo)
{

	if( iNo < 0 )
	{
		iNo = -iNo;
	}

	if( iNo == 0 )
	{
		printf("Zero.\n");
	}
	else if( iNo == 1 )
	{
		printf("One.\n");
	}
	else if( iNo == 2)
	{
		printf("Two.\n");
	}
	else if( iNo == 3 )
	{
		printf("Three.\n");
	}
	else if( iNo == 4 )
	{
		printf("Four.\n");
	} 
	else if( iNo == 5)
	{
		printf("Five.\n");
	}
	else if( iNo == 6)
	{
		printf("Six.\n");
	}
	else if( iNo == 7 )
	{
		printf("Seven.\n");
	} 
	else if( iNo == 8)
	{
		printf("Eight.\n");
	}
	else if( iNo == 9)
	{
		printf("Nine.\n");
	}
	else
	{
		printf("Invalid Number.\n");
	}

}



/*  Output : 
Enter number  :5
Five.

Enter number  :90
Invalid Number.

Enter number  :-2
Two.
*/