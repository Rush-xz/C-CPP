////////////////////////////////////////////////////////////
//
//	Write application which accept file name from user and read all data from that file
//	and display contents on screen.
//	Input : Demo.txt
//	Output : Display all data of file.
//
////////////////////////////////////////////////////////////

//Header
#include<stdio.h>
#include<fcntl.h>
#define BLOCKSIZE 1024

//Declaration
void FileReadDisplay( char [] );

//Driver Function
int main()
{
	char Name[20];

	printf("Please Enter the Name of File 	:");
	scanf("%s",&Name);

	FileReadDisplay( Name );

	return 0;
}

////////////////////////////////////////////////////////////
//
//  Name        :FileReadDisplay
//  Input       :char []
//  Returns     :void
//  Description :function which Reads the file and display content on screen
//  Author      :Rushikesh Godase
//  Date        :3 Sep 2020
//
////////////////////////////////////////////////////////////
void FileReadDisplay( char fname[] )
{
	int fd = 0 , iRet = 0;
	int Arr[BLOCKSIZE];

	fd = open(fname,O_RDONLY);

	if( fd == -1)
	{
		printf("Unable to open File.\n");
		return;
	}

	printf("File opens successfully with [%d] fd.\n",fd);


	while( (iRet = read(fd,Arr,BLOCKSIZE) ) != 0)
	{
		write(1,Arr,iRet);
		memset(Arr,0,BLOCKSIZE);
	}

	close(fd);

}


/* OUTPUT :

Please Enter the Name of File   :FileReadDisplay.c
File opens successfully with [3] fd.
////////////////////////////////////////////////////////////
//
//      Write application which accept file name from user and read all data from that file
//      and display contents on screen.
//      Input : Demo.txt
//      Output : Display all data of file.
//
//
//
////////////////////////////////////////////////////////////

//Header
#include<stdio.h>
#include<fcntl.h>
#define BLOCKSIZE 256

//Declaration
void FileReadDisplay( char [] );

//Driver Function
int main()
{
        char Name[20];

        printf("Please Enter thPlease Enter the Name of File    :");
        scanf("%s",&Name);

        FileReadDisplay( Name );

        return 0;
}

////////////////////////////////////////////////////////////
//
//  Name        :FileReadDisplay
//  Input       :char []
//  Returns     :void
//  Description :function whicfunction which Reads the file and display content on screen
//  Author      :Rushikesh Godase
//  Date        :3 Sep 2020
//
////////////////////////////////////////////////////////////
void FileReadDisplay( char fname[] )
{
        int fd = 0 , iRet = 0;
        int Arr[BLOCKSIZE]OCKSIZE];

        fd = open(fname,O_RDONLY);

        if( fd == -1)
        {
                printf("Unable to open File.\n");
                return;
        }

        printf("File opens successfully with [%d] fd.\n",fd);


        while( (iRet = read(fd,Arr,BLOCKSIZE) ) != 0)
        {
                write(1,Arr,BLOCKSIZE);
                memseKSIZE);
                memset(Arr,0,BLOCKSIZE);
        }

        close(fd);

}                          

*/