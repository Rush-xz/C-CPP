////////////////////////////////////////////////////////////////////
//
//		Write a program which accept two strings from user and display
//		length of both the strings.
//		Input : “Marvellous”
//				“Infosystems”
//		Output : 10 11
//
////////////////////////////////////////////////////////////////////

//Header
#include<stdio.h>

//Prototype
void  Strlen(char * , char *);


//Entry-Point Function
int main()
{
	char Arr[20];
	char Brr[20];

	printf("Enter The string	:");
	scanf("%[^'\n']s",Arr);

	getchar();

	printf("Enter The string	:");
	scanf("%[^'\n']s",Brr);

	Strlen( Arr , Brr );

	return 0;
}

//Function
void Strlen( char *str1 , char *str2 )
{
	int iLen1 = 0, iLen2 = 0;

	if( (str1 == NULL) || (str2 == NULL) )		//Filter
	{
		return;
	}

	while( *str1 != '\0')
	{
		iLen1++;
		++str1;
	}

	while( *str2 != '\0')
	{
		iLen2++;
		++str2;
	}

	printf("Length of both strings are	:%d%5d.\n",iLen1,iLen2);
	
}


/* OUTPUT :

Enter The string        :Marvellous
Enter The string        :Infosystems
Length of both strings are      :10   11.

Enter The string        :Rushikesh
Enter The string        :Godase
Length of both strings are      :9    6.

*/