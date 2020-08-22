///////////////////////////////////////////////////////////////////////
//
//      Write a program which accept string from user and accept one
//      character. Return index of first occurrence of that character.
//      Input : “Marvellous Multi OS”
//              M
//      Output : 0
//      Input : “Marvellous Multi OS”
//              W
//      Output : -1
//      Input : “Marvellous Multi OS”
//              e
//      Output : 4
//          
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//Prototype 
int FirstOccuranceInd( char * , char);

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

    iRet = FirstOccuranceInd(Arr , cValue);

    printf("First Occurance of Character %c is   :%3d.\n",cValue,iRet);

    return 0;
}

//Function
int FirstOccuranceInd( char *str , char ch)
{
    int index = -1;

    if( str == NULL)        //Filter
    {
        return -1;
    }

    while( *str != '\0')
    {
        index++;
        if( *str == ch )
        {
            return index;
            break;
        }
        
        ++str;   
    }

    return -1; 

}

/*  Output :

Enter the string :Marvellous Multi OS
Enter the Character :v
First Occurance of Character v is   :  3.

Enter the string :Marvellous
Enter the Character :z
First Occurance of Character z is   : -1.

*/