///////////////////////////////////////////////////////////////////////
//
//    Accept N numbers from user and return difference between frequency of
//      even number and odd numbers.
//      Input : N : 7
//      Elements : 85 66 3 80 93 88 90
//      Output : 1 (4 -3)
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>
#include<stdlib.h>

//Prototype
int Difference( int * , int );

//Entry-Point Function
int main()
{
    int iSize = 0 , i = 0 , iRet = 0;
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
    for( i=0; i<iSize; i++)
    {
        scanf("%d",&p[i]);
    }

    iRet = Difference( p , iSize );

    printf("Difference between Frequency of even number and odd number :%3d.\n",iRet);

    free(p);

    return 0;
}

//function 
int Difference( int Arr[] , int iLength )
{
    int iSumE =0, iSumO = 0 , i=0;

    for( i=0; i<iLength; i++)
    {   
        if( ( Arr[i] % 2) == 0)
        {
            ++iSumE;
        }
        else
        {
            ++iSumO;
        }
    }

    printf("[%d - %d].\n",iSumE,iSumO);

    return iSumE - iSumO;
}



/*  Output :
 
Enter the Number of Elements :
7
Enter the Elements :
85
66
3
80
93
88
90
[4 - 3].
Difference between Frequency of even number and odd number :  1.

*/