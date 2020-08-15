///////////////////////////////////////////////////////////////////////
//
//      Write a program which accept range from user and display all 
//		even numbers in between that range.
//
///////////////////////////////////////////////////////////////////////


//Header
#include<stdio.h>

//Prototype
void Range( int , int );

//Entry-Point Function
int main()
{
	int iValue1 = 0, iValue2 = 0;

	printf("Enter the Starting Number of range :\n");
	scanf("%d",&iValue1);

	printf("Enter the Ending Number of range :\n");
	scanf("%d",&iValue2);

	Range( iValue1 , iValue2);

	return 0;

}


//Function
void Range( int iStart, int iEnd)
{

		if( iStart > iEnd )				//Filter
		{
			printf("Invalid Range.");
			return ;
		}

	printf("Even Number Range From %d to %d.\n",iStart , iEnd);

	for( iStart; iStart<=iEnd; iStart++)
	{		
		if( (iStart % 2) == 0 ) 
		printf("%d\n",iStart);
	}
	
}


/* Output

Enter the Starting Number of range :
23
Enter the Ending Number of range :
34
Range From 23 to 34.
24
26
28
30
32
34


*/