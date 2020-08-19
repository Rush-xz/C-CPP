///////////////////////////////////////////////////////////////////////
//
//   Accept N numbers from user and accept Range, Display all elements from
//      that range.
//      Input : N : 6
//      Start: 60
//      End : 90
//      Elements : 85 66 3 76 93 88
//      Output : 66 76 88
//
//      Input : N : 6
//      Start: 30
//      End : 50
//      Elements : 85 66 3 76 93 88
//      Output :
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>
#include<stdlib.h>


//Prototype
void DisplayRange( int * , int , int , int);

//Entry-Point Function
int main()
{
    int iSize = 0 , i = 0 , iValue1 = 0 , iValue2 = 0;
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

    printf("Enter the Range :\n");

    printf("Start :");
    scanf("%d",&iValue1);

    printf("End :");
    scanf("\n%d",&iValue2);

     DisplayRange( p , iSize , iValue1 , iValue2 );

    free(p);

    return 0;
}

//function 
void DisplayRange( int Arr[] , int iLength , int iNo1 , int iNo2)
{
    int i=0 ;


    printf("Display Range from %d to %d :",iNo1,iNo2);
    for( i=0; i<iLength; i++)
    {   
        if( (Arr[i] >= iNo1) && ( Arr[i] <= iNo2) )
        {
            printf("\t%d",Arr[i]);
        }
    }

}



/*  Output :
 
Enter the Number of Elements :
6
Enter the Elements :
85
66
3
76
93
88
Enter the Range :
Start :60
End :90
Display Range from 60 to 90 :   85      66      76      88

Enter the Number of Elements :
6
Enter the Elements :
85
66
3
76
93
88
Enter the Range :
Start :30
End :50
Display Range from 30 to 50 :

*/