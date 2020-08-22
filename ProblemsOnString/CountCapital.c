////////////////////////////////////////////////////////////////////////////
//
//		Write a program which accept string from user and count number of
//		capital characters.
//		Input : “Marvellous Multi OS”
//		Output : 4
//
////////////////////////////////////////////////////////////////////////////

//Header
#include<stdio.h>

//Prototype
int CountCapital( char *);

//Entry-Point Function
int main()
{
	char Arr[20];
	int iRet = 0;

	printf("Enter the string	:");
	scanf("%[^'\n']s",Arr);

	iRet = CountCapital( Arr );

	printf("Total Capital Letters	:%3d.\n",iRet);

	return 0;
}


//Function
int CountCapital( char *str )
{
	int iCnt = 0;


	if( str == NULL )		//Filter
	{
		return -1;
	}

	while( *str != '\0')
	{

		if( ( *str >='A') && (*str<='Z') )
			++iCnt;

		str++;
	}

	return  iCnt;
}


/* OUTPUT : 

Enter the string        :Rushikesh Raju Godase
Total Capital Letters   :  3.

Enter the string        :Marvellous Multi OS
Total Capital Letters   :  4.

*/















