///////////////////////////////////////////////////////////////////////
//
//    Accept N numbers from user and return the largest number.
//      Input : N : 6
//      Elements : 85 66 3 66 93 88
//      Output : 93
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>
#include<stdlib.h>


//Prototype
int LargestNum( int * , int );

//Entry-Point Function
int main()
{
    int iSize = 0 , i = 0 ;
    int *p = NULL;
    int iRet  = 0;

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

    iRet = LargestNum( p , iSize);

   printf("Largest Element is : %d.\n",iRet);

    free(p);

    return 0;
}

//function 
int LargestNum( int Arr[] , int iLength )
{
    int i=0 , iMax = 0;

    iMax = Arr[i];
    for( i=0; i<iLength; i++)
    {   
        if( Arr[i] > iMax )
        {
            iMax = Arr[i];
        }
    }

    return iMax;
}



/*  Output :
 
Enter the Number of Elements :
6
Enter the Elements :
85
66
3
66
93
88
Largest Element is : 93.

*/