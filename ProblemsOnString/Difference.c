////////////////////////////////////////////////////////////////////////////
//
//		Write a program which accept string from user and return
//		difference between frequency of small characters and frequency of
//		capital characters.
//		Input : “RushikesH”
//		Output : 5 (7-2)
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
	int iCntS = 0 , iCntC = 0;


	if( str == NULL )		//Filter
	{
		return -1;
	}

	while( *str != '\0')
	{

		if( ( *str >='a') && (*str<='z') )
			++iCntS;
		else if( (*str>='A') && (*str<='Z') )
			++iCntC ;


		str++;
	}

	return  (iCntS - iCntC);
}


/* OUTPUT : 

Enter the string        :RushikesH
Total Capital Letters   :  5.


*/















