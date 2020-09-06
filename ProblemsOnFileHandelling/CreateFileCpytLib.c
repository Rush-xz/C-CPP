/////////////////////////////////////////////////////////////
//
//	Write a program which accept file name from user and create
//  one new file and copy the contents in that new file by using 
//	library functions.	
//
/////////////////////////////////////////////////////////////

//Header
#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#define NAMESIZE 20
#define BLOCKSIZE 1024

//Prototype
void CreateCpy( char [] , char []);

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

	CreateCpy( argv[1] , argv[2] );

	return 0;
}


////////////////////////////////////////////////////////////
//
//  Name        :CreateCpy
//  Input       :char [] , char []
//  Returns     :int
//  Description :Create new file and copy content in that by using 
//					library functions.
//  Author      :Rushikesh Godase
//  Date        :6 Sep 2020
//
////////////////////////////////////////////////////////////
void CreateCpy( char Src[] , char Dest[] )
{
	if( Src == NULL || Dest == NULL )
	{
		printf("Invalid Input.\n");
		return;
	}

	//create file pointer 
	FILE *fp = NULL;
	int newfd = 0;

	//Create Buffer
	char cBuffer[BLOCKSIZE] = {'\0'};
	//Clean Buffer
	memset( cBuffer , 0 , BLOCKSIZE);

	//open file by using fopen
	fp = fopen( Src , "r" );

	//check whether file is open or not
	if( fp == NULL )
	{
		printf("Unable to open %s File.\n",Src);
		exit(1);
	}	

	newfd = creat(Dest , O_RDONLY | O_WRONLY );

	//check whether file is open or not
	if( newfd == -1 )
	{
		printf("Unable to create %s File.\n",Dest);
		return;
	}

	while( (fgets( cBuffer , BLOCKSIZE , fp)) != NULL )
	{

		fputs( cBuffer , newfd);

		/*Cleans the buffer*/
		memset( cBuffer , 0 , BLOCKSIZE );
	}

	/*closing a file*/
	fclose(fp);
	close(newfd);
}

/* OUTPUT :


*/