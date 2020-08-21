//////////////////////////////////////////////////////////////////////////
//
//		Accept Character from user and check whether it is digit or not
//		(0-9).
//		Input : 7
//		Output : TRUE
//		Input : d
//		Output : FALSE
//
///////////////////////////////////////////////////////////////////////////

//Header
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;


//Prototype
BOOL ChkDigit( char );

//Entry-Point Function
int main()
{
	char cValue = '\0';
	BOOL bRet = FALSE;

	printf("Enter the Character	: ");
	scanf("%c",&cValue);

	bRet = ChkDigit( cValue );

	if( bRet == TRUE )
	{
		printf("It is Digit.\n");
	}
	else
	{
		printf("It is not a Digit.\n");
	}

	return 0;
}

//Function
BOOL ChkDigit( char ch)
{
	if( (ch>='0') && (ch<='9') )
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}


/* OUTPUT :

Enter the Character     : 9
It is Digit.

Enter the Character     : c
It is not a Digit.

*/