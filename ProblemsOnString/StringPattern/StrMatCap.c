////////////////////////////////////////////////////////////////////
//
//		Write a program which accept string from user and print below
//		pattern.
//		Input : “Marvellous”
//		Output : M A R V E L L O U S
//				 M A R V E L L O U S
//				 M A R V E L L O U S
//				 M A R V E L L O U S
//				 M A R V E L L O U S
//				 M A R V E L L O U S
//				 M A R V E L L O U S
//				 M A R V E L L O U S
//				 M A R V E L L O U S
//				 M A R V E L L O U S
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
			if( (*str>='a') && (*str<='z'))
				*str = *str - 32;

				printf("%c\t",*str);
		}

		str = Temp;
		printf("\n");
	}
}


/* OUTPUT :

Enter The string        :Marvellous
M       A       R       V       E       L       L       O       U       S
M       A       R       V       E       L       L       O       U       S
M       A       R       V       E       L       L       O       U       S
M       A       R       V       E       L       L       O       U       S
M       A       R       V       E       L       L       O       U       S
M       A       R       V       E       L       L       O       U       S
M       A       R       V       E       L       L       O       U       S
M       A       R       V       E       L       L       O       U       S
M       A       R       V       E       L       L       O       U       S
M       A       R       V       E       L       L       O       U       S

Enter The string        :ruShKesh
R       U       S       H       K       E       S       H
R       U       S       H       K       E       S       H
R       U       S       H       K       E       S       H
R       U       S       H       K       E       S       H
R       U       S       H       K       E       S       H
R       U       S       H       K       E       S       H
R       U       S       H       K       E       S       H
R       U       S       H       K       E       S       H

*/