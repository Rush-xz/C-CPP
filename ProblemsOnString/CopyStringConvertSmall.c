///////////////////////////////////////////////////////////////////////
//
//      Write a program which accept string from user and copy that
//      characters of that string into another string by converting all capital
//      characters into small case.
//      Input : “Marvellous Python 2”
//      Output : “marvellous python 2”
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>
#define Diff 32 /*ASCII table difference between upper case to lower case*/

//Prototype 
int StrCpySmall( char * , char *);

//Entry-Point Function
int main()
{
    char Arr[20];
    char Brr[20];       //Empty String

    printf("Enter the string   :");
    scanf("%[^'\n']s",Arr);

    StrCpySmall(Arr , Brr);

    printf("String copied by converting Capital case into small case : %s",Brr);

    return 0;
}

//Function
int StrCpySmall( char *src , char *dest)
{

    if( src == NULL)        //Filter
    {
        return -1;
    }   

    while( *src != '\0' )
    {
        if( (*src >='A') && ( *src <= 'Z') )   //Converting Capital case into small case
        {    
            *dest = *src + Diff;        //Copying        
        }
        else
        {
            *dest = *src;
        }

       ++dest;
       ++src;
    }

    *dest = '\0';   //At the end of string we assign null.

    
}

/*  Output :

Enter the string   :Marvellous Python 2
String copied by converting Capital case into small case : marvellous python 2

*/