/////////////////////////////////////////////////////////////
//
//      Write a program which accept number from user and print 
//		that number of $ & * on screen
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

	if( iNo < 0 )		//Filter
	{
		iNo = -iNo;
	}

	while( iNo !=0 )
	{
		printf("$\t*\t");

		--iNo;
	}
}



/*  Output : 
Enter number  :
5
$       *       $       *       $       *       $       *       $       *

*/