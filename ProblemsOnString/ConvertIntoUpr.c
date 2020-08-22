////////////////////////////////////////////////////////////////////////////
//
//		Write a program which accept string from user and convert it into
//		upper case.
//		Input : “Life is Beautifull”
//		Output : LIFE IS BEAUTIFULL
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


	printf("Converted into Upper case	:");
	while( *str != '\0')
	{

		if( ( *str >='a') && (*str<='z') )		//Converted into Upper case only which contain Lower case
			*str = *str - Diff;

		printf("%c",*str);

		str++;
	}

}


/* OUTPUT : 

Enter the string        :Life is Beautifull
Converted into Upper case       :LIFE IS BEAUTIFULL

*/















