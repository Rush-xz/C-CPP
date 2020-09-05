////////////////////////////////////////////////////////////
//
//	Write a program which accept file name from user and print 
//	its first N characters by using library functions.
//	
////////////////////////////////////////////////////////////

//Header
#include<stdio.h>
#include<stdlib.h>
#define NAMESIZE 2

//Declaration
void PrintFirstNByte( char * , int );

//Driver Function
int main()
{
	//Create char Array for storing name of file
	char Name[NAMESIZE] = {'\0'};
	int iValue = 0;

	//Accept file name from user
	printf("Enter the Name of File[with extension] :");
	scanf("%s",Name);

	//Accept Number of character  from user
	printf("Enter the Number of character :");
	scanf("%d",&iValue);

	PrintFirstNByte( Name , iValue);

	return 0;
}


////////////////////////////////////////////////////////////
//
//  Name        :PrintFirstNByte
//  Input       :char * , int
//  Returns     :void
//  Description :print its first (N) characters by using 
//					library functions.
//  Author      :Rushikesh Godase
//  Date        :5 Sep 2020
//
////////////////////////////////////////////////////////////
void PrintFirstNByte( char *fname , int iValue )
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

	printf("First %d Characters are :\n",iValue);
	while( iNo <= iValue)
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
	
////////////////////////////////////////////////////////////
//
//      Write a program which accept file name from user and print
//      its first N characters by using library functions.
//
////////////////////////////////////////////////////////////

//Header
#include<stdio.h>
#include<stdlib.h>
#define NAMESIZE 2

//Declaration
void PrintFirstNByte( char * , int );

//Driver Function
int main()
{
        //Create char Array for storing name of file
        char Nam


*/
