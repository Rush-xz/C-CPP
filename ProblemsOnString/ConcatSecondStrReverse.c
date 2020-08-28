////////////////////////////////////////////////////////////////////
//
//		Write a program which accept two strings from user and concat
//		second string at the end of first string in reverse order.
//		Input : “Marvellous”
//				“Python”
//		Output : MarvellousnohtyP
//
////////////////////////////////////////////////////////////////////

//Header
#include<stdio.h>

//Prototype
void  ConcatReverse(char * , char *);


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

	ConcatReverse( Arr , Brr );

	printf("Modified string is 	:%s.\n",Arr);

	return 0;
}

//Function
void ConcatReverse( char *str1 , char *str2 )
{
	char *Temp = NULL;
	Temp = str2;

	if( (str1 == NULL) || (str2 == NULL) )		//Filter
	{
		return;
	}

	while(*str1 != '\0')
	{
		str1++;
	}

	while( *(str2+1) != '\0' )
	{
		str2++;
	}

	while( str2 != (Temp-2) )
	{
		*str1 = *str2;

		str1++;
		--str2;			
	}

	
}


/* OUTPUT :

Enter The First string  :Marvellous
Enter The Second string :Python
Modified string is      :MarvellousnohtyP.

Enter The First string  :Rushikesh
Enter The Second string :Godase
Modified string is      :RushikeshesadoG.

*/