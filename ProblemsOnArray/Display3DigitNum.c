///////////////////////////////////////////////////////////////////////
//
//      Accept N numbers from user and display all such numbers which contains
//      3 digits in it.
//      Input : N : 6
//      Elements : 8225 665 3 76 953 858
//      Output : 665 953 858
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>
#include<stdlib.h>


//Prototype
void Digit( int * , int );

//Entry-Point Function
int main()
{
    int iSize = 0 , i = 0 ;
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

    Digit( p , iSize);

    free(p);

    return 0;
}

//function 
void Digit( int Arr[] , int iLength )
{
    int i=0 , iDigit = 0 , iNo = 0 , iCnt = 0;


    printf("Elements which Contains 3 Digits in it :");
    for( i=0; i<iLength; i++)
    {   

        iNo = Arr[i];

        while( iNo != 0 )
        {
            //iDigit = iNo % 10;    //Not necessary

            ++iCnt;

            iNo = iNo / 10;
        }

        if( iCnt == 3)
        {
            printf("\t%d",Arr[i]);
        }

        iCnt = 0;
        
    }

}



/*  Output :
 
Enter the Number of Elements :
6
Enter the Elements :
8225
665
3
76
953
858
Elements which Contains 3 Digits in it :        665     953     858

*/