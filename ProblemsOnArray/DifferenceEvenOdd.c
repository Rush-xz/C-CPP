///////////////////////////////////////////////////////////////////////
//
//    Accept N numbers from user and return difference between summation
//      of even elements and summation of odd elements.
//      Input : N : 6
//      Elements : 85 66 3 80 93 88
//      Output : 53 (234 - 181)
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

    printf("Difference between summation of even and odd elements :%3d.\n",iRet);

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
            iSumE = iSumE + Arr[i];
        }
        else
        {
            iSumO = iSumO + Arr[i];
        }
    }

    printf("[%d - %d].\n",iSumE,iSumO);

    return iSumE - iSumO;
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
[234 - 181].
Difference between summation of even and odd elements : 53.

Enter the Number of Elements :
5
Enter the Elements :
6
4
1
9
8
[18 - 10].
Difference between summation of even and odd elements :  8.


*/