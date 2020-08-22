////////////////////////////////////////////////////////////////////////////
//
//		Write a program which accept string from user and display only
//		digits from that string.
//		Input : “marve89llous121”
//		Output : 89121
//		Input : “Demo”
//		Output :
////////////////////////////////////////////////////////////////////////////

//Header
#include<stdio.h>

//Prototype
void DisplayDigit( char *);

//Entry-Point Function
int main()
{
	char Arr[20];

	printf("Enter the string	:");
	scanf("%[^'\n']s",Arr);

	DisplayDigit( Arr );

	return 0;
}


//Function
void DisplayDigit( char *str )
{

	if( str == NULL )		//Filter
	{
		return;
	}


	printf("Display only Digits from string	:");
	while( *str != '\0')
	{
		if( (*str>='0') && ( *str <= '9') )
			printf("%c",*str);

		str++;
	}

}


/* OUTPUT : 

Enter the string        :marve89llous121
Display only Digits from string :89121

Enter the string        :Impeccable
Display only Digits from string :

*/















