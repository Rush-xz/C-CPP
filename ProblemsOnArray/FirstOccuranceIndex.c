///////////////////////////////////////////////////////////////////////
//
//   Accept N numbers from user and accept one another number as NO ,
//      return index of first occurrence of that NO.
//      Input : N : 6
//      NO: 66
//      Elements : 85 66 3 66 93 88
//      Output : 1
//        
//      Input : N : 6
//      NO: 12
//      Elements : 85 11 3 15 11 111
//      Output : -1
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>
#include<stdlib.h>


//Prototype
int FirstOccuranceIndex( int * , int , int);

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

    printf("Enter the Element of which you want First Occurance index :");
    scanf("%d",&iNo);

    iRet = FirstOccuranceIndex( p , iSize , iNo );

        if( iRet == -1)
        {
            printf("There is no such Number.\n");
        }
        else
        {
            printf("First Occurance index of %d is :%3d",iNo,iRet);
        }

    free(p);

    return 0;
}

//function 
int FirstOccuranceIndex( int Arr[] , int iLength , int iNo)
{
    int i=0 ;

    for( i=0; i<iLength; i++)
    {   
        if( Arr[i] == iNo )
        {
            return i;
            break;
        }

    }

    if( i == iLength )
    {
        return -1;
    }

}



/*  Output :
 
Enter the Number of Elements :
6
Enter the Elements :
56
49
12
56
48
23
Enter the Element of which you want First Occurance index :48
First Occurance index of 48 is :  4

Enter the Number of Elements :
6
Enter the Elements :
85
111
3
15
11
85
Enter the Element of which you want First Occurance index :12
There is no such Number.

*/