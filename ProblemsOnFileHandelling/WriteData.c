////////////////////////////////////////////////////////////
//
//	Write application which accept file name from user and one string from user. Write
//	that string at the end of file.
//	Input : Demo.txt
//	Hello World
//	Output : Write Hello World at the end of Demo.txt file
//
////////////////////////////////////////////////////////////

//Header
#include<stdio.h>
#include<fcntl.h>

//Declaration
void WriteData( char [] , char []);

//Driver Function
int main()
{
	char Name[20] , Str[20];

	printf("Please Enter the Name of File 	:");
	scanf("%s",&Name);

	getchar();

	printf("Please Enter the string 	:");
	scanf("%[^'\n']s",&Str);


	WriteData( Name , Str );

	return 0;
}

////////////////////////////////////////////////////////////
//
//  Name        :WriteData
//  Input       :char [] , char []
//  Returns     :void
//  Description :function which write the string at the end of file
//  Author      :Rushikesh Godase
//  Date        :3 Sep 2020
//
////////////////////////////////////////////////////////////
void WriteData( char fname[] , char Str[]  )
{
	int fd = 0;

	fd = open(fname,O_WRONLY | O_APPEND );

	if( fd == -1)
	{
		printf("Unable to open File.\n");
		return;
	}

	printf("File opens successfully with [%d] fd.\n",fd);


	write(fd , Str , strlen(Str));

	printf("Data Written successfully.\n");

	close(fd);

}


/* OUTPUT :

Please Enter the Name of File   :a.txt
Please Enter the string         :Hello World
File opens successfully with [3] fd.
Data Written successfully.


File : a.txt
Life is beautiful dont waste it for temporary peoples.Hello World

*/