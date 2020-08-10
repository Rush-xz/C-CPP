///////////////////////////////////////////////////////////////////////
//
//      Accept two numbers from user and display first number in second 
//      number of times
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//Protype
int Display( int iFirst , int iSecond);


//Entry-Point Function
int main()
{
    int iValue1 = 0 , iValue2 = 0;
    
    
    printf("Enter First Number :\n");
    scanf("%d",&iValue1);

    printf("Enter Frequency :\n");
    scanf("%d",&iValue2);

    Display(iValue1 , iValue2);
    
    return 0;
}

//function 
int Display( int iFirst , int iSecond)
{
  int i=0;

    if( iSecond < 0)  //Updator
    {
      iSecond = -iSecond;
    }

   for( i=0; i<iSecond; i++)
    {
      printf("%d\t",iFirst); 
    } 
    
}


/*  Output :
 
Enter First Number :
10
Enter Frequency :
6
10      10      10      10      10      10

*/