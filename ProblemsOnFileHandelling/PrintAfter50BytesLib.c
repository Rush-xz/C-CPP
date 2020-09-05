/////////////////////////////////////////////////////////////
//
//	Write a program which accept file name from user and print two
//	characters after every fifty bytes by using library functions.	
//
/////////////////////////////////////////////////////////////

//Header
#include<stdio.h>
#include<stdlib.h>
#define NAMESIZE 20

//Prototype
void PrintAfterFiftyByte( char * );

//Driver Function
int main()
{	
	//Create character array for storing name of file
	char Fname[NAMESIZE] = {'\0'};

	//Accept Name File from user
	printf("Enter the name of file[with extension]   :");
	scanf("%s",Fname);

	PrintAfterFiftyByte( Fname );

	return 0;
}


////////////////////////////////////////////////////////////
//
//  Name        :PrintAfterFiftyByte
//  Input       :char *
//  Returns     :void
//  Description :Print two charcter After Every Fifty Byte from file by using 
//					library functions.
//  Author      :Rushikesh Godase
//  Date        :5 Sep 2020
//
////////////////////////////////////////////////////////////
void PrintAfterFiftyByte( char *Fname )
{
	if( Fname == NULL )
	{
		printf("Invalid Input.\n");
		return;
	}

	//create file pointer 
	FILE *fp = NULL;
	char ch = '\0';
	int iFlag = 0;

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
		if( ch == EOF)
			break;

		if( (fseek( fp , 49 , SEEK_CUR)) == -1 )
		{	
			if( iFlag == 0)
				printf("There is no enough character to seek.\n");
			
			return;
		}
		
		ch = fgetc(fp);
		printf("%c",ch);
		ch = fgetc(fp);
		printf("%c ",ch);
		iFlag = 1;		
		
	}

	fclose(fp);
}

/* OUTPUT :

Enter the name of file[with extension]   :a.txt
ld
C:\Users\HP\Documents\GitHub\C-CPP\ProblemsOnFileHandelling>myexe
Enter the name of file[with extension]   :PrintAfter50BytesLib.c
// e  ev // // td ri in g  // e  ;


 //
/  D yt // 5  // ch (" le nt fo en o  Fi )   ( iF r  et ri /* ]   a
  y  si       nt /    

*/