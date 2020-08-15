/////////////////////////////////////////////////////////////
//
//    Write a program which accept distance in kilometre and 
//    convert it into meter. (1 kilometre = 1000 Meter)
//
/////////////////////////////////////////////////////////////

//Header File
#include<stdio.h>
#define KMtoM 1000    /* 1 kilometre = 1000 Meter */

//Prototype 
int KMtoMetre( int );

//Entry-Point Function
int main()
{
    int  iValue = 0;
    int  iRet = 0;

    printf("Enter Distance in kilometre :\n");
    scanf("%d",&iValue);

    iRet = KMtoMetre( iValue );

    printf(" Distance in  kilometre to metre is :%9.3dm.",iRet);

    return 0;

}

//Function
int KMtoMetre( int iKM) 
{

  return (iKM*KMtoM);

}



/*  Output : 
Enter Distance in kilometre :
5
 Distance in  kilometre to metre is :     5000m.
*/