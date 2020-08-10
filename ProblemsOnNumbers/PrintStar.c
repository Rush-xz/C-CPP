///////////////////////////////////////////////////////////////////////
//
//      Accept one number and print that number of * on screen
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>


//function Prints stars on screen
int Accept( int iNo)
{
   int iCnt = 0;

   for( iCnt = 0; iCnt<iNo; iCnt++)
   {
       printf("*\t");
   }
    
}

//Entry-Point Function
int main()
{
    int iValue = 0;
    
    
    printf("Enter Number\n");
    scanf("%d",&iValue);

    Accept(iValue);
    
    return 0;
}


/*  Output :
 
Enter Number
6
*       *       *       *       *       *      

*/