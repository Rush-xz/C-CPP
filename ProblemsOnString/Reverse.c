////////////////////////////////////////////////////////////////////////////
//
//		Write a program which accept string from user and display it inn
//		reverse order.
//		Input : “Rushikesh”
//		Output : “hsekihsuR”
//
////////////////////////////////////////////////////////////////////////////

//Header
#include<stdio.h>

//Prototype
int Reverse( char *);

//Entry-Point Function
int main()
{
	char Arr[20];

	printf("Enter the string	:");
	scanf("%[^'\n']s",Arr);

	Reverse( Arr );

	return 0;
}


//Function
int Reverse( char *str )
{
	char *Temp = str;	/* Address in  str is store in Temp variable */

	if( str == NULL )		//Filter
	{
		return -1;
	}

	printf("In  Reverse order	:");

	while( *str != '\0')	//Iterate till NULL is not occur
	{

		str++;

	}--str;

	while( str != (Temp-1) )	//Iterate till address in Temp-1 is not occur
	{

		printf("%c",*str);

		--str;
	}

/*Here we only displayed in reverse order actual changes at address location are not happened.*/

}


/* OUTPUT : 

Enter the string        :Rushikesh
In  Reverse order       :hsekihsuR

Enter the string        :Rushikesh Raju Godase
In  Reverse order       :esadoG ujaR hsekihsuR

*/















