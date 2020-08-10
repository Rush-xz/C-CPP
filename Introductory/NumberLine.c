/////////////////////////////////////////////////////////////
//
//     Write a program which accept number from user and print its numbers line.
//
/////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//Prototype 
void NumberLine( int );

//Entry-Point Function
int main()
{
    int iValue = 0;

    printf("Enter number  :");
    scanf("%3d",&iValue);

    NumberLine(iValue);

    return 0;

}

//Function
void NumberLine( int iNo)
{

	if( iNo < 0)	//Filter
	{
		iNo = -iNo;
	}

	int Start = -iNo;		//Here we assign -ve value in start


	while( Start != iNo+1)
	{
		printf("%4d",Start);

		Start++;
	}
}



/*  Output :

Enter number  :6
  -6  -5  -4  -3  -2  -1   0   1   2   3   4   5   6

Enter number  :8
  -8  -7  -6  -5  -4  -3  -2  -1   0   1   2   3   4   5   6   7   8

*/