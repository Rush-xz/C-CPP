////////////////////////////////////////////////////////////
//
//	Write a program which accept file name from user and print 
//	its first five characters by using library functions.
//	
////////////////////////////////////////////////////////////

//Header
#include<stdio.h>
#include<stdlib.h>
#define NAMESIZE 20

//Declaration
void PrintFirstFiveByte( char * );

//Driver Function
int main()
{
	//Create char Array for storing name of file
	char Name[NAMESIZE] = {'\0'};

	//Accept file name from user
	printf("Enter the Name of File[with extension] :");
	scanf("%s",Name);

	PrintFirstFiveByte( Name );

	return 0;
}


////////////////////////////////////////////////////////////
//
//  Name        :PrintFirstFiveByte
//  Input       :char *
//  Returns     :void
//  Description :print its first five(N) characters by using 
//					library functions.
//  Author      :Rushikesh Godase
//  Date        :5 Sep 2020
//
////////////////////////////////////////////////////////////
void PrintFirstFiveByte( char *fname )
{
	if( fname == NULL)
	{
		printf("Invalid Inputs.\n");
		return;
	}

	//Create File Pointer
	FILE *fp = NULL;
	char ch = '\0';
	int iNo = 1;

	//open file by using fopen()
	fp = fopen( fname , "r" );

	//check whether file is open or not
	if( fp == NULL )
	{
		printf("Unable to open %s File.\n",fname);
		exit(1);
	}

	printf("First Five Characters are :");
	while( iNo <= 5)
	{
		ch = fgetc(fp);

		if( ch == EOF)
		{
			break;
		}

		printf("%c",ch);
		iNo++;
	}

	printf("\n");
	fclose(fp);

}


/* OUTPUT :
	
Enter the Name of File[with extension] :a.txt
First Five Characters are :Life

*/
