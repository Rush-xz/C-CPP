///////////////////////////////////////////////////////////////////////
//
//      Write a program which accept string from user and replace each
//      occurrence of first character of each word into capital case.
//      Input : “marvellous infosystems by Piyush khairnar”
//      Output : “Marvellous Infosystems By Piyush Khairnar”
//          
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>
#define IN 1
#define OUT 0

//Prototype 
void StrCap( char *);

//Entry-Point Function
int main()
{
    char Arr[50];
        
    printf("Enter the string :");
    scanf("%[^'\n']s",Arr);

    StrCap(Arr );

    printf("Modified  string  : %s",Arr);

    return 0;
}

//Function
void StrCap( char *Str)
{
    int STATE = 0;

    if( Str == NULL)        //Filter
    {
        return;
    }   


    while( *Str != '\0' )      
    {
        if( (*Str==' ')||(*Str=='\t')||(*Str=='\n') )
        {
            STATE = OUT;
        }
        else if( STATE == OUT )
        {    
            STATE = IN;

            if( (*Str>='a') && (*Str<='z') )
            {
                *Str = *Str - 32;
            }
        }

        ++Str;         
    }
    
}

/*  Output :

Enter the string :marvellous infosystems
Modified  string  : Marvellous Infosystems


Enter the string :Marvellous ifosystems by piyush khairnar
Modified  string  : Marvellous Ifosystems By Piyush Khairnar

*/