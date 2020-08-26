///////////////////////////////////////////////////////////////////////
//
//      Write a program which 2 strings from user and check whether
//      contents of two strings are equal or not. (Implement strcmp()
//      function).
//      Input : “Marvellous Infosystems”
//               “Marvellous Infosystems”
//      Output : TRUE      
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

//Prototype 
BOOL StrCmpX( char * , char *);

//Entry-Point Function
int main()
{
    char Arr[50];
    char Brr[20];       //Empty String
    BOOL bRet = FALSE;

    printf("Enter the First string   :");
    scanf("%[^'\n']s",Arr);

    getchar();

    printf("Enter the Second string   :");
    scanf("%[^'\n']s",Brr);

    bRet = StrCmpX(Arr , Brr);

    if( bRet == TRUE )
    {
        printf("Both Strings are equal.\n");
    }
    else
    {
        printf("Both Strings are not equal.\n");
    }

    return 0;
}

//Function
BOOL StrCmpX( char *src , char *dest)
{

    if( (src == NULL ) || (dest== NULL) )       //Filter
    {
        printf("Please enter the Both Strings for Compare.");
        return FALSE;
    } 


    while( (*dest != '\0') && (*src != '\0') )  //Compare Contents of src & dest
    {

        if( *src != *dest)
            break;

       ++dest;
       ++src;
    }

    if( (*dest == '\0') && (*src == '\0') )
        return TRUE;
    else
        return FALSE;

}

/*  Output :

Enter the First string   :Marvellous Infosystems
Enter the Second string   :Marvellous Infosystems
Both Strings are equal.

Enter the First string   :Marvellous Infosystems
Enter the Second string   :Marvellous
Both Strings are not equal.

*/