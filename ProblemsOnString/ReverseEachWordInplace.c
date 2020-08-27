///////////////////////////////////////////////////////////////////////
//
//      Write a program which accept string from user and reverse each
//      word in place.
//      Input : “Marvellous Multi OS”
//      Output : “suollevraM itluM SO”
//          
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>
#define  IN 1       /*Inside a Word*/
#define  OUT 0      /*Outside a Word*/

//Prototype 
void ReverseEachInplace( char *);

//Entry-Point Function
int main()
{
    char Arr[40];
        
    printf("Enter the string :");
    scanf("%[^'\n']s",Arr);

    ReverseEachInplace(Arr );

    printf("Modified  string :%s",Arr);

    return 0;
}

//Function
void ReverseEachInplace( char *Str)
{
    int Temp = 0;
    char *Start = NULL , *End = NULL , *Tp = NULL;

    Start = Str;
    End = Str;

    if( Str == NULL)        //Filter
    {
        return ;
    }  


    while( *End != '\0' )      
    {
        
        if( *(End+1)==' ' || *(End+1)=='\0' )
        {
            Tp = End;

            while( Start <= Tp )
            {
                Temp = *Start;
                *Start = *Tp;
                *Tp = Temp;

                Start++;
                --Tp;
            }

            if( *(End + 1) != '\0')
            {
                Start = End + 2;
            }
        }

        ++End;

    }


    
}

/*  Output :

Enter the string :Marvellous Multi OS Infosystems
Modified  string :suollevraM itluM SO smetsysofnI

Enter the string :Rushikesh Raju Godase
Modified  string :hsekihsuR ujaR esadoG

*/