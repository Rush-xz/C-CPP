/////////////////////////////////////////////////////////////
//
//	Write a program which accept file name from user and print its 
//	last ten characters by using library functions.
//
/////////////////////////////////////////////////////////////

//Header
#include<stdio.h>
#include<stdlib.h>
#define NAMESIZE 20

//Prototype
void PrintLastTenBytes( char *);

//Driver Function
int main()
{	
	//Create character array for storing name of file
	char Fname[NAMESIZE] = {'\0'};

	printf("Enter the name of file[with extension]   :");
	scanf("%s",Fname);

	PrintLastTenBytes( Fname );

	return 0;
}


////////////////////////////////////////////////////////////
//
//  Name        :PrintLastTenByte
//  Input       :char *
//  Returns     :void
//  Description :print its Last Ten(N) characters by using 
//					library functions.
//  Author      :Rushikesh Godase
//  Date        :5 Sep 2020
//
////////////////////////////////////////////////////////////
void PrintLastTenBytes( char *Fname )
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


	if( (fseek( fp , -10 , SEEK_END) ) == -1 )
	{
		printf("There is no enough character to seek from end.\n");
		return;
	}

	printf("Last ten Characters are   :");

	while( (ch=fgetc(fp)) != EOF )
	{
		printf("%c",ch);
	}

}

/* OUTPUT :

Enter the name of file[with extension]   :a.txt
Last ten Characters are   :ello World

*/