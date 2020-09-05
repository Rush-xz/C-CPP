/////////////////////////////////////////////////////////////
//
//	Write a program which accept file name from user and display
//  contents of	file by using library functions.	
//
/////////////////////////////////////////////////////////////

//Header
#include<stdio.h>
#include<stdlib.h>
#define NAMESIZE 20

//Prototype
void FileReadDisplay( char * );

//Driver Function
int main()
{	
	//Create character array for storing name of file
	char Fname[NAMESIZE] = {'\0'};

	//Accept Name File from user
	printf("Enter the name of file[with extension]   :");
	scanf("%s",Fname);

	FileReadDisplay( Fname );

	return 0;
}


////////////////////////////////////////////////////////////
//
//  Name        :FileReadDisplayLib
//  Input       :char *
//  Returns     :void
//  Description :Read and display file content by using 
//					library functions.
//  Author      :Rushikesh Godase
//  Date        :5 Sep 2020
//
////////////////////////////////////////////////////////////
void FileReadDisplay( char *Fname )
{
	if( Fname == NULL )
	{
		printf("Invalid Input.\n");
		return;
	}

	//create file pointer 
	FILE *fp = NULL;
	char ch = '\0';

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
		printf("%c",ch);		//Display Content of file
	}

	fclose(fp);
}

/* OUTPUT :


Enter the name of file[with extension]   :a.txt
Life is beautiful. Work Hard with smartness.Hello World


Enter the name of file[with extension]   :FileReadDisplayLib.c
/////////////////////////////////////////////////////////////
//
//      Write a program which accept file name from user and display
//  contents of file by using library functions.
//
/////////////////////////////////////////////////////////////

//Header
#include<stdio.h>
#include<stdlib.h>
#define NAMESIZE 20

//Prototype
void FileReadDisplay( char * );

//Driver Function
int main()
{
        //Create character array for storing name of file
        char Fname[NAMESIZE] = {'\0'};

        //Accept Name File from user
        printf("Enter the name of file[with extension]   :");
        scanf("%s",Fname);

        FileReadDisplay( Fname );

        return 0;
}


////////////////////////////////////////////////////////////
//
//  Name        :FileReadDisplayLib
//  Input       :char *
//  Returns     :void
//  Description :Read and display file content by using
//                                      library functions.
//  Author      :Rushikesh Godase
//  Date        :5 Sep 2020
//
////////////////////////////////////////////////////////////
void FileReadDisplay( char *Fname )
{
        if( Fname == NULL )
        {
                printf("Invalid Input.\n");
                return;
        }

        //create file pointer
        FILE *fp = NULL;
        char ch = '\0';

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
                printf("%c",ch);                //Display Content of file
        }

}

/* OUTPUT :



*/

