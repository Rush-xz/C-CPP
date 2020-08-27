///////////////////////////////////////////////////////////////////////
//
//     Write a program which accept string from user and copy the
//      contents into another string by removing extra white spaces.
//      Input : “Marvel lous  multi  OS”
//      Output : “Marvellous multi OS”     
//          
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//Prototype 
int StrCpyX( char * , char *);

//Entry-Point Function
int main()
{
    char Arr[100];
    char Brr[100];       //Empty String

    printf("Enter the string   :");
    scanf("%[^'\n']s",Arr);

    StrCpyX(Arr , Brr);

    printf("String Copied in another String : %s",Brr);

    return 0;
}

//Function
int StrCpyX( char *src , char *dest)
{
    char LastChar;
    int iCnt = 0;

    if( src == NULL)        //Filter
    {
        return -1;
    }   

    while( *src != '\0' )
    {
        if( *src == ' ')
        {   
            iCnt++;
        }

        if( iCnt <= 1)
        {    
            *dest = *src;
            ++dest;
        }

        if( *(src+1) != ' ')
        {
           iCnt = 0;
        }

       ++src;
           
    }

    *dest = '\0';   //At the end of string we assign null.

    
}

/*  Output :

Enter the string   :Marvellous          Infosystems              Multi      OS
String Copied in another String : Marvellous Infosystems Multi OS

Enter the string   :Rushikesh                   Raju                   Godase
String Copied in another String : Rushikesh Raju Godase


*/