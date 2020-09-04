////////////////////////////////////////////////////////////
//
//	Accept two file name from user where first file is an existing
//	file and second file is the file that we want to create copy
//	the data from first file into second file.
//	
////////////////////////////////////////////////////////////

//Header
#include<stdio.h>
#include<fcntl.h>
#define BLOCKSIZE 1024


//Declaration
void CopyData( char [] , char [] );

//Driver Function
int main()
{
	char Name1[20] = {'\0'};
	char Name2[20] = {'\0'};

	printf("Enter the Name of first File  :");
	scanf("%s",Name1);

	printf("Enter the Name of first File  :");
	scanf("%s",Name2);

	CopyData( Name1 , Name2);

	return 0;
}


////////////////////////////////////////////////////////////
//
//  Name        :CopyData
//  Input       :char [] , char []
//  Returns     :void
//  Description :function which Reads one file and create another file
//					and copy content of first file into another file.
//  Author      :Rushikesh Godase
//  Date        :3 Sep 2020
//
////////////////////////////////////////////////////////////
void CopyData( char Src[] , char Dest[])
{
	int fd = 0 , fdnew = 0 , iRet = 0;
	char Arr[BLOCKSIZE];

	fd = open( Src , O_RDONLY );

	if( fd == -1 )
	{
		printf("Unable to open %s File.\n",Src);
		return;
	}

	printf("%s File opened successfully.\n",Src);

	fdnew = creat( Dest , 0777 );

	if( fdnew == -1)
	{
		printf("%s File Unable to create.\n",Dest);
		close(fd);
		return;
	}

	while( ( iRet = read(fd , Arr , BLOCKSIZE) ) != 0 )
	{
		write( fdnew , Arr , iRet );
		memset( Arr , 0 , BLOCKSIZE);
	}

	printf("File Copied Successfully.\n");

	close(fd);
	close(fdnew);
}


/* OUTPUT :

Enter the Name of first File  :OccuranceofChar.c
Enter the Name of first File  :OccuranceofCharCopy.c
OccuranceofChar.c File opened successfully.
File Copied Successfully.

*/