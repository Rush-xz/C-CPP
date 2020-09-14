///////////////////////////////////////////////////////////////
//
//	Write a recursive program which accept string from user and
//  count number of characters.
//	Input : Hello
//	Output : 5
//
///////////////////////////////////////////////////////////////

//Header
#include<stdio.h>

//Prototype
int StrlenR( char * );

//Driver Function
int main()
{
	char Arr[20] = {'\0'};
	char cRet = '\0';

	printf("Enter the string   :");
	scanf("%s",Arr);

	cRet = StrlenR( Arr );

	printf("Length of string is  :%d.\n",cRet);

	return 0;

}

////////////////////////////////////////////////////////////
//
//  Name        :StrlenR
//  Input       :char *
//  Returns     :int
//  Description :computes string length by using recursion
//  Author      :Rushikesh Godase
//  Date        :9 Sep 2020
//
////////////////////////////////////////////////////////////
int StrlenR( char *str )
{
	static int iLen = 0;

	if( NULL == str )	//Filter
	{
		return -1;
	}

		if( *str != '\0')
		{
			iLen++;

			StrlenR( str + 1 );
		}

	return iLen;

}

/* OUTPUT : 

Enter the string   :Hello
Length of string is  :5.


Enter the string   :GoogleINC
Length of string is  :9.

*/