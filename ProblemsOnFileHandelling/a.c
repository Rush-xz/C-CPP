////////////////////////////////////////////////////////////
//
//  Write a program which accepts two file names from user 
// and compare contents of those files by using library functions. 
//
/////////////////////////////////////////////////////////////



#include<stdio.h>
#include<fcntl.h>
#define NAMESIZE        16
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL FileCompare(char[], char[]);

int main(int argc, char* argv[])
{
    BOOL bRet = FALSE;

    //char cFname1[NAMESIZE] = {'\0'};
    //char cFname2[NAMESIZE] = {'\0'};

    /*
    printf("\nEnter source file name with extension\t:");
    scanf("%s", cFname1);
    printf("\nEnter destination file name with extension\t:");
    scanf("%s", cFname2);
    */
    if(argc != 3)
    {
        printf("Required filename and word for occurance count!!");
        return -1;
    }

    bRet = FileCompare(argv[1], argv[2]);

    if( bRet == TRUE )
        printf("Content of both files are equal.\n");
    else
        printf("Content of both files are not equal.\n");


    return 0;
}

//////////////////////////////////////////////////////////
//
//  Name        :FileCompare
//  Input       :char[], char[]
//  Returns     :BOOL
//  Description :Compare the content of one file with other
//  Author      :Rushikesh Godase
//  Last Update :6 Sept 2020
//
///////////////////////////////////////////////////////////
BOOL FileCompare(char cFileName1[], char cFileName2[])
{
    if(NULL == cFileName1 || NULL == cFileName2)
    {
        printf("Invalid Inputs\n");
        return FALSE;
    }


    FILE *fp1 = NULL, *fp2 = NULL;

    char ch1 = '\0' , ch2 = '\0';

    //open file by using fopen()
	fp1 = fopen(cFileName1, "r");
	fp2 = fopen(cFileName2, "r");

	//check whether file is open or not.
	if(fp1 == NULL && fp2 == NULL)
	{
		printf("\n Can not open file %s.\n", cFileName1);
        return FALSE;
	}

    rewind(fp1);
    rewind(fp2);

    while( 1 )
    {
        //Read single character from the file
        ch1 = fgetc(fp1);
        ch2 = fgetc(fp2);

            //check whether end of file is reached or not
            if( ch1 == EOF || ch2 == EOF || ch1 != ch2 )
                break;

    }

    _fcloseall();

    if( ch1 != EOF || ch2 != EOF  )
    {  
        return FALSE;       
    }
    
        return TRUE;
}