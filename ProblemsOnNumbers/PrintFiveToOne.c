/////////////////////////////////////////////////////////////
//
//      Program to Print Five To One Numbers on screen
//
/////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//function which Prints Five To One Numbers
int Display()
{
    int i=0;

        for( i=5; i>0; --i)
        {
            printf("%5d",i);
        }

}

//Entry-Point Function
int main()
{
    Display();

    return 0;

}


/*  Output : 
Life
Life
Life
Life
Life
*/