/////////////////////////////////////////////////////////////
//
//  Write a program which accept number from user and display below pattern.
// Input : 5
// Output : * * * * * # # # # #
// Input : 6
// Output : * * * * * * # # # # # # #
// Input : -5
// Output : * * * * * # # # # #
// Input : 2
// Output : * * # #
//
/////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//Prototype 
void Pattern( int );

//Entry-Point Function
int main()
{
    int iValue = 0;

    printf("Enter number  :\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;

}

//Function
void Pattern( int iNo)
{
	int i=0;

	if( iNo < 0 )		//Filter
	{
		iNo = -iNo;
	}

	for( i=1; i <= iNo * 2; i++)
	{

		if( i <= ( iNo*2 / 2) )

			printf("*\t");

		else

			printf("#\t");

	}
}



/*  Output : 
Enter number  :
6
*       *       *       *       *       *       #       #       #       #       #
#

Enter number  :
6
*       *       *       *       *       *       #       #       #       #       #       #

Enter number  :
5
*       *       *       *       *       #       #       #       #       #

Enter number  :
-5
*       *       *       *       *       #       #       #       #       #

*/