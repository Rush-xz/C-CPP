//////////////////////////////////////////////////////////////////////////
//
//		Accept Character from user and check whether it is capital or not
//		(A-Z).
//		Input : F
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
BOOL ChkCapital( char );

//Entry-Point Function
int main()
{
	char cValue = '\0';
	BOOL bRet = FALSE;

	printf("Enter the Character	: ");
	scanf("%c",&cValue);

	bRet = ChkCapital( cValue );

	if( bRet == TRUE )
	{
		printf("It is Capital Alphabet.\n");
	}
	else
	{
		printf("It is not Capital Alphabet.\n");
	}

	return 0;
}

//Function
BOOL ChkCapital( char ch)
{
	if( (ch>='A') && (ch<='Z') )
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
It is not Capital Alphabet.

Enter the Character     : X
It is Capital Alphabet.

Enter the Character     : $
It is not Capital Alphabet.


*/