///////////////////////////////////////////////////////////////////////
//
//      Write a program which accept string from user and copy that
//      characters of that string into another string in reverse order.
//      Input : “Marvellous Python”
//      Output : “nohtyP suollevraM”
//          
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//Prototype 
int StrCpyRev( char * , char *);

//Entry-Point Function
int main()
{
    char Arr[20];
    char Brr[20];       //Empty String

    printf("Enter the string   :");
    scanf("%[^'\n']s",Arr);

    StrCpyRev(Arr , Brr);

    printf("String Copied in another String in reverse order : %s",Brr);

    return 0;
}

//Function
int StrCpyRev( char *src , char *dest)
{

    char *Temp = src;       //Address of src is stored in other pointer

    if( src == NULL)        //Filter
    {
        return -1;
    }   

    while( *src != '\0')    //Traverse till end of string
    {
        src++;
    }--src;

    while( src != ( Temp - 1) )
    {
       *dest = *src;        //Copying

       --src;
       ++dest;    
    }

    *dest = '\0';   //At the end of string we assign null.

    
}

/*  Output :

Enter the string   :Marvellous Python
String Copied in another String in reverse order : nohtyP suollevraM

*/