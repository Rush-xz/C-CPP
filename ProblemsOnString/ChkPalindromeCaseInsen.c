///////////////////////////////////////////////////////////////////////
//
//      Accept string from user and check whether the string is palindrome
//      or not without considering its case.
//      Input : “1abccBA1”
//      Output : TRUE
//          
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

//Prototype 
BOOL StrPallindrome( char *);

//Entry-Point Function
int main()
{
    char Arr[20];
    BOOL bRet = FALSE;
        
    printf("Enter the string :");
    scanf("%[^'\n']s",Arr);

    bRet = StrPallindrome(Arr );

    if( bRet == TRUE )
        printf("It is palindrome.\n");
    else
        printf("It is not palindrome.\n");

    return 0;
}

//Function
BOOL StrPallindrome( char *str)
{
    char *End = NULL;
    char *Start = NULL;

    End = str;
    Start = str;

    if( str == NULL)        //Filter
    {
        return -1;
    }   

    while( *End != '\0')   //N
    {

        if( (*End>='A') && (*End<='Z') )
            *End = *End + 32;

        ++End;
    }--End;


    
    while( Start <= End )      // N/2    Total = N + N/2
    {

        if( *Start != *End )
        {
            return FALSE;
            break;
        }

        ++Start; 
        --End;
        
    }

    return TRUE;

}

/*  Output :

Enter the string :1abccBA1
It is palindrome.

Enter the string :ada
It is palindrome.

Enter the string :MaDAm
It is palindrome.

*/