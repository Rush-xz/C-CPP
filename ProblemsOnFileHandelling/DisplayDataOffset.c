////////////////////////////////////////////////////////////
//
//	Accept two file name from user and display all the data 
//	of that file after 15th(or Accept offset from user) OFFSET.
//	
////////////////////////////////////////////////////////////

//Header
#include<stdio.h>
#include<fcntl.h>
#define BLOCKSIZE 1024


//Declaration
void DisplayData( char [] , int );

//Driver Function
int main()
{
	char Name[20] = {'\0'};
	int iOffset = 0;

	printf("Enter the Name of File  :");
	scanf("%s",Name);

	printf("Enter the Offset  :");
	scanf("%d",&iOffset);

	DisplayData( Name , iOffset );

	return 0;
}


////////////////////////////////////////////////////////////
//
//  Name        :Displaydata
//  Input       :char [] , int
//  Returns     :void
//  Description :function which sets offset and display data from that offset
//  Author      :Rushikesh Godase
//  Date        :3 Sep 2020
//
////////////////////////////////////////////////////////////
void DisplayData( char fname[] , int iOffset)
{
	int fd = 0 , iRet = 0;
	char Arr[BLOCKSIZE];

	fd = open( fname , O_RDONLY );

	if( fd == -1 )
	{
		printf("Unable to open %s File.\n",fname);
		return;
	}

	printf("%s File opened successfully.\n",fname);

		lseek( fd , iOffset , SEEK_SET );		//Setting a Offset

	while( ( iRet = read(fd , Arr , BLOCKSIZE) ) != 0 )
	{
		write( 1 , Arr , iRet );
		memset( Arr , 0 , BLOCKSIZE);
	}

	close(fd);

}


/* OUTPUT :

Enter the Name of File  :a.txt
Enter the Offset  :15
a.txt File opened successfully.
ul. Work Hard with smartness.Hello World



Enter the Name of File  :DisplayDataOffset.c
Enter the Offset  :460
DisplayDataOffset.c File opened successfully.
t = 0;

        printf("Enter the Name of File  :");
        scanf("%s",Name);

        printf("Enter the Offset  :");
        scanf("%d",&iOffset);

        DisplayData( Name , iOffset );

        return 0;
}


////////////////////////////////////////////////////////////
//
//  Name        :Displaydata
//  Input       :char [] , int
//  Returns     :void
//  Description :function which sets offset and display data from that offset
//  Author      :Rushikesh Godase
//  Date        :3 Sep 2020
//
////////////////////////////////////////////////////////////
void DisplayData( char fname[] , int iOffset)
{
        int fd = 0 , iRet = 0;
        char Arr[BLOCKSIZE];

        fd = open( fname , O_RDONLY );

        if( fd == -1 )
        {
                printf("Unable to open %s File.\n",fname);
                return;
        }

        printf("%s File opened successfully.\n",fname);

                lseek( fd , iOffset , SEEK_SET );               //Setting a Offset

        while( ( iRet = read(fd , Arr , BLOCKSIZE) ) != 0 )
        {
                write( 1 , Arr , iRet );
                memset( Arr , 0 , BLOCKSIZE);
        }

        close(fd);

}


/* OUTPUT :

Enter the Name of first File  :OccuranceofChar.c
Enter the Name of first File  :OccuranceofCharCopy.c
OccuranceofChar.c File opened successfully.
File Copied Successfully.

*/
