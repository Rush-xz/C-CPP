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

    return 0;
}

//Function
int ReverseInplace( char *str)
{
    char *ptr = str;
    char *p =  str;
    char Temp;

    if( str == NULL)        //Filter
    {
        return -1;
    }   

    while( *ptr != '\0')
    {
        ++ptr;
    }--ptr;


    printf("String Reversed Inplace    : ");
    while( *p != '\0' )
    {
        
        if( str < ptr)
        {
            Temp = *str;
            *str = *ptr;
            *ptr = Temp;

            ++str; 
            --ptr;
        }

        printf("%c",*p);

        ++p;
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