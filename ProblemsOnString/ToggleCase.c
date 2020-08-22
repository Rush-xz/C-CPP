////////////////////////////////////////////////////////////////////////////
//
//		Write a program which accept string from user and toggle the case.
//		Input : “Marvellous Multi OS”
//		Output : mARVELLOUS mULTI os
//
////////////////////////////////////////////////////////////////////////////

//Header
#include<stdio.h>
#define Diff 32 	/* ASCII table difference between upper case to lower case */

//Prototype
void StrUprx( char *);

//Entry-Point Function
int main()
{
	char Arr[20];

	printf("Enter the string	:");
	scanf("%[^'\n']s",Arr);

	StrUprx( Arr );

	return 0;
}


//Function
void StrUprx( char *str )
{

	if( str == NULL )		//Filter
	{
		return;
	}


	printf("Case Toggled	:");
	while( *str != '\0')
	{

		if( ( *str >='a') && (*str<='z') )		//Converted into Upper case only which contain Lower case
			*str = *str - Diff;
		else if( ( *str >='A') && (*str<='Z') )
			*str = *str + Diff;

		printf("%c",*str);

		str++;
	}

}


/* OUTPUT : 

Enter the string        :Marvellous Multi OS
Case Toggled    :mARVELLOUS mULTI os

*/















