//////////////////////////////////////////////////////////////////////////
//
//		Accept division of student from user and depends on the division
//		display exam timing. There are 4 divisions in school as A,B,C,D. Exam
//		of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
//		(Application should be case insensitive)
//		Input : C
//		Output : Your exam at 9.20 AM
//		Input : d
//		Output : Your exam at 10.30 AM
//
///////////////////////////////////////////////////////////////////////////

//Header
#include<stdio.h>

//Prototype
void DisplaySchedule( char );

//Entry-Point Function
int main()
{
	char cValue = '\0';

	printf("Enter the Division	: ");
	scanf("%c",&cValue);

	DisplaySchedule( cValue );

	return 0;
}

//Function
void DisplaySchedule( char chDiv)
{
	if( (chDiv=='a') || (chDiv=='A') )
	{
		printf("Your exam at 7 AM.\n");	
	}
	else if( (chDiv=='b') || (chDiv=='B') )
	{
		printf("Your exam at 8.30 AM.\n");	
	}
	else if( (chDiv=='c') || (chDiv=='C') )
	{
		printf("Your exam at 9.20 AM.\n");	
	}
	else if( (chDiv=='d') || (chDiv=='D') )
	{
		printf("Your exam at 10.30 AM.\n");	
	}
	else
	{
		printf("There is no such Division.\n");
	}
}


/* OUTPUT :

Enter the Division      : A
Your exam at 7 AM.

Enter the Division      : a
Your exam at 7 AM.

Enter the Division      : c
Your exam at 9.20 AM.

Enter the Division      : F
There is no such Division.

*/