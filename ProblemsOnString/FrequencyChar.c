///////////////////////////////////////////////////////////////////////
//
//      Write a program which accept string from user and accept one
//      character. Return frequency of that character.
//      Input : “Marvellous Multi OS”
//              M
//      Output : 2
//      Input : “Marvellous Multi OS”
//              W
//      Output : 0
//          
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//Prototype 
int Frequency( char * , char);

//Entry-Point Function
int main()
{
    char Arr[20];
    char cValue;
    int iRet = 0;
        
    printf("Enter the string :");
    scanf("%[^'\n']s",Arr);

    getchar();          /*The '\n' character is still left on the input stream 
                        after the first call to scanf is completed, so the 
                        second call to scanf() reads it in. Use getchar().*/
    printf("Enter the Character :");
    scanf("%c",&cValue);

    iRet = Frequency(Arr , cValue);

    printf("Frequency of Character%c is   :%3d.\n",cValue,iRet);

    return 0;
}

//Function
int Frequency( char *str , char ch)
{
    int iCnt = 0;

    if( str == NULL)        //Filter
    {
        return -1;
    }   

    while( *str != '\0')
    {
        if( *str == ch )
        {
            iCnt++;
        }
        
        ++str;   
    }

    return iCnt;
}

/*  Output :

Enter the string :Marvellous Multi OS
Enter the Character :M
Frequency of CharacterM is   :  2.

Enter the string :Rushikesh
Enter the Character :p
Frequency of Characterp is   :  0.


*/