///////////////////////////////////////////////////////////////////////
//
//      Write a program which accept string from user reverse that string
//      in place.
//      Input : “abcd”
//      Output : “dcba”
//      Input : “abba”
//      Output : “abba”
//          
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//Prototype 
int ReverseInplace( char *);

//Entry-Point Function
int main()
{
    char Arr[20];
    char cValue;
        
    printf("Enter the string :");
    scanf("%[^'\n']s",Arr);

    ReverseInplace(Arr );

    printf("String Reversed Inplace    : %s",Arr);

    return 0;
}

//Function
int ReverseInplace( char *str)
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
        ++End;
    }--End;


    
    while( Start < End )      // N/2    Total = N + N/2
    {

        Temp = *Start;
        *Start = *End;
        *End = Temp;

        ++Start; 
        --End;
        
    }

    /*while( *p != '\0')
    {   
        printf("%c",*p);
        ++p;
    }*/
/*Here actual changes at address location are happened.*/


}

/*  Output :

Enter the string :abcd
String Reversed Inplace    : dcba

Enter the string :abba
String Reversed Inplace    : abba

Enter the string :Rushikesh
String Reversed Inplace    : hsekihsuR

*/