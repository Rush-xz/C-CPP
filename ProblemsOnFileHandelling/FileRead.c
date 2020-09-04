////////////////////////////////////////////////////////////
//
//	Write application which accept file name from user and read
//      first 10 bytes from that file and display data on screen.
//	Input : Demo.txt
//	Output : Display First 10 bytes from file.
//
////////////////////////////////////////////////////////////

//Header
#include<stdio.h>
#include<fcntl.h>
#include<malloc.h>

//Declaration
void FileRead( char [] , int);

//Driver Function
int main()
{
	char Name[20];
     int iBytes = 0;

	printf("Please Enter the Name of File 	:");
	scanf("%s",Name);

    printf("Please Enter Number of Bytes to read   :");
    scanf("%d",&iBytes);

	FileRead( Name , iBytes );

	return 0;
}

////////////////////////////////////////////////////////////
//
//  Name        :FileRead
//  Input       :char [] , int
//  Returns     :void
//  Description :function which Reads the file and display content on screen
//  Author      :Rushikesh Godase
//  Date        :3 Sep 2020
//
////////////////////////////////////////////////////////////
void FileRead( char fname[] , int iSize )
{
	int fd = 0 , iRet = 0;
	char *Arr = NULL;

	fd = open(fname,O_RDONLY);

	if( fd == -1)
	{
		printf("Unable to open File.\n");
		return;
	}

	printf("File opens successfully with [%d] fd.\n",fd);

	Arr = (char *)malloc(sizeof(char)*iSize);

	iRet = read(fd,Arr,iSize);

        if(iRet == -1)
        {
           printf("Unable to read the data from file\n");
           close(fd);
           free(Arr);
           return;
        }

     printf("Data from File %s is :\n%s",fname,Arr);
     //printf("\n iRet = %d",iRet);

	close(fd);
	free(Arr);

}


/* OUTPUT :

Please Enter the Name of File   :a.txt
Please Enter Number of Bytes to read   :20
File opens successfully with [3] fd.
Data from File a.txt is :
Life is beautiful do

Please Enter the Name of File   :a.txt
Please Enter Number of Bytes to read   :11
File opens successfully with [3] fd.
Data from File a.txt is :
Life is bea


Please Enter the Name of File   :a.txt
Please Enter Number of Bytes to read   :10
File opens successfully with [3] fd.
Data from File a.txt is :
Life is be@

*/