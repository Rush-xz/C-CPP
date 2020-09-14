///////////////////////////////////////////////////////////////
//
//	Write a program which prints following pattern in recursive
//  manner.Accept number of rows from user.
//		1 2 3
//		4 5 6
//		7 8 9
//
///////////////////////////////////////////////////////////////

//Header
#include<stdio.h>

//Prototype
void PatternRow( int );
void PatternCol( int , int);

//Driver Function
int main()
{
	int iValue = 0;

	printf("Enter the Number   :");
	scanf("%d",&iValue);

	PatternRow( iValue );

	return 0;

}

////////////////////////////////////////////////////////////
//
//  Name        :PatternRow
//  Input       :int
//  Returns     :void
//  Description :Display Pattern on console
//  Author      :Rushikesh Godase
//  Date        :9 Sep 2020
//
////////////////////////////////////////////////////////////
void PatternRow( int iNo )
{
	static int iRow = 1 ,iCol = 1;
	
	if( iRow <= iNo)
	{
		iCol = 1;

		PatternCol( iCol , iNo);

		printf("\n");

		iRow++;

		PatternRow(iNo);

	} 

}



////////////////////////////////////////////////////////////
//
//  Name        :PatternCol
//  Input       :int
//  Returns     :void
//  Description :Display Pattern on console using recursion
//					helper function for PatternRow
//  Author      :Rushikesh Godase
//  Date        :9 Sep 2020
//
////////////////////////////////////////////////////////////
void PatternCol( int iCol , int iNo)
{
	static int iCnt = 1;

	if( iCol <= iNo)
	{
		printf("%d  ",iCnt);

		iCol++;
		iCnt++;

		PatternCol( iCol , iNo);
	}
}


/* OUTPUT : 

Enter the Number of Rows   :3
1   2   3
4   5   6
7   8   9

*/