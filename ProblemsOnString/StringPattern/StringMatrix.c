////////////////////////////////////////////////////////////////////
//
//		Write a program which accept string from user and print below
//		pattern.
//		Input : “Marvellous”
//		Output : M a r v e l l o u s
//				 M a r v e l l o u s
//				 M a r v e l l o u s
//				 M a r v e l l o u s
//				 M a r v e l l o u s
//				 M a r v e l l o u s
//				 M a r v e l l o u s
//				 M a r v e l l o u s
//				 M a r v e l l o u s
//				 M a r v e l l o u s
//		Input : “PPA”
//		Output : P P A
//				 P P A
//				 P P A
//
////////////////////////////////////////////////////////////////////

//Header
#include<stdio.h>

//Prototype
void Pattern(char *);


//Entry-Point Function
int main()
{
	char Arr[20];

	printf("Enter The string	:");
	scanf("%[^'\n']s",Arr);

	Pattern( Arr );

	return 0;
}

//Function
void Pattern( char *str )
{
	int i=0 , j=0 , iSize = 0;
	char *Temp = str;

	if( str == NULL )		//Filter
	{
		return;
	}

	while( *(str+1) != '\0' )	//Traverse Till Last character
	{
		iSize++;
		str++;
	}


	str = Temp;
	for(i=0; i<=iSize; ++i)
	{
		for(j=0; j<=iSize; ++j , str++)
		{
			printf("%c\t",*str);
		}

		str = Temp;
		printf("\n");
	}
}


/* OUTPUT :

Enter The string        :Marvellous
M       a       r       v       e       l       l       o       u       s
M       a       r       v       e       l       l       o       u       s
M       a       r       v       e       l       l       o       u       s
M       a       r       v       e       l       l       o       u       s
M       a       r       v       e       l       l       o       u       s
M       a       r       v       e       l       l       o       u       s
M       a       r       v       e       l       l       o       u       s
M       a       r       v       e       l       l       o       u       s
M       a       r       v       e       l       l       o       u       s
M       a       r       v       e       l       l       o       u       s

Enter The string        :PPA
P       P       A
P       P       A
P       P       A


*/