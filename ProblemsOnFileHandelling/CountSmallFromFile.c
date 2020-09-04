////////////////////////////////////////////////////////////
//
//	Write a program which accepts file name from user and count number of
//	small characters from that file.
//	Input : Demo.txt
//	Output : Number of small characters are 21
//
////////////////////////////////////////////////////////////

//Header
#include<stdio.h>
#include<fcntl.h>
#define BLOCKSIZE 1024

//Declaration
int CountSmall( char [] );

//Driver Function
int main()
{
	int iRet = 0;
	char Name[20];

	printf("Enter the Name of File  :");
	scanf("%s",Name);

	iRet = CountSmall( Name );

	printf("Number of Small Letters are  :%d",iRet);

	return 0;
}


////////////////////////////////////////////////////////////
//
//  Name        :CountSmall
//  Input       :char []
//  Returns     :int
//  Description :function which counts Small Letters from File.
//  Author      :Rushikesh Godase
//  Date        :3 Sep 2020
//
////////////////////////////////////////////////////////////
int CountSmall( char fname[] )
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

			if( (Arr[i] >= 'a') && (Arr[i] <= 'z') )
				++iCnt;
		}		

		memset(Arr , 0 , BLOCKSIZE);
	}

	close(fd);

	return iCnt;
}

/* OUTPUT :

EEnter the Name of File  :WriteData.c
File Open Succesfully with fd [3].
Number of Small Letters are  :749


Enter the Name of File  :CountSmallFromFile.c
File Open Succesfully with fd [3].
Number of Small Letters are  :694

*/