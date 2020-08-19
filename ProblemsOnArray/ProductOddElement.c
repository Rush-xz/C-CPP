///////////////////////////////////////////////////////////////////////
//
//   Accept N numbers from user and return product of all odd elements.
//      Input : N : 6
//      Elements : 15 66 3 70 10 88
//      Output : 45
//
//      Input : N : 6
//      Elements : 44 66 72 70 10 88
//      Output : 0
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>
#include<stdlib.h>


//Prototype
int Product( int * , int );

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

    iRet = Product( p , iSize  );

    printf("Product of all Odd Element is :%3d",iRet);

    free(p);

    return 0;
}

//function 
int Product( int Arr[] , int iLength )
{
    int i=0 , iProd = 0;

    for( i=0; i<iLength; i++)
    {   
        if( (Arr[i]%2) != 0 )
        {
            if( iProd == 0)
            {
                iProd = 1;
            }

            iProd = iProd * Arr[i];
        }
    }

    return iProd;

}



/*  Output :
 
Enter the Number of Elements :
6
Enter the Elements :
15
66
3
70
10
88
Product of all Odd Element is : 45

Enter the Number of Elements :
6
Enter the Elements :
44
66
72
70
10
88
Product of all Odd Element is :  0

*/