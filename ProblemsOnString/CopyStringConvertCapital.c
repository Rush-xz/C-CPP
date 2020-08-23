///////////////////////////////////////////////////////////////////////
//
//      Write a program which accept string from user and copy that
//      characters of that string into another string by converting all small
//      characters into capital case.
//      Input : “Marvellous Python 2”
//      Output : “MARVELLOUS PYTHON 2”
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>
#define Diff 32 /*ASCII table difference between upper case to lower case*/

//Prototype 
int StrCpyCap( char * , char *);

//Entry-Point Function
int main()
{
    char Arr[20];
    char Brr[20];       //Empty String

    printf("Enter the string   :");
    scanf("%[^'\n']s",Arr);

    StrCpyCap(Arr , Brr);

    printf("String copied by converting small case into capital case : %s",Brr);

    return 0;
}

//Function
int StrCpyCap( char *src , char *dest)
{

    if( src == NULL)        //Filter
    {
        return -1;
    }   

    while( *src != '\0' )
    {
        if( (*src >='a') && ( *src <= 'z') )      //Converting small case into Capital case
        {    
            *dest = *src - Diff;        //Copying        
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
String copied by converting small case into capital case : MARVELLOUS PYTHON 2

*/