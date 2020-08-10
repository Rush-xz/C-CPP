/////////////////////////////////////////////////////////////
//
//      Program to divide two Numbers
//
/////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>

//function which returns integer Division
int Divide( int iNo1 , int iNo2)
{
    if( iNo2 == 0) //Filter
    {
        return -1;  //Abort
    }

    return iNo1 / iNo2;
}

//Entry-Point Function
int main()
{
    int iValue1 = 0, iValue2 = 0,iRet = 0;

    printf("Enter First Number\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number\n");
    scanf("%d",&iValue2);

    iRet = Divide( iValue1 , iValue2);

    printf("Division is :%d",iRet);

    return 0;

}


/*  Output : 
Enter First Number
45
Enter Second Number
9
Division is :5
*/