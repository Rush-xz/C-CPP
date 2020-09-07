////////////////////////////////////////////////////////////
//
//  Write a program which accepts two file names from user and copy
//  contents of one file at the end of second file by using library functions.  
//
/////////////////////////////////////////////////////////////



#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>

#define BLOCKSIZE     1024
#define NAMESIZE        16
#define NMEMB            1  /*Number of elements each one with 
                             size of size bytes*/

void FileAppend(char[], char[]);

int main(int argc, char* argv[])
{
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

    FileAppend(argv[1], argv[2]);

    return 0;
}

//////////////////////////////////////////////////////////
//
//  Name        :FileAppend
//  Input       :char[], char[]
//  Returns     :void
//  Description :Append the content of one file into other
//  Author      :Rushikesh Godase
//  Last Update :6 Sept 2020
//
///////////////////////////////////////////////////////////
void FileAppend(char cFileName1[], char cFileName2[])
{
    if(NULL == cFileName1 || NULL == cFileName2)
    {
        printf("Invalid Inputs\n");
        return;
    }


    int iSize = 0;
    FILE *fp1 = NULL, *fp2 = NULL;

    char cBuffer[BLOCKSIZE], ch = '\0', *cWBuffer = NULL;
    cWBuffer = (char *)malloc(sizeof(char) * BLOCKSIZE);

    memset(cBuffer, 0, BLOCKSIZE);
    memset(cWBuffer, 0, BLOCKSIZE);

    //open file by using fopen()
	fp1 = fopen(cFileName1, "r");
	fp2 = fopen(cFileName2, "a");

	//check whether file is open or not.
	if(fp1 == NULL && fp2 == NULL)
	{
		printf("\n Can not open file %s.\n", cFileName1);
		exit(1);
	}

    //rewind(fp1);//sets File position to the beggining of file


    while(fread(cBuffer, NMEMB, BLOCKSIZE, fp1))
    {
        iSize = iSize + strlen(cBuffer);


        /*increase the size of cWBuffer if required*/
        if(iSize >= BLOCKSIZE)  
        {                         
            cWBuffer = (char *)realloc(cWBuffer, BLOCKSIZE + iSize);
        }

        strcat(cWBuffer, cBuffer); //Concat the cont. of cBuffer into cWBuffer

        memset( cBuffer , 0 , sizeof(cBuffer));
    }

    /* writing the cont. into 2nd file */
    if(fwrite(cWBuffer, NMEMB, strlen(cWBuffer), fp2))
    {
        printf("File Successfully copied\n");
    }
    else
    {
        printf("Unable to perform copy\n");
    }    


    fclose(fp1);
    fclose(fp2);
}