///////////////////////////////////////////////////////////
//
//  Write a program which accept number from user and print
//  that many number of elements from Fibonacci series.  
//  Input : 6 Output : 0 1 1 2 3 5
//  
///////////////////////////////////////////////////////////

#include<stdio.h>

void Fibonacci( int );

int main()
{
    int iValue = 0;

    printf("Enter the Number.\t:");
    scanf("%d",&iValue);

    if( iValue < 0)
    {
        iValue = -iValue;
    }

    Fibonacci( iValue );

    return 0;
}


////////////////////////////////////////////////////////////////
//
//  Name        :Fibonacci
//  Input       :int
//  Returns     :void
//  Description :Fibonacci Series using recursion
//  Author      :Rushikesh Godase
//  Date        :9 Sept 2020
//
/////////////////////////////////////////////////////////////////
void  Fibonacci( int iNo)
{   
    /*Initialised only once*/
    static int iFirst = 0 , iSecond = 1 , iThird = 1;

    if( iNo != 0)
    {
        printf("%d ", iFirst);

        iThird = iFirst + iSecond;
        iFirst = iSecond;
        iSecond = iThird;

        --iNo;
        Fibonacci( iNo );
    }

}

/*  OUTPUT :

Enter the Number.       :6
0 1 1 2 3 5

Enter the Number.       :15
0 1 1 2 3 5 8 13 21 34 55 89 144 233 377

*/