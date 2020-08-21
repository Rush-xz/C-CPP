//////////////////////////////////////////////////////////////////////////
//
//		Accept character from user. If it is capital then display all the
//		characters from the input characters till Z. If input character is small
//		then print all the characters in reverse order till a. In other cases
//		return directly.
//		Input : Q
//		Output : Q R S T U V W X Y Z
//		Input : m
//		Output : m l k j i h g f e d c b a
//		Input : 8
//		Output : 8
//
///////////////////////////////////////////////////////////////////////////

//Header
#include<stdio.h>

//Prototype
void DisplayChar( char );

//Entry-Point Function
int main()
{
	char cValue = '\0';

	printf("Enter the Character	: ");
	scanf("%c",&cValue);

	DisplayChar( cValue );

	return 0;
}

//Function
void DisplayChar( char ch)
{
	if( (ch>='A') && (ch<='Z') )
	{
		while( ch <= 'Z')
		{
			printf("%c\t",ch);
			ch++;
		}
	}
	else if( ( ch>='a') && (ch<='z') )
	{
		while( ch >= 'a')
		{
			printf("%c\t",ch);
			ch--;
		}
	}
	else
	{
		printf("Displayed as it is :%2c.\n",ch);
	}
}


/* OUTPUT :

Enter the Character     : Q
Q       R       S       T       U       V       W       X       Y       Z

Enter the Character     : m
m       l       k       j       i       h       g       f       e       d       c
b       a

Enter the Character     : 8
Displayed as it is : 8.

*/