////////////////////////////////////////////////////////////
//
//	Write application which accept file name from user and create that file.
//	Input : Demo.txt
//	Output : File created successfully.
//
////////////////////////////////////////////////////////////

//Header
#include<stdio.h>
#include<fcntl.h>

//Declaration
void CreateFile( char [] );

//Driver Function
int main()
{
	char Name[20];

	printf("Please Enter the Name of File 	:");
	scanf("%s",&Name);

	CreateFile( Name );

	return 0;
}

////////////////////////////////////////////////////////////
//
//  Name        :CreateFile
//  Input       :char []
//  Returns     :void
//  Description :function which creats the file
//  Author      :Rushikesh Godase
//  Date        :3 Sep 2020
//
////////////////////////////////////////////////////////////
void CreateFile( char fname[] )
{
	int fd = 0;

	fd = creat(fname,0777);  //All Permissions are given[rwx].

	if( fd == -1)
	{
		printf("Unable to create File.\n");
		return;
	}

	printf("File created successfully with [%d] fd.\n",fd);

	close(fd);

}


/* OUTPUT :

Please Enter the Name of File   :NewFile.c
File created successfully with [3] fd.

*/