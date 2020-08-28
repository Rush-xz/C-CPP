////////////////////////////////////////////////////////////////////
//
//		Write a program which accept two strings from user and check
//		whether both the strings are equal or not without considering its
//		case.
//		Input : “MarvelloUS”
//				“MARveLLous”
//		Output : TRUE
//
////////////////////////////////////////////////////////////////////

//Header
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

//Prototype
BOOL  StrCmpX(char * , char *);


//Entry-Point Function
int main()
{
	char Arr[20];
	char Brr[20];
	BOOL bRet = FALSE;

	printf("Enter The First string	:");
	scanf("%[^'\n']s",Arr);

	getchar();

	printf("Enter The Second string	:");
	scanf("%[^'\n']s",Brr);

	bRet = StrCmpX( Arr , Brr );

	if( bRet == TRUE )
		printf("Both Strings are Equal.\n");
	else
		printf("Both Strings are not Equal.\n");

	return 0;
}

//Function
BOOL StrCmpX( char *str1 , char *str2 )
{

	if( (str1 == NULL) || (str2 == NULL) )		//Filter
	{
		return FALSE;
	}

	while( *str1 != '\0' && *str2 != '\0' )
	{
		if( (*str1>='A') && (*str1<='Z') )
		{
			if( ( (*str2>='a') && (*str2<='z') ) )
			{
				if( *str1 != *str2 - 32)
					break;
			}
		}
		else if( (*str1>='a') && (*str1<='z') )
		{

			if( ( (*str2>='A') && (*str2<='Z') ) )
			{
				if( *str1 != *str2 + 32)
					break;
			}

		}


		++str1;
		++str2;
	}


	if( *str1 == '\0' && *str2 == '\0' )
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
	
}


/* OUTPUT :

Enter The First string  :MarvelloUS
Enter The Second string :MARvellous
Both Strings are Equal.

C:\Users\HP\Documents\GitHub\C-CPP\ProblemsOnString>myexe
Enter The First string  :RUShiKesH
Enter The Second string :rUShIKeSh
Both Strings are Equal.

*/