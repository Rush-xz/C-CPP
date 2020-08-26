///////////////////////////////////////////////////////////////////////
//
//      Accept string from user and reverse the contents of that string by
//      toggling the case.
//      Input : “aCBdef”
//      Output : “FEDcbA”
//          
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//Prototype 
int ReverseStrToggle( char *);

//Entry-Point Function
int main()
{
    char Arr[20];
    char cValue;
        
    printf("Enter the string :");
    scanf("%[^'\n']s",Arr);

    ReverseStrToggle(Arr );

    printf("String Reversed Inplace    : %s",Arr);

    return 0;
}

//Function
int ReverseStrToggle( char *str)
{
    char *End = NULL;
    char *Start = NULL;
    char Temp;


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
        else if( (*End>='a') && (*End<='z') )
            *End = *End - 32;

        ++End;
    }--End;


    
    while( Start <= End )      // N/2    Total = N + N/2
    {

        Temp = *Start;
        *Start = *End;
        *End = Temp;

        ++Start; 
        --End;
        
    }


}

/*  Output :

Enter the string :aCBdef
String Reversed Inplace    : FEDbcA

Enter the string :PuBgI
String Reversed Inplace    : iGbUp

*/