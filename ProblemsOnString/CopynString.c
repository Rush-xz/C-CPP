///////////////////////////////////////////////////////////////////////
//
//      Write a program which accept string from user and also size into variable 
//      that would you want to copy the contents of that string into 
//      another string. (Implement strncpy()
//      function)
//      Input : “Marvellous Multi OS”
//              10
//      Output : “Marvellous
//      Note : If third parameter is greater than the size of source string then
//      copy whole string into destination.
//          
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//Prototype 
int StrNCpyX( char * , char * , int);

//Entry-Point Function
int main()
{
    char Arr[20];
    char Brr[20];       //Empty String
    int iSize = 0;

    printf("Enter the string   :");
    scanf("%[^'\n']s",Arr);

    //getchar(); /*Here getchar() is not necessary as we are taking size in int*/

    printf("Enter the Size of string to be copy  :");
    scanf("%d",&iSize); 

    StrNCpyX(Arr , Brr , iSize);

    printf("String Copied in another String : %s",Brr);

    return 0;
}

//Function
int StrNCpyX( char *src , char *dest , int iCnt)
{

    if( src == NULL)        //Filter
    {
        return -1;
    }   

    while( (*src != '\0') && (iCnt > 0) )
    {
       *dest = *src;        //Copying

       ++src;
       ++dest;    
       --iCnt;  
    }

    *dest = '\0';   //At the end of string we assign null.

    
}

/*  Output :

Enter the string   :Marvellous Multi OS
Enter the Size of string to be copy  :10
String Copied in another String : Marvellous

Enter the string   :Marvellous Multi OS
Enter the Size of string to be copy  :12
String Copied in another String : Marvellous M

*/