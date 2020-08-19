///////////////////////////////////////////////////////////////////////
//
//    Accept N numbers from user and display all such elements which are
//      even and divisible by 5.
//      Input : N : 6
//      Elements : 85 66 3 80 93 88
//      Output : 80
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>
#include<stdlib.h>

//Prototype
void DivisibleBy( int * , int , int);

//Entry-Point Function
int main()
{
    int iSize = 0 , iCnt = 0 , iDivisor = 0;
    int *p = NULL;

    printf("Enter the Number of Elements :\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize*sizeof(int));

    if( NULL == p )
    {
        printf("Unable to Allocate Memory.\n");
        return -1;
    }

    printf("Enter the Elements :\n");
    for( iCnt=0; iCnt<iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    printf("Enter the Divisor : ");
    scanf("%d",&iDivisor);


     DivisibleBy( p , iSize , iDivisor);

    free(p);

    return 0;
}

//function 
void DivisibleBy( int Arr[] , int iLength , int iDivisor)
{
    int  i=0;

    printf("Numbers From Array which are Even and divisble by %d is :",iDivisor);
    for( i=0; i<iLength; i++)
    {   
        if(  ((Arr[i] % 2) == 0) && ((Arr[i] % iDivisor) == 0) )
        {
            printf("%d\t",Arr[i]);
        }       
    }

}



/*  Output :
 
Enter the Number of Elements :
6
Enter the Elements :
85
66
3
80
93
88
Enter the Divisor : 5
Numbers From Array which are Even and divisble by 5 is :80

*/