///////////////////////////////////////////////////////////////////////
//
//      Accept N numbers from user and display summation of DigitSums of each
//      number.
//      Input : N : 6
//      Elements : 8225 665 3 76 953 858
//      Output : 17 17 3 13 17 21
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>
#include<stdlib.h>


//Prototype
void DigitSum( int * , int );

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

     DigitSum( p , iSize);

    free(p);

    return 0;
}

//function 
void DigitSum( int Arr[] , int iLength )
{
    int i=0 , iDigit = 0 , iNo = 0;
    int iSum = 0;

    for( i=0;i<iLength; i++)
    {
        iNo = Arr[i];

        while( iNo != 0 )
        {
            iDigit = iNo % 10;

            iSum = iSum + iDigit;

            iNo = iNo / 10;
        }

    
        printf("Summation of Digits of Element %d is %d.\n",Arr[i],iSum);

        iSum = 0;
    }  
        
    

}



/*  Output :
 
Enter the Number of Elements :
6
Enter the Elements :
8225
665
3
665
76
953
Summation of Digits of Element 8225 is 17.
Summation of Digits of Element 665 is 17.
Summation of Digits of Element 3 is 3.
Summation of Digits of Element 665 is 17.
Summation of Digits of Element 76 is 13.
Summation of Digits of Element 953 is 17.

*/