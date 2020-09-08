/////////////////////////////////////////////////////////////
//
//	Write a program which accept file name from user and create
//  one new file and copy alternate lines from source file in 
//	that new file by using library functions.	
//
/////////////////////////////////////////////////////////////

//Header
#include<stdio.h>
#include<stdlib.h>
#define NAMESIZE 20

//Prototype
void CreateCpyAlt( char [] , char []);

//Driver Function
int main( char  argc , char *argv[] ) //Enter file name by cmd line argu.
{	

	//Create character array for storing name of file
	//char Fname[NAMESIZE] = {'\0'};

	/*
	//Accept Name File from user
	printf("Enter the name of file[with extension]   :");
	scanf("%s",Fname);
	*/

	if( argc != 3)
	{
		printf("File name is required.\n");
		return 0;
	}

	CreateCpyAlt( argv[1] , argv[2] );

	return 0;
}


////////////////////////////////////////////////////////////
//
//  Name        :CreateCpyAlt
//  Input       :char [] , char []
//  Returns     :int
//  Description : This function Creates new file and copy 
//				alternate line in that new file  by using 
//					library functions.
//  Author      :Rushikesh Godase
//  Date        :6 Sep 2020
//
////////////////////////////////////////////////////////////
void CreateCpyAlt( char Src[] , char Dest[] )
{
	if( Src == NULL || Dest == NULL )
	{
		printf("Invalid Input.\n");
		return;
	}

	//create file pointer 
	FILE *fp1 = NULL , *fp2 = NULL;
	char ch = '\0';

	//open file by using fopen
	fp1 = fopen( Src , "r" );

	//check whether file is open or not
	if( fp1 == NULL )
	{
		printf("Unable to open %s File.\n",Src);
		exit(1);
	}	

	fp2 = fopen( Dest , "w+"); 
	/*W+ creates new file opens in read and write mode if file is already
	   exist then it will not create any new file*/

	//check whether file is open or not
	if( fp2 == NULL )
	{
		printf("Unable to create or open %s File.\n",Dest);
		return;
	}

	while( ( ch = fgetc(fp1) ) != EOF)
	{
		fputc( ch , fp2);

	/*if new line character found then we are going to skip next line,
		for this while loop is used to find next newline character*/
		if( ch == '\n')
		{
			ch = fgetc(fp1);
			while( ch != '\n' && ch != EOF)
			{
				ch = fgetc(fp1);
			}
		}

	}


	printf("\n File copied successfully..");
	_fcloseall();

}
