///////////////////////////////////////////////////////////////////////
//
//		Implementation Singly Linear Linked List ie.[SLLL].
//
///////////////////////////////////////////////////////////////////////

//Header
#include<stdio.h>
#include<malloc.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

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
void PerfectNum(PNODE);
void DisplayPrime(PNODE);
int  AdditionEven(PNODE);



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
	printf("\n\n Perfect Numbers From SLLL 	:");
	PerfectNum(Head);

	/*Display Prime Numbers*/
	printf("\n\n Prime Numbers From SLLL 	:");
	DisplayPrime(Head);

	/*addition of Even Numbers*/
	iRet = AdditionEven(Head);
	printf("\n\n Addition of Even Numbers From SLLL  :%d",iRet);
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
	while( First != NULL)
	{
		printf("| %d | -> ",First->iData);
		First = First -> Next;
	}

	printf("NULL\n");
}//End of DisplayEle


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
		printf("There are no Prime Numbers in LL.\n");
		return -1;
	}
	else
	{
		return iSum;
	}
	

}//End of DisplayPrime