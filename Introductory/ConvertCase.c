///////////////////////////////////////////////////////////////////////
//
//      Write a program which accept Character from user and converts 
//        case of that character
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//Prototype 
void DisplayConvert( char );

//Entry-Point Function
int main()
{
    int cValue ='\0' ;
        
    printf("Enter character :\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}

//Function
void DisplayConvert( char cValue)
{
    if( (cValue >= 'A')  && ( cValue <= 'Z') )
    {
            printf("Converted into Lower Case : %c\n",cValue+32);
    }
    else
    {
    		printf("Converted into Upper Case : %c\n",cValue-32);
    }
}

/*  Output :
Enter character :
P
Converted into Lower Case : p

Enter character :
p
Converted into Upper Case : P


*/