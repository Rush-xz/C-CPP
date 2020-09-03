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

//Declaration
void FileRead( char [] );

//Driver Function
int main()
{
	char Name[20];

	printf("Please Enter the Name of File 	:");
	scanf("%s",&Name);

	FileRead( Name );

	return 0;
}

////////////////////////////////////////////////////////////
//
//  Name        :FileRead
//  Input       :char []
//  Returns     :void
//  Description :function which Reads the file and display content on screen
//  Author      :Rushikesh Godase
//  Date        :3 Sep 2020
//
////////////////////////////////////////////////////////////
void FileRead( char fname[] )
{
	int fd = 0 , iRet = 0;
	int Arr[11];

	fd = open(fname,O_RDONLY);

	if( fd == -1)
	{
		printf("Unable to open File.\n");
		return;
	}

	printf("File opens successfully with [%d] fd.\n",fd);


	iRet = read(fd,Arr,10);

        if(iRet == -1)
        {
           printf("Unable to read the data from file\n");
           close(fd);
           return;
        }

     printf("Data from File %s is :\n%s",fname,Arr);

	close(fd);

}


/* OUTPUT :

Please Enter the Name of File   :a.txt
File opens successfully with [3] fd.
Data from File a.txt is :
Life is be$      

*/