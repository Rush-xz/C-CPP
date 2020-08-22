////////////////////////////////////////////////////////////////////////////
//
//		Write a program which accept string from user and convert it into
//		lower case.
//		Input : “Rushikesh Raju Godse”
//		Output : rushikesh raju godase
//
////////////////////////////////////////////////////////////////////////////

//Header
#include<stdio.h>
#define Diff 32 	/* ASCII table difference between upper case to lower case */

//Prototype
void Strlwrx( char *);

//Entry-Point Function
int main()
{
	char Arr[20];

	printf("Enter the string	:");
	scanf("%[^'\n']s",Arr);

	Strlwrx( Arr );

	return 0;
}


//Function
void Strlwrx( char *str )
{

	if( str == NULL )		//Filter
	{
		return ;
	}


	printf("Converted into lower case	:");
	while( *str != '\0')
	{

		if( ( *str >='A') && (*str<='Z') )		//Converted into lower case only which contain capital case
			*str = *str + Diff;

		printf("%c",*str);

		str++;
	}

}


/* OUTPUT : 

Enter the string        :Rushikesh Raju Godase
Converted into lower case       :rushikesh raju godase

*/















