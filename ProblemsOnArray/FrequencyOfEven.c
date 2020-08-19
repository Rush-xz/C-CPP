///////////////////////////////////////////////////////////////////////
//
//    Accept N numbers from user and return frequency of even numbers.
//      Input : N : 6
//      Elements : 85 66 3 80 93 88
//      Output : 3
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>
#include<stdlib.h>

//Prototype
int  DisplayEven( int * , int );

//Entry-Point Function
int main()
{
    int iSize = 0 , iCnt = 0 ,iRet = 0 ;
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

    iRet =  DisplayEven( p , iSize );

    printf("Numbers From Array which are Even :%d",iRet);

    free(p);

    return 0;
}

//function 
int  DisplayEven( int Arr[] , int iLength )
{
    int  i=0 , iSumE = 0;

    for( i=0; i<iLength; i++)
    {   
        if(  ((Arr[i] % 2) == 0) )
        {
            ++iSumE;
        }       
    }

    return iSumE;

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
Numbers From Array which are Even :3

*/