///////////////////////////////////////////////////////////////
//
//	Write a recursive program which accept string from user and
//  count white spaces.
//	Input : HE llo WOr lD
//	Output : 3
//
///////////////////////////////////////////////////////////////

//Header
#include<stdio.h>

//Prototype
int CountWhiteSpaces( char * );

//Driver Function
int main()
{
	char Arr[20] = {'\0'};
	char cRet = '\0';

	printf("Enter the string   :");
	scanf("%[^'\n']s",Arr);

	cRet = CountWhiteSpaces( Arr );

	printf("Number of white spaces in string is  :%d.\n",cRet);

	return 0;

}

//Function
int CountWhiteSpaces( char *str )
{
	static int iCnt = 0;

	if( NULL == str )	//Filter
	{
		return -1;
	}

		if( *str != '\0')
		{
			if( *str == ' ')
				++iCnt;

			CountWhiteSpaces( str + 1 );
		}

	return iCnt;

}

/* OUTPUT : 

Enter the string   :He Llo W or  Ld
Number of white spaces in string is  :5.


Enter the string   :Li  zar d on th e  wa  LL
Number of white spaces in string is  :10.


*/