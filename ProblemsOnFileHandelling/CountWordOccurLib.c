/////////////////////////////////////////////////////////////
//
//	Write a program which accept file name from user and print
//	 number of occurrence of Particular word in that file.	
//
/////////////////////////////////////////////////////////////

//Header
#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#define NAMESIZE 20
#define BLOCKSIZE 1024

//Prototype
int WordCount( char [] , char []);

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

	if( argc != 3)
	{
		printf("File name and word is required.\n");
		return 0;
	}

	iRet = WordCount( argv[1] , argv[2] );

	if( iRet != -1 || iRet != 0)
	{
		printf("Count of word [%s] in a File %s is :%d.\n",argv[2],argv[1],iRet);
	}
	else 
	{
		printf("Entered word is not found.\n");
	}

	return 0;
}


////////////////////////////////////////////////////////////
//
//  Name        :WordCount
//  Input       :char [] , char []
//  Returns     :int
//  Description :Compute particular Word count using 
//					library functions.
//  Author      :Rushikesh Godase
//  Date        :5 Sep 2020
//
////////////////////////////////////////////////////////////
int WordCount( char Fname[] , char Word[])
{
	if( Fname == NULL )
	{
		printf("Invalid Input.\n");
		return -1;
	}

	//create file pointer 
	FILE *fp = NULL;
	int iCnt = 0 , i = 0 , j = 0;

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

		for( i=0; cBuffer[i] != '\0'; i++)
		{
			j=0;

			if( (Word[j] != '\0') && (cBuffer[i] == Word[j]) )
			{
				i++;
				j++;
			}

			if( j == strlen(Word) )
				iCnt++;
		}

		memset( cBuffer , 0 , BLOCKSIZE );
	}

	fclose(fp);

	return iCnt;
}

/* OUTPUT :

Size of a.txt File is  :52 Bytes.

Size of SizeofFileLib.c File is  :1904 Bytes.

*/