///////////////////////////////////////////////////////////////////////
//
//      Write a program which accept name from user and print that name.
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//Entry-Point Function
int main()
{
    char cName[0] = {};

    printf("Enter Your Full Name :\n");
	scanf("%[^'\n']s",cName);           /*%[^'\n']s would take all Characters
		    						 in a single line as input(Special scanf)*/
    printf("Your name :\n%s",cName);
        
    return 0;

}


/*  Output :
 
Enter Your Full Name :
Rushikesh Raju Godase
Your name :
Rushikesh Raju Godase

*/