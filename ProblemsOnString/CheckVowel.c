///////////////////////////////////////////////////////////////////////
//
//      Write a program which accept string from user and check whether
//      it contains vowels in it or not.
//      Input : “marvellous”
//      Output : TRUE
//      Input : “Demo”
//      Output : TRUE
//      Input : “xyz”
//      Output : FALSE
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

//Prototype 
BOOL ChkVowel( char *);

//Entry-Point Function
int main()
{
    char Arr[20];
    BOOL bRet = FALSE;
        
    printf("Enter the string :\n");
    scanf("%[^'\n']s",Arr);

    bRet = ChkVowel(Arr);

    if( bRet == TRUE)
    {
        printf("String Contains vowel in it.\n");
    }
    else
    {
        printf("String does not contain vowel in it.\n");
    }

    return 0;
}

//Function
BOOL ChkVowel( char *str)
{

    if( str == NULL)        //Filter
    {
        return -1;
    }

    while( *str != '\0')
    {
        if((*str=='a')||(*str=='A')||(*str=='e')||(*str=='E')||(*str=='i')||(*str=='I')||(*str=='o')||(*str=='O')||(*str=='u')||(*str=='U'))
        {
            return TRUE;
            break;
        }
        
        ++str;   
    }

    return FALSE;
}

/*  Output :

Enter the string :
Rushikesh
String Contains vowel in it.

Enter the string :
xyz
String does not contain vowel in it.


*/