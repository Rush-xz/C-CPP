////////////////////////////////////////////////////////////////////
//
//		Write a program which accept two strings from user and concat
//		alternate characters from second string at the end of first string.
//		Input : “Marvellous”
//				“Infosystems”
//		Output : MarvellousIfsses
//
////////////////////////////////////////////////////////////////////

//Header
#include<stdio.h>

//Prototype
void  ConcatAlternative(char * , char *);


//Entry-Point Function
int main()
{
	char Arr[20];
	char Brr[20];

	printf("Enter The First string	:");
	scanf("%[^'\n']s",Arr);

	getchar();

	printf("Enter The Second string	:");
	scanf("%[^'\n']s",Brr);

	ConcatAlternative( Arr , Brr );

	printf("Modified string is 	:%s.\n",Arr);

	return 0;
}

//Function
void ConcatAlternative( char *str1 , char *str2 )
{

	if( (str1 == NULL) || (str2 == NULL) )		//Filter
	{
		return;
	}

	while(*str1 != '\0')
	{
		str1++;
	}

	while(*str2 != '\0' )
	{
		*str1 = *str2;

		str1++;
		str2 = str2 + 2;			//For Alternative
	}

	
}


/* OUTPUT :

Enter The First string  :Rushikesh
Enter The Second string :Godase
Modified string is      :RushikeshGds.

C:\Users\HP\Documents\GitHub\C-CPP\ProblemsOnString>myexe
Enter The First string  :Marvellous
Enter The Second string :Infosystems
Modified string is      :MarvellousIfsses        .

*/