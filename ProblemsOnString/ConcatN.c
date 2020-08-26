///////////////////////////////////////////////////////////////////////
//
//     Write a program which accepts 2 strings from user and StrNCatX N
//      characters of second string after first string.Value of N should be
//      accepted from user. (Implement strncat() function).
//      Note : If third parameter is greater than the size of second string then
//      StrNCatX whole string after first string.
//      Input : “Marvellous Infosystems”
//              “Logic Building”
//              5
//      Output : “Marvellous Infosystems Logic”
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//Prototype 
void StrNCatX( char * , char * , int );

//Entry-Point Function
int main()
{
    char Arr[50];
    char Brr[20];       //Empty String
    int iValue = 0;

    printf("Enter the First string   :");
    scanf("%[^'\n']s",Arr);

    getchar();

    printf("Enter the Second string   :");
    scanf("%[^'\n']s",Brr);

    getchar();

    printf("Enter the Size of characters for concat   :");
    scanf("%d",&iValue);

    StrNCatX(Arr , Brr , iValue);

    printf("StrNCatX of two Strings : %s",Arr);

    return 0;
}

//Function
void StrNCatX( char *src , char *dest , int iSize)
{

    if( (src == NULL) || (dest == NULL) )       //Filter
    {
        return;
    } 

    while( *src  != '\0')        //Traverse First String Till End
    {    
        if( *(src + 1) == '\0')        //Adding space at the end
        {
            *src = ' ';
        }

        src++;
    }

    while( (*dest != '\0') && (iSize != 0) )      //Copy Contents of destination into source
    {
        
        *src = *dest;

       ++dest;
       ++src;
       --iSize;
    }

    *src = '\0';   //At the end of string we assign null.

    
}

/*  Output :

Enter the First string   :Marvellous Infosytems
Enter the Second string   :Logic Building
Enter the Size of characters for concat   :5
StrNCatX of two Strings : Marvellous Infosytems Logic

*/