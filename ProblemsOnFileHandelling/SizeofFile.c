////////////////////////////////////////////////////////////
//
//	Write application which accept file name from user and display size of file.
//      Input : Demo.txt
//      Output : File size is 56 bytes
//
////////////////////////////////////////////////////////////

//Header
#include<stdio.h>
#include<fcntl.h>
#define BLOCKSIZE 1024

//Declaration
int SizeofFile( char [] );

//Driver Function
int main()
{
	char Name[20];
     int iRet = 0;

	printf("Please Enter the Name of File 	:");
	scanf("%s",&Name);

	iRet = SizeofFile( Name );

        printf("Size of File is %d bytes.\n",iRet);

	return 0;
}

////////////////////////////////////////////////////////////
//
//  Name        :SizeofFile
//  Input       :char []
//  Returns     :int
//  Description :function which Reads the file and calculate size of file.
//  Author      :Rushikesh Godase
//  Date        :3 Sep 2020
//
////////////////////////////////////////////////////////////
int SizeofFile( char fname[] )
{
	int fd = 0 , iRet = 0 , iSize = 0 ;
	int Arr[BLOCKSIZE];

	fd = open(fname,O_RDONLY);

	if( fd == -1)
	{
		printf("Unable to open File.\n");
		return -1;
	}

	printf("File opens successfully with [%d] fd.\n",fd);


	while( (iRet = read(fd,Arr,BLOCKSIZE) ) != 0)
	{
                
          iSize = iSize + iRet;

		memset(Arr,0,BLOCKSIZE);
	}

	close(fd);

        return iSize;

}


/* OUTPUT :

Please Enter the Name of File   :a.txt
File opens successfully with [3] fd.
Size of File is 54 bytes.     

Please Enter the Name of File   :SizeofFile.c
File opens successfully with [3] fd.
Size of File is 1508 bytes.        

*/