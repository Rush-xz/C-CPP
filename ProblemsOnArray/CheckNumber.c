///////////////////////////////////////////////////////////////////////
//
//    Accept N numbers from user check whether that numbers contains 11 in
//      it or not.
//      Input : N : 6
//      Elements : 85 66 11 80 93 88
//      Output : 11 is present
//      Input : N : 6
//      Elements : 85 66 3 80 93 88
//      Output : 11 is absent
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

//Prototype
BOOL Check( int * , int , int);

//Entry-Point Function
int main()
{
    int iSize = 0 , i = 0 , iNo = 0;
    int *p = NULL;
    BOOL bRet  = FALSE;

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

    printf("Enter the Element which you want to check :");
    scanf("%d",&iNo);

    bRet = Check( p , iSize , iNo );

    if( bRet == TRUE )
    {
        printf("%d is Present.\n",iNo);
    }
    else
    {
        printf("%d is not Present.\n",iNo);
    }

    free(p);

    return 0;
}

//function 
BOOL Check( int Arr[] , int iLength , int iNo)
{
    int i=0;

    for( i=0; i<iLength; i++)
    {   
        if( Arr[i] == iNo )
        {
            return TRUE;
            break;
        }
    }

}



/*  Output :
 
Enter the Number of Elements :
6
Enter the Elements :
85
66
11
80
93
88
Enter the Element which you want to check :11

11 is Present.

*/