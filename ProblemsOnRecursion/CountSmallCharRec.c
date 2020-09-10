///////////////////////////////////////////////////////////////
//
//	Write a recursive program which accept string from user and
//  count number of small characters.
//	Input : HElloWOrlD
//	Output : 5
//
///////////////////////////////////////////////////////////////

//Header
#include<stdio.h>

//Prototype
int CountSmallR( char * );

//Driver Function
int main()
{
	char Arr[20] = {'\0'};
	char cRet = '\0';

	printf("Enter the string   :");
	scanf("%s",Arr);

	cRet = CountSmallR( Arr );

	printf("Number of small characters in string is  :%d.\n",cRet);

	return 0;

}

//Function
int CountSmallR( char *str )
{
	static int iCnt = 0;

	if( NULL == str )	//Filter
	{
		return -1;
	}

		if( *str != '\0')
		{
			if( (*str>='a') && (*str<='z') )
				++iCnt;

			CountSmallR( str + 1 );
		}

	return iCnt;

}

/* OUTPUT : 

Enter the string   :HElloWorlD
Number of small characters in string is  :6.


Enter the string   :InTerStELLer
Number of small characters in string is  :6.

*/