/////////////////////////////////////////////////////////////
//
//	Write a program which accept file name from user and count 
//	number of occurrences of characters in small case and in 
//	capital case by using library functions.	
//
/////////////////////////////////////////////////////////////

//Header
#include<stdio.h>
#include<stdlib.h>
#define NAMESIZE 20

//Prototype
void CountCase( char * );

//Driver Function
int main()
{	
	//Create character array for storing name of file
	char Fname[NAMESIZE] = {'\0'};

	//Accept Name File from user
	printf("Enter the name of file[with extension]   :");
	scanf("%s",Fname);

	CountCase( Fname );

	return 0;
}


////////////////////////////////////////////////////////////
//
//  Name        :CountCaseL
//  Input       :char *
//  Returns     :void
//  Description :Count Occurances of Capital and Small case by using 
//					library functions.
//  Author      :Rushikesh Godase
//  Date        :5 Sep 2020
//
////////////////////////////////////////////////////////////
void CountCase( char *Fname )
{
	if( Fname == NULL )
	{
		printf("Invalid Input.\n");
		return;
	}

	//create file pointer 
	FILE *fp = NULL;
	char ch = '\0';
	int iCntS = 0 , iCntC = 0;

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
		if( (ch>='A') && (ch<='Z') )
			++iCntC;
		else if( (ch>='a') && (ch<='z') )
			++iCntS;
	}

	printf("Count of Small character occured in file is  :%d.\n",iCntS);

	printf("Count of Capital character occured in file is  :%d.\n",iCntC);


	fclose(fp);
}

/* OUTPUT :

Enter the name of file[with extension]   :a.txt
Count of Small character occured in file is  :38.
Count of Capital character occured in file is  :6.

Enter the name of file[with extension]   :CountOccCapSmallCharLib.c
Count of Small character occured in file is  :783.
Count of Capital character occured in file is  :105.

*/