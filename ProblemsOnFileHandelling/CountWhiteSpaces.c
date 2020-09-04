////////////////////////////////////////////////////////////
//
//	Write a program which accepts file name from user and count number of
//	white spaces from that file.
//	Input : Demo.txt
//	Output : Number of white spaces are 13
//
////////////////////////////////////////////////////////////

//Header
#include<stdio.h>
#include<fcntl.h>
#define BLOCKSIZE 1024

//Declaration
int CountSpaces( char [] );

//Driver Function
int main()
{
	int iRet = 0;
	char Name[20];

	printf("Enter the Name of File  :");
	scanf("%s",Name);

	iRet = CountSpaces( Name );

	printf("Number of White Spaces are  :%d",iRet);

	return 0;
}


////////////////////////////////////////////////////////////
//
//  Name        :CountSpaces
//  Input       :char []
//  Returns     :int
//  Description :function which counts White Spaces Letters from File.
//  Author      :Rushikesh Godase
//  Date        :3 Sep 2020
//
////////////////////////////////////////////////////////////
int CountSpaces( char fname[] )
{
	int iCnt = 0 , fd = 0 , iRet = 0 , i=0;
	char Arr[BLOCKSIZE];

	fd = open( fname , O_RDONLY );

	if( fd == -1 )
	{
		printf("Unable to open the File.\n");
		return -1;
	}

	printf("File Open Succesfully with fd [%d].\n",fd);

	while( (iRet = read(fd , Arr , BLOCKSIZE)) != 0)
	{
		
		for( i=0; i<iRet; ++i)
		{

			if( Arr[i] == ' ' )
				++iCnt;
		}		

		memset(Arr , 0 , BLOCKSIZE);
	}

	return iCnt;
}

/* OUTPUT :

Enter the Name of File  :a.txt
File Open Succesfully with fd [3].
Number of White Spaces are  :9

Enter the Name of File  :CountWhiteSpaces.c
File Open Succesfully with fd [3].
Number of White Spaces are  :208

*/