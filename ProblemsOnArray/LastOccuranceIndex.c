///////////////////////////////////////////////////////////////////////
//
//   Accept N numbers from user and accept one another number as NO ,
//      return index of first occurrence of that NO.
//      Input : N : 6
//      NO: 66
//      Elements : 85 66 3 66 93 88
//      Output : 3
//        
//      Input : N : 6
//      NO: 111
//      Elements : 85 11 3 15 11 111
//      Output : 5
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>
#include<stdlib.h>


//Prototype
int LastOccuranceIndex( int * , int , int);

//Entry-Point Function
int main()
{
    int iSize = 0 , i = 0 , iNo = 0;
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

    printf("Enter the Element of which you want Last Occurance index :");
    scanf("%d",&iNo);

    iRet = LastOccuranceIndex( p , iSize , iNo );

        if( iRet == -1)
        {
            printf("There is no such Number.\n");
        }
        else
        {
            printf("Last Occurance index of %d is :%3d",iNo,iRet);
        }

    free(p);

    return 0;
}

//function 
int LastOccuranceIndex( int Arr[] , int iLength , int iNo)
{
    int i=0 , iLast = -1;

    for( i=0; i<iLength; i++)
    {   
        if( Arr[i] == iNo )
        {
            iLast = i;
        }

    }

    return iLast;
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
Enter the Element of which you want Last Occurance index :66
Last Occurance index of 66 is :  3


Enter the Number of Elements :
4
Enter the Elements :
55
89
55
12
Enter the Element of which you want Last Occurance index :3
There is no such Number.


Enter the Number of Elements :
5
Enter the Elements :
56
23
56
49
12
Enter the Element of which you want Last Occurance index :49
Last Occurance index of 49 is :  3

*/