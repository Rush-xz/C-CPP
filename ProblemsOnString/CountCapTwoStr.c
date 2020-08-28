////////////////////////////////////////////////////////////////////
//
//		Write a program which accept two strings from user and display
//		count of Capital characters from both the strings.
//		Input : “MarvelloUS”
//				“InfoSystEMs”
//		Output : 3 4
//
////////////////////////////////////////////////////////////////////

//Header
#include<stdio.h>

//Prototype
void  CountCap(char * , char *);


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

	CountCap( Arr , Brr );

	return 0;
}

//Function
void CountCap( char *str1 , char *str2 )
{
	int iLen1 = 0, iLen2 = 0;

	if( (str1 == NULL) || (str2 == NULL) )		//Filter
	{
		return;
	}

	while( *str1 != '\0')
	{
		if( (*str1>='A') && (*str1<='Z') )
			iLen1++;

		++str1;
	}

	while( *str2 != '\0')
	{
		if( (*str2>='A') && (*str2<='Z') )
			iLen2++;

		++str2;
	}

	printf("Count of Capital Letters from both strings are	:%d%5d.\n",iLen1,iLen2);
	
}


/* OUTPUT :

Enter The string        :MarvelloUS
Enter The string        :InfoSystEMs
Count of Capital Letters from both strings are  :3    4.

Enter The string        :RuSHiKesH
Enter The string        :GODaSe
Count of Capital Letters from both strings are  :5    4.

*/