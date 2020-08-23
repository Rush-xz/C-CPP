///////////////////////////////////////////////////////////////////////
//
//      Write a program which accept string from user and copy small
//      characters of that string into another string.
//      Input : “Marvellous Multi OS”
//      Output : “arvellous ulti”
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//Prototype 
int CopySmall( char * , char *);

//Entry-Point Function
int main()
{
    char Arr[20];
    char Brr[20];       //Empty String

    printf("Enter the string   :");
    scanf("%[^'\n']s",Arr);

    CopySmall(Arr , Brr);

    printf("Small characters Copied in another String : %s",Brr);

    return 0;
}

//Function
int CopySmall( char *src , char *dest)
{

    if( src == NULL)        //Filter
    {
        return -1;
    }   

    while( *src != '\0' )
    {
        if( (*src>='a') && (*src<='z') || ( *src == ' ') )
        {
            *dest = *src;        //Copying
            dest++;
        }

       ++src;
    }

    *dest = '\0';   //At the end of string we assign null.

    
}

/*  Output :

Enter the string   :Marvellous Multi OS
Small characters Copied in another String : arvellous ulti

*/