/////////////////////////////////////////////////////////////
//
//	Write a program which accept file name from user and print 
//	its size by using library functions.(without calling stat function)	
//
/////////////////////////////////////////////////////////////

//Header
#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#define NAMESIZE 20
#define BLOCKSIZE 1024

//Prototype
int FizeSize( char * );

//Driver Function
int main( char  argc , char *argv[] ) //Enter file name by cmd line argu.
{	
	int iRet = 0;

	//Create character array for storing name of file
	//char Fname[NAMESIZE] = {'\0'};

	/*
	//Accept Name File from user
	printf("Enter the name of file[with extension]   :");
	scanf("%s",Fname);
	*/

	if( argc != 2)
	{
		printf("File name is required.\n");
		return 0;
	}

	iRet = FizeSize( argv[1] );

	if( iRet != -1 || iRet != 0)
	{
		printf("Size of %s File is  :%d Bytes.\n",argv[1],iRet);
	}
	else
	{
		printf("Cannot compute size of file.\n");
	}

	return 0;
}


////////////////////////////////////////////////////////////
//
//  Name        :FizeSize
//  Input       :char *
//  Returns     :int
//  Description :Compute File size using 
//					library functions.
//  Author      :Rushikesh Godase
//  Date        :5 Sep 2020
//
////////////////////////////////////////////////////////////
int FizeSize( char *Fname )
{
	if( Fname == NULL )
	{
		printf("Invalid Input.\n");
		return -1;
	}

	//create file pointer 
	FILE *fp = NULL;
	int iSize = 0;

	//Create Buffer
	char cBuffer[BLOCKSIZE] = {'\0'};
	//Clean Buffer
	memset( cBuffer , 0 , BLOCKSIZE);

	//open file by using fopen
	fp = fopen( Fname , "r" );

	//check whether file is open or not
	if( fp == NULL )
	{
		printf("Unable to open %s File.\n",Fname);
		exit(1);
	}

	while( (fgets( cBuffer , BLOCKSIZE , fp)) != NULL )
	{
		iSize = iSize + strlen(cBuffer);
		memset( cBuffer , 0 , BLOCKSIZE );
	}

	fclose(fp);

	return iSize;
}

/* OUTPUT :

Size of a.txt File is  :52 Bytes.

Size of SizeofFileLib.c File is  :1904 Bytes.

*/