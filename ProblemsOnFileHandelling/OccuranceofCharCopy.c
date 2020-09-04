////////////////////////////////////////////////////////////
//
//	Write a program which accepts file name and one character from user and
//	count number of occurrences of that characters from that file.
//	Input : Demo.txt ‘M’
//	Output : Frequency of M is 7
//
////////////////////////////////////////////////////////////

//Header
#include<stdio.h>
#include<fcntl.h>
#define BLOCKSIZE 1024

//Declaration
int Occurances( char [] , char );

//Driver Function
int main()
{
	int iRet = 0;
	char cValue = '\0';
	char Name[20] = {'\0'};

	printf("Enter the Name of File  :");
	scanf("%s",Name);

	getchar();

	printf("Enter the Character  :");
	scanf("%c",&cValue);

	iRet = Occurances( Name , cValue );

	printf("Number of Occurances of %c is  :%d",cValue,iRet);

	return 0;
}


////////////////////////////////////////////////////////////
//
//  Name        :Occurances
//  Input       :char [] , char
//  Returns     :int
//  Description :function which counts Occurances of Letter from File.
//  Author      :Rushikesh Godase
//  Date        :3 Sep 2020
//
////////////////////////////////////////////////////////////
int Occurances( char fname[] , char Ch )
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

			if( Arr[i] == Ch )
				++iCnt;
		}		

		memset(Arr , 0 , BLOCKSIZE);
	}

	close(fd);

	return iCnt;
}

/* OUTPUT :

Enter the Name of File  :OccuranceofChar.c
Enter the Character  :A
File Open Succesfully with fd [3].
Number of Occurances of A is  :5

Enter the Name of File  :a.txt
Enter the Character  :a
File Open Succesfully with fd [3].
Number of Occurances of a is  :3

*/