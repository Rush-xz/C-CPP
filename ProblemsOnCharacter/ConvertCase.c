//////////////////////////////////////////////////////////////////////////
//
//		Accept character from user. If character is small display its
//		corresponding capital character, and if it small then display its
//		corresponding capital. In other cases display as it is.
//		Input : Q
//		Output : q
//		Input : m
//		Output : M
//		Input : 4
//		Output : 4
//		Input : %
//		Output : %
//
///////////////////////////////////////////////////////////////////////////

//Header
#include<stdio.h>
#define DIFFERENCE 32	/* Diff. between upper to lower case in ASCII table*/

//Prototype
void ConvertCase( char );

//Entry-Point Function
int main()
{
	char cValue = '\0';

	printf("Enter the Character	: ");
	scanf("%c",&cValue);

	ConvertCase( cValue );

	return 0;
}

//Function
void ConvertCase( char ch)
{
	if( (ch>='A') && (ch<='Z') )
	{
		printf("Converted into Lower Case :%2c.\n",ch+DIFFERENCE);	//Here you can use toLower().
	}
	else if( ( ch>='a') && (ch<='z') )
	{
		printf("Converted into Upper case :%2c.\n",ch-DIFFERENCE);	//Here you can use toUpper().
	}
	else
	{
		printf("Displayed as it is :%2c.\n",ch);
	}
}


/* OUTPUT :

Enter the Character     : A
Converted into Lower Case : a.

Enter the Character     : m
Converted into Upper case : M.

Enter the Character     : @
Displayed as it is : @.

Enter the Character     : 5
Displayed as it is : 5.

*/