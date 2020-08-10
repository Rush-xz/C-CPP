///////////////////////////////////////////////////////////////////////
//
//      Write a program which accept one character from user and check whether
//      that character is vowel ( a , e ,i , o , u) or not
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

//Prototype 
BOOL ChkVowel( char );

//Entry-Point Function
int main()
{
    int cValue ='\0';
    BOOL bRet = FALSE;
        
    printf("Enter character :\n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if( bRet == TRUE)
    {
        printf("%c is vowel.\n",cValue);
    }
    else
    {
        printf("%c is not vowel.\n",cValue);
    }

    return 0;
}

//Function
BOOL ChkVowel( char cValue)
{


    if((cValue=='a')||(cValue=='A')||(cValue=='e')||(cValue=='E')||(cValue=='i')||(cValue=='I')||(cValue=='o')||(cValue=='O')||(cValue=='u')||(cValue=='U'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

/*  Output :
Enter character :
F
F is not vowel.

Enter character :
O
O is vowel.


*/