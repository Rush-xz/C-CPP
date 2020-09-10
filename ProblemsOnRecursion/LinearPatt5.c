///////////////////////////////////////////////////////////////
//
//	Write a recursive program which display below pattern.
//	Output : a b c d e f
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
	static char  ch = 'a';

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
a  b  c  d  e  f

Enter the Number.
18
a  b  c  d  e  f  g  h  i  j  k  l  m  n  o  p  q  r

*/