///////////////////////////////////////////////////////////////////////
//
//      Write a program which accept string from user and accept one
//      character. Check whether that character is present in string or not.
//      Input : “Marvellous Multi OS”
//              e
//      Output : TRUE
//      Input : “Marvellous Multi OS”
//              W
//      Output : FALSE
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

//Prototype 
BOOL ChkChar( char * , char);

//Entry-Point Function
int main()
{
    char Arr[20];
    char cValue;
    BOOL bRet = FALSE;
        
    printf("Enter the string :");
    scanf("%[^'\n']s",Arr);

    getchar();          /*The '\n' character is still left on the input stream 
                        after the first call to scanf is completed, so the 
                        second call to scanf() reads it in. Use getchar().*/
    printf("Enter the Character :");
    scanf("%c",&cValue);

    bRet = ChkChar(Arr , cValue);

    if( bRet == TRUE)
    {
        printf("Character Found.\n");
    }
    else
    {
        printf("Character not  Found.\n");
    }

    return 0;
}

//Function
BOOL ChkChar( char *str , char ch)
{

    if( str == NULL)        //Filter
    {
        return -1;
    }

    while( *str != '\0')
    {
        if( *str == ch )
        {
            //return TRUE;      //Dont write return in loop
           break;
        }
        
        ++str;   
    }

    if( *str == '\0' )
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }

}

/*  Output :

Enter the string :Rushikesh
Enter the Character :e
Character Found.

Enter the string :Marvellous Multi OS
Enter the Character :w
Character not  Found.

*/