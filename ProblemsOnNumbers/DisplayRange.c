///////////////////////////////////////////////////////////////////////
//
//      Write a program which accept range from user and display all 
//      numbers in between that range.
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
		if( iStart > iEnd )
		{
			printf("Invalid Range.");
			return ;
		}

	printf("Range From %d to %d.\n",iStart , iEnd);
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
23
24
25
26
27
28
29
30
31
32
33
34

Enter the Starting Number of range :
-10
Enter the Ending Number of range :
2
Range From -10 to 2.
-10
-9
-8
-7
-6
-5
-4
-3
-2
-1
0
1
2


Enter the Starting Number of range :
92
Enter the Ending Number of range :
15
Invalid Range.

*/