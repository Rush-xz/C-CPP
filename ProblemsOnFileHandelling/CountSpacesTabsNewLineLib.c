/////////////////////////////////////////////////////////////
//
//	Write a program which accept file name from user and count 
//	number of white spaces, tabs, new lines by using library functions.	
//
/////////////////////////////////////////////////////////////

//Header
#include<stdio.h>
#include<stdlib.h>
#define NAMESIZE 20

//Prototype
void Count( char * );

//Driver Function
int main()
{	
	//Create character array for storing name of file
	char Fname[NAMESIZE] = {'\0'};

	//Accept Name File from user
	printf("Enter the name of file[with extension]   :");
	scanf("%s",Fname);

	Count( Fname );

	return 0;
}


////////////////////////////////////////////////////////////
//
//  Name        :Count
//  Input       :char *
//  Returns     :void
//  Description :Count Spaces , Tabs , new lines in file by using 
//					library functions.
//  Author      :Rushikesh Godase
//  Date        :5 Sep 2020
//
////////////////////////////////////////////////////////////
void Count( char *Fname )
{
	if( Fname == NULL )
	{
		printf("Invalid Input.\n");
		return;
	}

	//create file pointer 
	FILE *fp = NULL;
	char ch = '\0';
	int iSpaces = 0 , iTabs = 0 , iNewL = 0 ;

	//open file by using fopen
	fp = fopen( Fname , "r" );

	//check whether file is open or not
	if( fp == NULL )
	{
		printf("Unable to open %s File.\n",Fname);
		exit(1);
	}
	//Read File content till End of file
	while( (ch=fgetc(fp)) != EOF )
	{
		if( ch == ' ' )
			iSpaces++;
		else if( ch == '\t' )
			iTabs++;
		else if( ch == '\n' )
			iNewL++;
		
	}

	printf("Number[Count] of Spaces in file is  :%d.\n",iSpaces);

	printf("Number[Count] of Tabs in file is  :%d.\n",iTabs);

	printf("Number[Count] of New Lines in file is  :%d.\n",iNewL);

	fclose(fp);
}

/* OUTPUT :

Enter the name of file[with extension]   :a.txt
Number[Count] of Spaces in file is  :6.
Number[Count] of Tabs in file is  :0.
Number[Count] of New Lines in file is  :0.

Enter the name of file[with extension]   :CountSpacesTabsNewLineLib.c
Number[Count] of Spaces in file is  :272.
Number[Count] of Tabs in file is  :61.
Number[Count] of New Lines in file is  :95.

Enter the name of file[with extension]   :FileReadDisplayLib.c
Number[Count] of Spaces in file is  :678.
Number[Count] of Tabs in file is  :44.
Number[Count] of New Lines in file is  :156.

*/