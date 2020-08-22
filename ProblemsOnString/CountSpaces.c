////////////////////////////////////////////////////////////////////////////
//
//		Write a program which accept string from user and count number of
//		white spaces
//		Input : “MarvellouS”
//		Output : 0
//		Input : “MarvellouS Infosystems”
//		Output : 1
//		Input : “MarvellouS Infosystems by Piyush Manohar Khairnnar”
//		Output : 5
//
////////////////////////////////////////////////////////////////////////////

//Header
#include<stdio.h>

//Prototype
int  CountSpaces( char *);

//Entry-Point Function
int main()
{
	char Arr[20];
	int iRet = 0;

	printf("Enter the string	:");
	scanf("%[^'\n']s",Arr);
  
	iRet = CountSpaces( Arr );

	printf("Total Number Spaces in a string	:%3d.\n",iRet);

	return 0;
}


//Function
int CountSpaces( char *str )
{
	int iCnt = 0;

	if( str == NULL )		//Filter
	{
		return -1;
	}


	while( *str != '\0')
	{
		if( *str ==' ' )
			++iCnt;

		str++;
	}

	return iCnt;

}


/* OUTPUT : 

Enter the string        :Marvellous
Total Number Spaces in a string :  0.

Enter the string        :Marvellous Infosystems
Total Number Spaces in a string :  1.

Enter the string        :Marvellous Infosystems by Piyush manohar khairnar
Total Number Spaces in a string :  5.

*/















