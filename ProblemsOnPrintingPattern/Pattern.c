///////////////////////////////////////////////////////////////////////
//
//      Accept number from user and display below pattern.
//      Input : 5
//      Output : A B C D E
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//Prototype
void Pattern( int iNo);

//Entry-Point Function
int main()
{
    int iValue = 0 ;
        
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}

//function 
void Pattern( int iNo)
{
    char i = 'A';

    if( iNo < 0)       //Filter
    {
        iNo = -iNo;
    }

    while( iNo != 0)
    {

        printf("%c\t",i++);

        iNo--;
    }    
    
}

/*  Output :
 
Enter Number :
5
A       B       C       D       E


*/