///////////////////////////////////////////////////////////////
//
//	Write a recursive program which display below pattern.
//	Output : A B C D E F
//
///////////////////////////////////////////////////////////////

//Header
#include<stdio.h>

//Prototype
void DisplayR( int );

//Driver Function
int main()
{
	int iValue = 0;

	printf("Enter the Number.\n");
	scanf("%d",&iValue);

	DisplayR( iValue );

}

//Function
void DisplayR( int iNo)
{
	static char  ch = 'A';

		if( iNo != 0)
		{
			printf("%c  ",ch);
				ch++;
				--iNo;
			DisplayR( iNo );
		}

}

/* OUTPUT : 

Enter the Number.
6
A  B  C  D  E  F

Enter the Number.
15
A  B  C  D  E  F  G  H  I  J  K  L  M  N  O

*/