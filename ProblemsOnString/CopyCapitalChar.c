///////////////////////////////////////////////////////////////////////
//
//      Write a program which accept string from user and copy capital
//      characters of that string into another string.
//      Input : “Marvellous Multi OS”
//      Output : “MMOS”
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//Prototype 
int CopyCapital( char * , char *);

//Entry-Point Function
int main()
{
    char Arr[20];
    char Brr[20];       //Empty String

    printf("Enter the string   :");
    scanf("%[^'\n']s",Arr);

    CopyCapital(Arr , Brr);

    printf("Capital characters Copied in another String : %s",Brr);

    return 0;
}

//Function
int CopyCapital( char *src , char *dest)
{

    if( src == NULL)        //Filter
    {
        return -1;
    }   

    while( *src != '\0' )
    {
        if( (*src>='A') && (*src<='Z') )
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
Capital Characters Copied in another String : MMOS

*/