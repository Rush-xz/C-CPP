//////////////////////////////////////////////////////////////////////////
//
//		Accept Character from user and check whether it is special symbol
//		or not (!, @, #, $, %, ^, &, *).
//		Input : %
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
BOOL ChkSpecial( char );

//Entry-Point Function
int main()
{
	char cValue = '\0';
	BOOL bRet = FALSE;

	printf("Enter the Character	: ");
	scanf("%c",&cValue);

	bRet = ChkSpecial( cValue );

	if( bRet == TRUE )
	{
		printf("It is Special Symbol.\n");
	}
	else
	{
		printf("It is not Special Symbol.\n");
	}

	return 0;
}

//Function
BOOL ChkSpecial( char ch)
{
	if( ((ch>='A') && (ch<='Z')) || ((ch>='a') && (ch<='z')) || ((ch >='0') && (ch<='9')) ) 
	{
		return FALSE;
	}
	else if( (ch>='!') && (ch<='~') )
	{
		return TRUE;
	}

}


/* OUTPUT :

Enter the Character     : A
It is not Special Symbol.

Enter the Character     : \
It is Special Symbol.

Enter the Character     : $
It is Special Symbol.

Enter the Character     : |
It is Special Symbol.

Enter the Character     : 6
It is not Special Symbol.


*/