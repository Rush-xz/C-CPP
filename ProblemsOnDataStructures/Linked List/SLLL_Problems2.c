///////////////////////////////////////////////////////////////////////
//
//		Implementation Singly Linear Linked List ie.[SLLL].
//
///////////////////////////////////////////////////////////////////////

//Header
#include<stdio.h>
#include<malloc.h>

//Structure of node of linked list
typedef struct Node
{
	int iData;
	struct Node *Next;
}NODE , *PNODE , **PPNODE;

//Global Declaration
void InsertFirst( PPNODE , int );
void InsertLast( PPNODE , int );
void DisplayEle(PNODE);
void Deallocate( PPNODE );
void PerfectNum(PNODE);
void DisplayPrime(PNODE);
int  AdditionEven(PNODE);
int  AdditionOdd(PNODE);
void SumDigits(PNODE);
int  SecondMaximum(PNODE);
int  SecondMinimum(PNODE);



//Driver Function
int main()
{
	printf("\n--------------Implementation of Singly Linear Linked List---------------\n\n");

	PNODE Head = NULL;
	int iSize = 0 , iNo = 0 , i = 0 , iRet = 0;

	printf("Enter Number of Elements 	: ");
	scanf("%d",&iSize);

	/*Insert elements Always At First Position*/
	printf("\nEnter the Elements(Insert First) 	:\n");
	for(i=0; i<iSize; i++)
	{
		scanf("%d",&iNo);
		InsertFirst(&Head , iNo);
	}

	/*Display All Elements From SLLL*/
	printf("\nDisplay Elements 	:\n");
	DisplayEle(Head);

	/*Insert Element At Last Position*/
	printf("\n\nEnter the Element(Insert Last) 	:");
	scanf("%d",&iNo);
	InsertLast(&Head , iNo);

	/*Display All Elements From SLLL*/
	printf("\nDisplay Elements 	:\n");
	DisplayEle(Head);

	/*Display Perfect Numbers*/
	printf("\n\nPerfect Numbers From SLLL 	:");
	PerfectNum(Head);

	/*Display Prime Numbers*/
	printf("\n\nPrime Numbers From SLLL 	:");
	DisplayPrime(Head);

	/*addition of Even Numbers*/
	iRet = AdditionEven(Head);
	if( iRet != -1)
		printf("\n\nAddition of Even Numbers From SLLL  :%d",iRet);
		

	/*addition of Odd Numbers*/
	iRet = AdditionOdd(Head);
	if(iRet != -1)
		printf("\n\nAddition of Odd Numbers From SLLL  :%d",iRet);


	/*addition of Digits of elements*/
	printf("\n\nSum of Digits of Number From SLLL  :");
	SumDigits(Head);

	/*Displays Second Maximum Number*/
	iRet = SecondMaximum(Head);
	if( iRet != -1)
		printf("\n\nSecond Maximum Number From SLLL  :%d",iRet);
	

	/*Displays Second Minimum Number*/
	iRet = SecondMinimum(Head);
	if( iRet != -1)
		printf("\n\nSecond Minimum Number From SLLL  :%d",iRet);


	/*Deallocate All Nodes from Linked List*/
	Deallocate(&Head);

	return 0;

}


////////////////////////////////////////////////////////////
//
//  Name        :InsertFirst
//  Input       :PPNODE , int
//  Returns     :void
//  Description :Insert elements in linked list
//  Author      :Rushikesh Godase
//  Date        :31 Aug 2020
//
////////////////////////////////////////////////////////////
void InsertFirst( PPNODE First , int iNo)
{
	PNODE newn = NULL;

	newn = (PNODE)malloc(sizeof(NODE));

	if( NULL == newn )
	{
		return;
	}

	newn -> iData = iNo;
	newn -> Next = NULL;

	if( *First == NULL)
	{
		*First = newn;
	}
	else
	{
		newn -> Next = *First;
		*First = newn;
	}
}//End of InsertFirst()


////////////////////////////////////////////////////////////
//
//  Name        :InsertLast
//  Input       :PPNODE , int
//  Returns     :void
//  Description :Insert elements At Last Position in linked list
//  Author      :Rushikesh Godase
//  Date        :31 Aug 2020
//
////////////////////////////////////////////////////////////
void InsertLast( PPNODE First , int iNo)
{
	PNODE newn = NULL;
	PNODE Temp = NULL;

	newn = (PNODE)malloc(sizeof(NODE));

	if( NULL == newn )
	{
		return;
	}

	newn -> iData = iNo;
	newn -> Next = NULL;

	if( *First == NULL)
	{
		*First = newn;
	}
	else
	{
		Temp = *First;
		while( Temp -> Next != NULL)
		{
			Temp = Temp -> Next;
		}

		Temp -> Next = newn;
	}
}//End of InsertLast()



////////////////////////////////////////////////////////////
//
//  Name        :DisplayEle
//  Input       :PNODE
//  Returns     :void
//  Description :Display elements in linked list
//  Author      :Rushikesh Godase
//  Date        :31 Aug 2020
//
////////////////////////////////////////////////////////////
void DisplayEle( PNODE First )
{

	if( NULL == First)
	{
		printf("Empty Linked List.\n");
		return;
	}

	while( First != NULL)
	{
		printf("| %d | -> ",First->iData);
		First = First -> Next;
	}

	printf("NULL\n");
}//End of DisplayEle


////////////////////////////////////////////////////////////
//
//  Name        :Deallocate
//  Input       :PPNODE
//  Returns     :void
//  Description :Deallocates All Nodes from linked list
//  Author      :Rushikesh Godase
//  Date        :31 Aug 2020
//
////////////////////////////////////////////////////////////
void Deallocate( PPNODE First )
{

	if( NULL == *First)
	{
		printf("Linked List is Empty.\n");
		return;
	}

	PNODE Temp = NULL;

	while( *First != NULL)
	{
		Temp = *First;
		*First = Temp->Next;
		free(Temp);
	}

}


////////////////////////////////////////////////////////////
//
//  Name        :PerfectNum
//  Input       :PNODE
//  Returns     :void
//  Description :Display All Perfect Numbers from linked list
//  Author      :Rushikesh Godase
//  Date        :31 Aug 2020
//
////////////////////////////////////////////////////////////
void PerfectNum( PNODE First )
{	
	int iSum = 0 , i=0 , Num = 0 , iFlag = 0;

	if( NULL == First)
	{
		printf("Empty Linked List.\n");
		return;
	}

	while( First != NULL)
	{
		Num = First->iData;

		for( i=1; i<=Num/2; i++)
		{
			if( Num % i == 0 )
			{	
				iSum = iSum + i;
			}	
		}

		if(iSum == Num)
		{	
			printf("%d\t",Num);
			iFlag = 1;
		}

		iSum = 0;

		First = First -> Next;
	}

	if( iFlag == 0)
	{
		printf("There are no Perfect Numbers in LL.\n");
	}
	else
	{
		printf("\n");
	}

}//End of PerfectNum


////////////////////////////////////////////////////////////
//
//  Name        :DisplayPrime
//  Input       :PNODE
//  Returns     :void
//  Description :Display All Prime Numbers from linked list
//  Author      :Rushikesh Godase
//  Date        :31 Aug 2020
//
////////////////////////////////////////////////////////////
void DisplayPrime( PNODE First )
{	
	int i=0 , Num = 0 , iFlag = 0;

	if( NULL == First)
	{
		printf("Empty Linked List.\n");
		return;
	}

	while( First != NULL)
	{
		Num = First->iData;

		for( i=Num/2; i>0; --i)
		{
			if( Num % i == 0 )
			{	
				break;
			}
		}

		if(i == 1 )
		{
			printf("%d\t",Num);
			iFlag = 1;
		}

		First = First -> Next;
	}

	if( iFlag == 0)
	{
		printf("There are no Prime Numbers in LL.\n");
	}
	else
	{
		printf("\n");
	}
	

}//End of DisplayPrime


////////////////////////////////////////////////////////////
//
//  Name        :AdditionEven
//  Input       :PNODE
//  Returns     :int
//  Description :Returns Addition of Even Numbers from linked list
//  Author      :Rushikesh Godase
//  Date        :31 Aug 2020
//
////////////////////////////////////////////////////////////
int AdditionEven( PNODE First )
{	
	int iFlag = 0 , iSum = 0;

	if( NULL == First)
	{
		printf("Empty Linked List.");
		return -1;
	}

	while( First != NULL)
	{
		if( (First->iData) % 2 == 0 )
		{
			iSum = iSum + First -> iData;
			iFlag = 1;
		}

		First = First -> Next;
	}

	if( iFlag == 0)
	{
		return -1;
	}
	else
	{
		return iSum;
	}
	

}//End of AdditionEven


////////////////////////////////////////////////////////////
//
//  Name        :AdditionOdd
//  Input       :PNODE
//  Returns     :int
//  Description :Returns Addition of Odd Numbers from linked list
//  Author      :Rushikesh Godase
//  Date        :31 Aug 2020
//
////////////////////////////////////////////////////////////
int AdditionOdd( PNODE First )
{	
	int iFlag = 0 , iSum = 0;

	if( NULL == First)
	{
		printf("Empty Linked List.");
		return -1;
	}

	while( First != NULL)
	{
		if( (First->iData) % 2 != 0 )
		{
			iSum = iSum + First -> iData;
			iFlag = 1;
		}

		First = First -> Next;
	}

	if( iFlag == 0)
	{
		return -1;
	}
	else
	{
		return iSum;
	}
	

}//End of AdditionOdd


////////////////////////////////////////////////////////////
//
//  Name        :SumDigits
//  Input       :PNODE
//  Returns     :void
//  Description :Computes sum of Digits of Number from linked list
//  Author      :Rushikesh Godase
//  Date        :31 Aug 2020
//
////////////////////////////////////////////////////////////
void SumDigits( PNODE First )
{	
	int iSum = 0 , iDigit = 0 , iNum = 0;

	if( NULL == First)
	{
		printf("Empty Linked List.");
		return;
	}

	while( First != NULL)
	{
		iNum = First->iData;
		iDigit = 0;
		iSum = 0;
		
		while( iNum != 0)
		{
			iDigit = iNum % 10;

			iSum = iSum + iDigit;

			iNum = iNum /10;
		}

		printf("%4d",iSum);

		First = First -> Next;
	}

	
}//End of SumDigits


////////////////////////////////////////////////////////////
//
//  Name        :SecondMaximum
//  Input       :PNODE
//  Returns     :int
//  Description :Returns the second maximum Number from linked list
//  Author      :Rushikesh Godase
//  Date        :31 Aug 2020
//
////////////////////////////////////////////////////////////
int SecondMaximum( PNODE First )
{	
	int iMax1 = 0 , iMax2 = 0 , iNum = 0;

	if( NULL == First)
	{
		printf("Empty Linked List.");
		return -1;
	}

	iMax1 = First->iData;
	First = First->Next;
	while( First != NULL)
	{
		iNum = First->iData;
		
			if(iNum>iMax1)		//iNum Greater than iMax1
			{
				iMax2 = iMax1;
				iMax1 = iNum;
			}
			else if(iNum>iMax2)//iNum Greater than iMax2 but less than iMax1
			{
				iMax2 = iNum;
			}

		First = First -> Next;
	}

	return iMax2;
	
}//End of SecondMaximum


////////////////////////////////////////////////////////////
//
//  Name        :SecondMinimum
//  Input       :PNODE
//  Returns     :int
//  Description :Returns the second minimum Number from linked list
//  Author      :Rushikesh Godase
//  Date        :31 Aug 2020
//
////////////////////////////////////////////////////////////
int SecondMinimum( PNODE First )
{	
	int iMin1 = 0 , iMin2 = 0 , iNum = 0;

	if( NULL == First)
	{
		printf("Empty Linked List.");
		return -1;
	}

	iMin1 = First->iData;
	First = First->Next;
	while( First != NULL)
	{
		iNum = First->iData;
		
			if(iNum<iMin1)
			{
				iMin2 = iMin1;
				iMin1 = iNum;
			}
			else if( (iNum<iMin2 || iMin2<iMin1) && iMin1 != iMin2 )
			{
				iMin2 = iNum;
			}

		First = First -> Next;
	}

	return iMin2;
	
}//End of SecondMinimum



/*	OUTPUT :

--------------Implementation of Singly Linear Linked List---------------

Enter Number of Elements        : 6

Enter the Elements(Insert First)        :
46
28
41
6
13
45

Display Elements        :
| 45 | -> | 13 | -> | 6 | -> | 41 | -> | 28 | -> | 46 | -> NULL


Enter the Element(Insert Last)  :89

Display Elements        :
| 45 | -> | 13 | -> | 6 | -> | 41 | -> | 28 | -> | 46 | -> | 89 | -> NULL


Perfect Numbers From SLLL       :6      28


Prime Numbers From SLLL         :13     41      89


Addition of Even Numbers From SLLL  :80

Addition of Odd Numbers From SLLL  :188

Sum of Digits of Number From SLLL  :   9   4   6   5  10  10  17

Second Maximum Number From SLLL  :46

Second Minimum Number From SLLL  :13

*/