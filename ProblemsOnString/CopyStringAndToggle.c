///////////////////////////////////////////////////////////////////////
//
//      Write a program which accept string from user and copy that
//      characters of that string into another string by toggling the case.
//      Input : “Marvellous Python 2”
//      Output : “mARVELLOUS pYTHON 2”
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>
#define Diff 32 /*ASCII table difference between upper case to lower case*/

//Prototype 
int StrCpyToggle( char * , char *);

//Entry-Point Function
int main()
{
    char Arr[20];
    char Brr[20];       //Empty String

    printf("Enter the string   :");
    scanf("%[^'\n']s",Arr);

    StrCpyToggle(Arr , Brr);

    printf("String Toggled and copied  : %s",Brr);

    return 0;
}

//Function
int StrCpyToggle( char *src , char *dest)
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
        else if( (*src >='a') && ( *src <= 'z') ) //Converting Small case into Capital case
        {
            *dest = *src - Diff;
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
String Toggled and copied  : mARVELLOUS pYTHON 2

*/