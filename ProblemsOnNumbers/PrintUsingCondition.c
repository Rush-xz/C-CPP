///////////////////////////////////////////////////////////////////////
//
//      Accept one number from user if number is less than 10 print "Hello"
//        otherwise print "Demo"
//
///////////////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//Prototype
int Accept( int iNo);

//Entry-Point Function
int main()
{
    int iValue = 0;
    
    
    printf("Enter Number\n");
    scanf("%d",&iValue);

    Accept(iValue);
    
    return 0;
}

//function 
int Accept( int iNo)
{
   
   if(iNo < 10)
   {
    printf("Hello");
   }
   else
   {
    printf("Demo");
   }
  
    
}

/*  Output :
 
Enter Number
9
Hello

Enter Number
10
Demo

*/