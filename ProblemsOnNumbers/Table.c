/////////////////////////////////////////////////////////////
//
// Write a program which accept number from user and display its table.
//
/////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//Prototype 
void  Table( int );

//Entry-Point Function
int main()
{
    int iValue = 0 ;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;

}

//Function
void Table( int iNo)
{
	int iMult = 1;

	if( iNo < 0 )
	{
		iNo = -iNo;
	}

	for( iMult; iMult <= 10; iMult++)
	{
		printf("%4d\n",iNo*iMult);
	}

}



/*  Output : 
Enter number :
4
   4
   8
  12
  16
  20
  24
  28
  32
  36
  40

Enter number :
11
  11
  22
  33
  44
  55
  66
  77
  88
  99
 110

Enter number :
18
  18
  36
  54
  72
  90
 108
 126
 144
 162
 180
*/