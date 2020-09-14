///////////////////////////////////////////////////////////
//
//   Write a program which accept string from user and count
//   number of words in recursive manner.
//   Input : “Marvellous Infosystems Pune” Output : 3 
//
///////////////////////////////////////////////////////////

#include<stdio.h>
#define IN 1
#define OUT 0

int CountWords( char* );

int main()
{
    char Arr[40] = {'\0'};
    int iRet = 0;

    printf("Enter the String.\t:");
    scanf("%[^'\n']s",Arr);

    iRet = CountWords( Arr );
    
    printf("Total number of words from string  :%d.\n",iRet);

    return 0;
}


////////////////////////////////////////////////////////////////
//
//  Name        :CountWords
//  Input       :char *
//  Returns     :int
//  Description :Count Number of words from string using recursion
//  Author      :Rushikesh Godase
//  Date        :9 Sept 2020
//
/////////////////////////////////////////////////////////////////
int  CountWords( char* str)
{

    int STATE = OUT;
    static int iCnt = 0;

    if( *str != '\0')
    {
        if( *str == ' ' || *str == '\t' || *str == '\n')
        {
            STATE = OUT;
        }
        else if( STATE == OUT )
        {
            STATE = IN;
            iCnt++;
        }
        
        CountWords( str + 1);
    }

    return iCnt;

}