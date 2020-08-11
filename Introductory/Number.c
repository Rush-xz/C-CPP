/////////////////////////////////////////////////////////////
//
//      Write a program which accept number from user and if 
//		number is less than 50 then print small , if it is 
//		greater than 50 and less than 100 then print medium, 
//		if it is greater than 100 then print large
//
/////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//Prototype 
void Number( int );

//Entry-Point Function
int main()
{
    int iValue = 0;

    printf("Enter number  :");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;

}

//Function
void Number( int iNo)
{

	if( iNo < 50)
	{
		printf("Small.\n");
	}
	else if( (iNo >= 50) && ( iNo < 100) )
	{
		printf("Medium.\n");
	}
	else
	{   
		printf("Large.\n");
	}


}



/*  Output : 
Enter number  :50
Medium.

Enter number  :900
Large.

Enter number  :49
Small.
*/