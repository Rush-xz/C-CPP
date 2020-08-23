///////////////////////////////////////////////////////////////////////
//
//      Write a program which accept string from user and copy that
//      characters of that string into another string by removing all white
//      spaces.
//      Input : “Marvel lous Pyth on”
//      Output : “MarvellousPython”
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//Prototype 
int StrCpyX( char * , char *);

//Entry-Point Function
int main()
{
    char Arr[20];
    char Brr[20];       //Empty String

    printf("Enter the string   :");
    scanf("%[^'\n']s",Arr);

    StrCpyX(Arr , Brr);

    printf("String Copied in another by Removing white spaces String : %s",Brr);

    return 0;
}

//Function
int StrCpyX( char *src , char *dest)
{

    if( src == NULL)        //Filter
    {
        return -1;
    }   

    while( *src != '\0' )
    {
        if( *src !=' ')     //Copying Only Characters
        {    
            *dest = *src;        //Copying
            ++dest;    
        }

       ++src;
    }

    *dest = '\0';   //At the end of string we assign null.

    
}

/*  Output :

Enter the string   :Marvel lous Pyth on
String Copied in another by Removing white spaces String : MarvellousPython

*/