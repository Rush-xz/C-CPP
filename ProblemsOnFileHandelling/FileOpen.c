////////////////////////////////////////////////////////////
//
//	Write application which accept file name from user and open that 
//	file in read mode.
//	Input : Demo.txt
//	Output : File opened successfully.
//
////////////////////////////////////////////////////////////

//Header
#include<stdio.h>
#include<fcntl.h>

//Declaration
void FileOpen( char [] );

//Driver Function
int main()
{
	char Name[20];

	printf("Please Enter the Name of File 	:");
	scanf("%s",&Name);

	FileOpen( Name );

	return 0;
}

////////////////////////////////////////////////////////////
//
//  Name        :FileOpen
//  Input       :char []
//  Returns     :void
//  Description :function which opens the file
//  Author      :Rushikesh Godase
//  Date        :3 Sep 2020
//
////////////////////////////////////////////////////////////
void FileOpen( char fname[] )
{
	int fd = 0;

	fd = open(fname,O_RDONLY);

	if( fd == -1)
	{
		printf("Unable to open File.\n");
		return;
	}

	printf("File opens successfully with [%d] fd.\n",fd);

	close(fd);

}


/* OUTPUT :

Please Enter the Name of File   :a.txt
File opens successfully with [3] fd.

*/