///////////////////////////////////////////////////////////////////////
//
//      Write a program which accept 2 strings from user and concat second string
//      after first string. (Implement strcat() function).
//      Input : “Marvellous Infosystems”
//              “Logic Building”
//      Output : “Marvellous Infosystems Logic Building”
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//Prototype 
void Concat( char * , const char *);

//Entry-Point Function
int main()
{
    char Arr[50];
    char Brr[20];       //Empty String

    printf("Enter the First string   :");
    scanf("%[^'\n']s",Arr);

    getchar();

    printf("Enter the Second string   :");
    scanf("%[^'\n']s",Brr);

    Concat(Arr , Brr);

    printf("Concat of two Strings : %s",Arr);

    return 0;
}

//Function
void Concat( char *src , const char *dest)
{

    if( (src == NULL ) || (dest== NULL) )       //Filter
    {
        return;
    } 

    while( *src  != '\0')        //Traverse First String Till End
    {    

        src++;
    }

    while( *dest != '\0' )      //Copy Contents of destination into source
    {

        *src = *dest;

       ++dest;
       ++src;
    }

    *src = '\0';   //At the end of string we assign null.

    
}

/*  Output :

Enter the First string   :Marvellous Infosystems
Enter the Second string   : Logic Building
Concat of two Strings : Marvellous Infosystems Logic Building

*/