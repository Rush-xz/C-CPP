/////////////////////////////////////////////////////////////
//
//	Write a program which accept file name from user and print its 
//	last N characters by using library functions.
//
/////////////////////////////////////////////////////////////

//Header
#include<stdio.h>
#include<stdlib.h>
#define NAMESIZE 20

//Prototype
void PrintLastNBytes( char * , int);

//Driver Function
int main()
{	
	//Create character array for storing name of file
	char Fname[NAMESIZE] = {'\0'};
	int iValue = 0;

	//Accept Name File from user
	printf("Enter the name of file[with extension]   :");
	scanf("%s",Fname);

	//Accept Number of character from user
	printf("Enter the Number of character   :");
	scanf("%d",&iValue);

	PrintLastNBytes( Fname , iValue );

	return 0;
}


////////////////////////////////////////////////////////////
//
//  Name        :PrintLastNByte
//  Input       :char * , int
//  Returns     :void
//  Description :print its Last (N) characters by using 
//					library functions.
//  Author      :Rushikesh Godase
//  Date        :5 Sep 2020
//
////////////////////////////////////////////////////////////
void PrintLastNBytes( char *Fname , int iValue )
{
	if( Fname == NULL )
	{
		printf("Invalid Input.\n");
		return;
	}

	//create file pointer 
	FILE *fp = NULL;
	char ch = '\0';

	//open file by using fopen
	fp = fopen( Fname , "r" );

	//check whether file is open or not
	if( fp == NULL )
	{
		printf("Unable to open %s File.\n",Fname);
		exit(1);
	}

	/*
	*	seek to 10 position in reverse[-ve value]
	*	from end( SEEK_END ) file(fp)	
	*/


	if( (fseek( fp , -(iValue) , SEEK_END) ) == -1 )
	{
		printf("There is no enough character to seek from end.\n");
		return;
	}

	printf("Last %d Characters are   :\n",iValue);

	while( (ch=fgetc(fp)) != EOF )
	{
		printf("%c",ch);
	}

}

/* OUTPUT :

Enter the name of file[with extension]   :a.txt
Enter the Number of character   :5
Last 5 Characters are   :
World


Enter the name of file[with extension]   :ReadLastNCharLib.c
Enter the Number of character   :150
Last 150 Characters are   :
eturn;
        }

        printf("Last %d Characters are   :\n",iValue);

        while( (ch=fgetc(fp)) != EOF )
        {
                printf("%c",ch);
        }

}

/* OUTPUT :

*/
*/