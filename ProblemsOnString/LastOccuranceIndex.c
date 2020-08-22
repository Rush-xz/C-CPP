///////////////////////////////////////////////////////////////////////
//
//      Write a program which accept string from user and accept one
//      character. Return index of first occurrence of that character.
//      Input : “Marvellous Multi OS”
//              M
//      Output : 11
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
int LastOccuranceInd( char * , char);

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

    iRet = LastOccuranceInd(Arr , cValue);

    printf("Last Occurance of Character %c is   :%3d.\n",cValue,iRet);

    return 0;
}

//Function
int LastOccuranceInd( char *str , char ch)
{
    int index = -1 , LastOcc = -1;

    if( str == NULL)        //Filter
    {
        return -1;
    }

    while( *str != '\0')
    {
        index++;
        if( *str == ch )
        {
            LastOcc = index;
        }
        
        ++str;   
    }

    return LastOcc; 

}

/*  Output :

Enter the string :Marvellous Multi OS
Enter the Character :M
Last Occurance of Character M is   : 11.

Enter the string :MArvellous
Enter the Character :w
Last Occurance of Character w is   : -1.

Enter the string :Marvellous Infosysytems
Enter the Character :u
Last Occurance of Character u is   :  8.

*/