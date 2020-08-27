///////////////////////////////////////////////////////////////////////
//
//      Write a program which accept string from user and return length of
//      largest word.
//      Input : “Marvellous Multi OS Infosystems”
//      Output : 11
//          
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>
#define  IN 1       /*Inside a Word*/
#define  OUT 0      /*Outside a Word*/

//Prototype 
int LargestWord( const char *);

//Entry-Point Function
int main()
{
    char Arr[30];
    int iRet = 0;
        
    printf("Enter the string :");
    scanf("%[^'\n']s",Arr);

    iRet = LargestWord(Arr );

    printf("Length of largest word in string  : %d",iRet);

    return 0;
}

//Function
int LargestWord( const char *Str)
{
    int iMax[10] = {0} , STATE = 0 , i=0 , largest = 0;

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
            i++;
            iMax[i]++;
        }
        else
        {
            iMax[i]++;
        }

        ++Str;         
    }

    largest = iMax[1];
    for( i=0; i<=10; i++)
    {   
        if( iMax[i] > largest )
        {
            largest = iMax[i];
        }
    }

    return largest;
    
}

/*  Output :

Enter the string :Marvellous Multi OS InfoSystems
Length of largest word in string  : 11

*/