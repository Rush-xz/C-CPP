/////////////////////////////////////////////////////////////
//
//      Program to Print Five Times "Life" on screen
//
/////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//Prototype
int Display();

//Entry-Point Function
int main()
{
    Display();

    return 0;

}

//function which Prints Five Times
int Display()
{
    int i=0;

        for( i=0; i<5; i++)
        {
            printf("Life\n");
        }

}


/*  Output : 
Life
Life
Life
Life
Life
*/