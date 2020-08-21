//////////////////////////////////////////////////////////////////////////
//
//		Accept Character from user and check whether it is alphabet or not
//		(A-Z a-z).
//		Input : F
//		Output : TRUE
//		Input : &
//		Output : FALSE
//
///////////////////////////////////////////////////////////////////////////

//Header
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;


//Prototype
BOOL ChkAlpha( char );

//Entry-Point Function
int main()
{
	char cValue = '\0';
	BOOL bRet = FALSE;

	printf("Enter the Character	: ");
	scanf("%c",&cValue);

	bRet = ChkAlpha( cValue );

	if( bRet == TRUE )
	{
		printf("It is Alphabet.\n");
	}
	else
	{
		printf("It is not Alphabet.\n");
	}

	return 0;
}

//Function
BOOL ChkAlpha( char ch)
{
	if( ((ch>='A') && (ch<='Z')) || ((ch>='a') && (ch<='z')) )
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
It is Alphabet.

Enter the Character     : A
It is Alphabet.

Enter the Character     : [
It is not Alphabet.

Enter the Character     : /
It is not Alphabet.


*/