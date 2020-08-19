///////////////////////////////////////////////////////////////////////
//
//   Accept N numbers from user and accept one another number as NO ,
//      return frequency of NO form it.
//      Input : N : 6
//      NO: 66
//      Elements : 85 66 3 66 93 88
//      Output : 2
//      Input : N : 6
//      NO: 12
//      Elements : 85 11 3 15 11 111
//      Output : 0
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>
#include<stdlib.h>


//Prototype
int Frequency( int * , int , int);

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

    printf("Enter the Element of which you want  Frequency :");
    scanf("%d",&iNo);

    iRet = Frequency( p , iSize , iNo );

    printf("Frequency of %d is :%3d",iNo,iRet);

    free(p);

    return 0;
}

//function 
int Frequency( int Arr[] , int iLength , int iNo)
{
    int i=0 , iFreq = 0;

    for( i=0; i<iLength; i++)
    {   
        if( Arr[i] == iNo )
        {
            ++iFreq;
        }
    }

    return iFreq;

}



/*  Output :
 
Enter the Number of Elements :
6
Enter the Elements :
85
66
3
93
88
66
Enter the Element of which you want  Frequency :66
Frequency of 66 is :  2

*/