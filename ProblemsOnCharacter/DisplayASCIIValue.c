//////////////////////////////////////////////////////////////////////////
//
//		Accept character from user and display its ASCII value in decimal,
//		octal and hexadecimal format.
//		Input : A
//		Output : Decimal 65
//				 Octal 0101
//				 Hexadecimal 0X41
//
///////////////////////////////////////////////////////////////////////////

//Header
#include<stdio.h>

//Prototype
void DisplayASCII( char );

//Entry-Point Function
int main()
{
	char cValue = '\0';

	printf("Enter the charater	:");
	scanf("%c",&cValue); 

	DisplayASCII( cValue );

	return 0;
}

//Function	
void DisplayASCII( char ch )
{

	printf("Decimal :%2d.\nHexadecimal :%2X.\noctal :%2o.\n",ch,ch,ch);

}


/*

Enter the charater      :A
Decimal :65.
Hexadecimal :41.
octal :101.

Enter the charater      :Z
Decimal :90.
Hexadecimal :5A.
octal :132.

Enter the charater      :a
Decimal :97.
Hexadecimal :61.
octal :141.

*/