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
BOOL ChkCase( char );

//Entry-Point Function
int main()
{
	char cValue = '\0';
	BOOL bRet = FALSE;

	printf("Enter the Character	: ");
	scanf("%c",&cValue);

	bRet = ChkCase( cValue );

	if( bRet == TRUE )
	{
		printf("It is Small Case Character.\n");
	}
	else
	{
		printf("It is not a Small Case Character.\n");
	}

	return 0;
}

//Function
BOOL ChkCase( char ch)
{
	if( (ch>='a') && (ch<='z') )
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}


/* OUTPUT :

Enter the Character     : a
It is Small Case Character.


Enter the Character     : L
It is not a Small Case Character.

*/