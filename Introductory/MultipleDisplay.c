/////////////////////////////////////////////////////////////
//
//  Write a program which accept N and print first 5 multiples of N.
//
/////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//Prototype 
void MultipleDisplay( int , int);

//Entry-Point Function
int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter number  :");
    scanf("%3d",&iValue1);
		
	printf("\nHow many multiples you want of above number :");
    scanf("%3d",&iValue2);


    MultipleDisplay(iValue1 , iValue2);

    return 0;

}

//Function
void MultipleDisplay( int iNo , int iMultiples)
{
	int i=0;

	if( (iNo < 0) )	//Filter
	{
		iNo = -iNo;
	}

	if( (iMultiples < 0) )	//Filter
	{
		iMultiples = -iMultiples;
	}

	for( i=1; i<=iMultiples; i++)

		printf("%d\n",iNo*i);
}



/*  Output :

Enter number  :4

How many multiples you want of above number :5
4
8
12
16
20

Enter number  :9

How many multiples you want of above number :10
9
18
27
36
45
54
63
72
81
90

*/