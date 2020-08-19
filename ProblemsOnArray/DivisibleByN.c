///////////////////////////////////////////////////////////////////////
//
//    Accept N numbers from user and display all such elements which are
//      divisible by 3 and 5.
//      Input : N : 6
//      Elements : 85 66 3 15 93 88
//      Output : 15
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>
#include<stdlib.h>

//Prototype
void DivisibleBy( int * , int , int , int);

//Entry-Point Function
int main()
{
    int iSize = 0 , iCnt = 0 , iValue1 = 0 , iValue2 = 0;
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

    printf("Enter the First Divisor : ");
    scanf("%d\t%d",&iValue1,&iValue2);


     DivisibleBy( p , iSize , iValue1 , iValue2);

    free(p);

    return 0;
}

//function 
void DivisibleBy( int Arr[] , int iLength , int iNo1 , int iNo2)
{
    int  i=0;

    printf("Numbers From Array which are divisble by %d and %d is :",iNo1,iNo2);
    for( i=0; i<iLength; i++)
    {   
        if(  ((Arr[i] % iNo1) == 0) && ((Arr[i] % iNo2) == 0) )
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
15
93
88
Enter the First Divisor : 3 5
Numbers From Array which are divisble by 3 and 5 is :15

*/