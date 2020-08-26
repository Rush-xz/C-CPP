///////////////////////////////////////////////////////////////////////
//
//      Write a program which 2 strings from user and check whether first
//      N contents of two strings are equal or not. (Implement strcmp()
//      function).
//      
//      Input : “Marvellous Infosystems”
//              “Marvellous Logic Building”
//              10
//      Output : TRUE     
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

//Prototype 
BOOL StrCmpX( char * , char * , int );

//Entry-Point Function
int main()
{
    char Arr[50];
    char Brr[20];       //Empty String
    int iSize = 0;
    BOOL bRet = FALSE;

    printf("Enter the First string   :");
    scanf("%[^'\n']s",Arr);

    getchar();

    printf("Enter the Second string   :");
    scanf("%[^'\n']s",Brr);

    getchar();

    printf("Enter the Size of string for Compare   :");
    scanf("%d",&iSize);

    bRet = StrCmpX(Arr , Brr , iSize);

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
BOOL StrCmpX( char *src , char *dest , int iCnt)
{

    if( (src == NULL ) || (dest== NULL) )       //Filter
    {
        printf("Please enter the Both Strings for Compare.");
        return FALSE;
    } 


    while( (*dest != '\0') && (*src != '\0') && (iCnt>0) )  //Compare Contents of src & dest
    {

        if( *src != *dest)
            break;

       ++dest;
       ++src;
       --iCnt;
    }

    if( iCnt==0 )
        return TRUE;
    else
        return FALSE;

}

/*  Output :

Enter the First string   :Marvellous Infosystems
Enter the Second string   :Marvellous Logic Building
Enter the Size of string for Compare   :10
Both Strings are equal.

Enter the First string   :Marvellous Infosystems
Enter the Second string   :Marvellous Logic Building
Enter the Size of string for Compare   :13
Both Strings are not equal.


*/