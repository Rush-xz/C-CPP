/////////////////////////////////////////////////////////////
//
//		Accept amount in US dollar and return its corresponding value in Indian currency.
//		Consider 1$ as 70 rupees.
//
//		Input : 10
//		Output : 700
//		Input : 3
//		Output : 270
//		
/////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>
#define OneDollarPriceInRupees 70  	/*1$ as 70 rupees.*/

//Prototype 
int DollarToINR( int );
				
//Entry-Point Function
int main()
{
    int iValue = 0, iRet = 0;

	printf("Enter number of USD :\n");
	scanf("%d",&iValue);

	iRet = DollarToINR(iValue);

	printf("Value in INR is %d",iRet);

	return 0;
}

//Function
int DollarToINR( int iNo)
{
	return (iNo * OneDollarPriceInRupees);
}



/*  Output : 
Enter number of USD :
70
Value in INR is 4900

Enter number of USD :
10
Value in INR is 700

Enter number of USD :
3
Value in INR is 210

Enter number of USD :
1200
Value in INR is 84000
*/