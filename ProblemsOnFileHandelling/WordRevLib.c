/////////////////////////////////////////////////////////////
//
//	Write a program which accept file name from user and reverse all
//	occurrences of “include” word in that file.	
//
/////////////////////////////////////////////////////////////

//Header
#include<stdio.h>
#include<fcntl.h>
#include<string.h>
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
		printf("File name and Word is required.\n");
		return 0;
	}

	iRet = WordCount( argv[1] , argv[2] );

	if( iRet != -1 || iRet != 0)
	{
		printf("\nCount of Word [%s] in a File %s is :%d.\n",argv[2],argv[1],iRet);
	}
	else 
	{
		printf("\nEntered Word is not found.\n");
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
int WordCount( char Fname[] , char cWord[])
{
	if( Fname == NULL )
	{
		printf("Invalid Input.\n");
		return -1;
	}

	//create file pointer 
	FILE *fp = NULL;
	int iCnt = 0 , i = 0 , j = 0;
	/*char Temp = '\0';
	int k = 0 ;*/	
	int iNo = 0 , iOffset = 0;
	char Wd[strlen(cWord)];

	strcpy(Wd,cWord);

	strrev( Wd);

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
			iNo++;

			while( (cWord[j] != '\0') && (cBuffer[i] == cWord[j]) )
			{
				if( j == 0)
				{
					iOffset = iNo;
				}

				i++;
				j++;

			}

			if( j == strlen(cWord) )
			{
				iCnt++;

				fputs( Wd , ftell(fp));

			}

		}

		/*Cleans the buffer*/
		memset( cBuffer , 0 , BLOCKSIZE );
	}

	/*closing a file*/
	fclose(fp);

	return iCnt;
}

/* OUTPUT :


*/