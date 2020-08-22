////////////////////////////////////////////////////////////////////////////
//
//		Write a program which accept string from user and count number of
//		small characters.
//		Input : “Marvellous”
//		Output : 9
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

		if( ( *str >='a') && (*str<='z') )
			++iCnt;

		str++;
	}

	return  iCnt;
}


/* OUTPUT : 

EEnter the string        :Rushikesh Godase
Total Capital Letters   : 13.

Enter the string        :Marvellous
Total Capital Letters   :  9.

*/















