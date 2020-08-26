///////////////////////////////////////////////////////////////////////
//
//      Write a program which accept string from user count number of
//      words from string
//      Input : “Marvellous Multi OS”
//      Output : 3
//      Input : “ Marvellous Multi OS Pune”
//      Output : 4
//          
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>
#define  IN 1       /*Inside a Word*/
#define  OUT 0      /*Outside a Word*/

//Prototype 
int WordCount( char *);

//Entry-Point Function
int main()
{
    char Arr[30];
    int iRet = 0;
        
    printf("Enter the string :");
    scanf("%[^'\n']s",Arr);

    iRet = WordCount(Arr );

    printf("Number of words in strings  : %d",iRet);

    return 0;
}

//Function
int WordCount( char *Str)
{
    int iCnt = 0 , STATE = 0;

    if( Str == NULL)        //Filter
    {
        return -1;
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
            ++iCnt;
        }

        ++Str;         
    }

    return iCnt;

    
}

/*  Output :

Enter the string :Marvellous Multi OS
Number of words in strings  : 3


Enter the string :Marvellous      Multi   OS
Number of words in strings  : 3

Enter the string :Marvellous     Multi   OS  Pune
Number of words in strings  : 4

*/