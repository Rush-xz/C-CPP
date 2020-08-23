///////////////////////////////////////////////////////////////////////
//
//      Write a program which accept string from user and copy the
//      contents of that string into another string. (Implement strcpy()
//      function)
//      Input : “Marvellous Multi OS”
//      Output : “Marvellous Multi OS” in another string
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

    printf("String Copied in another String : %s",Brr);

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
       *dest = *src;        //Copying

       ++src;
       ++dest;    
    }

    *dest = '\0';   //At the end of string we assign null.

    
}

/*  Output :

Enter the string   :Marvellous Multi OS
String Copied in another String : Marvellous Multi OS

Enter the string   :Imperial College
String Copied in another String : Imperial College

*/