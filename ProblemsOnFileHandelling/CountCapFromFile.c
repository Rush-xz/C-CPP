////////////////////////////////////////////////////////////
//
//	Write a program which accepts file name from user and count number of
//	capital characters from that file.
//	Input : Demo.txt
//	Output : Number of capital characters are 23
//
////////////////////////////////////////////////////////////

//Header
#include<stdio.h>
#include<fcntl.h>
#define BLOCKSIZE 1024

//Declaration
int CountCap( char [] );

//Driver Function
int main()
{
	int iRet = 0;
	char Name[20];

	printf("Enter the Name of File  :");
	scanf("%s",Name);

	iRet = CountCap( Name );

	printf("Number of Capital Letters are  :%d",iRet);

	return 0;
}


////////////////////////////////////////////////////////////
//
//  Name        :CountCap
//  Input       :char []
//  Returns     :int
//  Description :function which counts Capital Letters from File.
//  Author      :Rushikesh Godase
//  Date        :3 Sep 2020
//
////////////////////////////////////////////////////////////
int CountCap( char fname[] )
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

			if( (Arr[i] >= 'A') && (Arr[i] <= 'Z') )
				++iCnt;
		}		

		memset(Arr , 0 , BLOCKSIZE);
	}

	return iCnt;
}

/* OUTPUT :

Enter the Name of File  :WriteData.c
File Open Succesfully with fd [3].
Number of Capital Letters are  :87

Enter the Name of File  :a.txt
File Open Succesfully with fd [3].
Number of Capital Letters are  :3

*/