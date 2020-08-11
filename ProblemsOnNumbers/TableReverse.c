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
	int iMult = 10;

	if( iNo < 0 )
	{
		iNo = -iNo;
	}

	for( iMult; iMult > 0 ; --iMult)
	{
		printf("%4d\n",iNo*iMult);
	}

}



/*  Output : 
Enter number :
15
 150
 135
 120
 105
  90
  75
  60
  45
  30
  15

Enter number :
9
  90
  81
  72
  63
  54
  45
  36
  27
  18
   9
*/