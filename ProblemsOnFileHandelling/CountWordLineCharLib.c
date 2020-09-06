/////////////////////////////////////////////////////////////
//
//	Write a program which accept file name from user and count 
//	number of words and lines, characters from that file.	
//
/////////////////////////////////////////////////////////////

//Header
#include<stdio.h>
#include<fcntl.h>
#define BLOCKSIZE 1024
#define NAMESIZE 20
#define IN 1	/*Inside a Word*/
#define OUT 0	/*Outside a Word*/

//Prototype
void Count( char * );

//Driver FunctiIN
int main(char argc , char *argv[] )
{
	/*char Fname[NAMESIZE] = {'\0'};

	printf("Enter the Name of File[with ExtensiIN].\n");
	scanf("%s",Fname);*/
	
	Count( argv[1] );

	if( argc != 2)
	{
		printf("File name is required.\n");
		return 0;
	}


	return 0;

}


////////////////////////////////////////////////////////////
//
//  Name        :Count
//  Input       :char *
//  Returns     :void
//  Description :Count word , lines , characters using 
//					library functions.
//  Author      :Rushikesh Godase
//  Date        :6 Sep 2020
//
////////////////////////////////////////////////////////////
void Count( char *Fname )
{
	if( Fname == NULL )
	{
		printf("Invalid Inputs.\n");
		return;
	}

	FILE *fp = NULL;
	char cBuff[BLOCKSIZE] = {'\0'};
	memset( cBuff , 0 , BLOCKSIZE );
	int i = 0 , nl = 0 , nc = 0 , nw = 0;
	int STATE =OUT;


	fp = fopen(Fname , "r" );

	if( fp == NULL )
	{
		printf("Unable to open File.\n");
		return;
	}

	while( fgets( cBuff , BLOCKSIZE , fp) != NULL)
	{
		for( i=0; cBuff[i] != '\0'; ++i)
		{
			//Counts Lines
			if( cBuff[i] == '\n')
				nl++;
			/*
			//Count Words INly
			if((cBuff[i]>='A')&&(cBuff[i]<='Z')||(cBuff[i]>='a')&&(cBuff[i]<='z'))
			{
				STATE = IN;

				if( (!(cBuff[i+1]>='A')&&!(cBuff[i]<='Z'))||(!(cBuff[i]>='a')&&!(cBuff[i]<='z')) )
				{
					nw++;
					STATE = OFF;
				}
			}*/

		  if( (cBuff[i]==' ')||(cBuff[i]=='\t')||(cBuff[i]=='\n') )
	        {
	            STATE = OUT;
	        }
	        else if( STATE == OUT )
	        {    
	            STATE = IN;
	            ++nw;
	        }


		}

		nc = nc + strlen(cBuff);
	}

	printf("Word Count from file[%s] is  :%d.\n",Fname,nw);

	printf("NewLine Count from file[%s] is :%d.\n",Fname,nl);

	printf("Character Count from file[%s] is :%d.\n",Fname,nc);

}

/* OUTPUT :

Word Count from file[CountWordLineCharLib.c] is  :277.
NewLine Count from file[CountWordLineCharLib.c] is :110.
Character Count from file[CountWordLineCharLib.c] is :2019.

Word Count from file[a.txt] is  :22.
NewLine Count from file[a.txt] is :10.
Character Count from file[a.txt] is :145.


*/