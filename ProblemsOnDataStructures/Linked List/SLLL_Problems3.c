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
void InsertLast(PPNODE , int);
void DisplayEle(PNODE);
void Deallocate(PPNODE);
int  CountEle(PNODE);
void ReverseEachEle( PNODE );
void DisplayPallindrome( PNODE );
void DisplayDigitProd( PNODE );
void SmallestDigit(PNODE);
void LargestDigit(PNODE);


//Driver Function
int main()
{
	printf("\n--------------Implementation of Singly Linear Linked List---------------\n\n");

	PNODE Head = NULL;
	int iSize = 0 , iNo = 0 , i = 0 , iRet = 0;

	printf("Enter Number of Elements 	: ");
	scanf("%d",&iSize);

	/*Insert elements Always At Last Position*/
	printf("\n\nEnter the Elements(Insert Last) 	:\n");
	for(i=0; i<iSize; i++)
	{
		scanf("%d",&iNo);
		InsertLast(&Head , iNo);
	}

	/*Display All Elements From SLLL*/
	printf("\n\nDisplay Elements 	:\n");
	DisplayEle(Head);

	
	/*Count All Elements From SLLL*/
	iRet = CountEle(Head);
	printf("\n\nTotal Number of Elements(Count) 	    :%3d",iRet);


	/*Display ReverseEachEle each Element From SLLL*/
	printf("\n\nReverse each element of singly linked list  :\n");
	ReverseEachEle(Head);
	DisplayEle(Head);

	printf("\n\nPallindrome Numbers in Linked List	    :");
	DisplayPallindrome(Head);

	printf("\n\nDigit Product of Numbers in Linked List	:");
	DisplayDigitProd(Head);


	/*Display Smallest Digit from each number From SLLL*/
	printf("\n\nSmallest Digit from each Number.	:");
	SmallestDigit(Head);

	/*Display Smallest Digit from each number From SLLL*/
	printf("\n\nLargest Digit from each Number.	        :");
	LargestDigit(Head);


	/*Deallocate All Nodes from Linked List*/
	Deallocate(&Head);

	return 0;

}



////////////////////////////////////////////////////////////
//
//  Name        :InsertLast
//  Input       :PPNODE , int
//  Returns     :void
//  Description :Insert elements At Last Position in linked list
//  Author      :Rushikesh Godase
//  Date        :1 Sep 2020
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
//  Date        :1 Sep 2020
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
//  Date        :1 Sep 2020
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
//  Name        :CountEle
//  Input       :PNODE
//  Returns     :int
//  Description :Count all elements in linked list
//  Author      :Rushikesh Godase
//  Date        :1 sep 2020
//
////////////////////////////////////////////////////////////
int CountEle( PNODE First )
{
	int iCnt = 0;

	if( NULL == First)
	{
		printf("Empty Linked List.\n");
		return -1;
	}

	while( First != NULL)
	{
		++iCnt;

		First = First -> Next;
	}

	return iCnt;

}//End of CountEle


/*
////////////////////////////////////////////////////////////
//
//  Name        :ReverseEachEle
//  Input       :PNODE , int
//  Returns     :void
//  Description :Function which ReverseEachEles each element in linked list
//  Author      :Rushikesh Godase
//  Date        :1 Sep 2020
//
////////////////////////////////////////////////////////////
void ReverseEachEle( PNODE First)
{
	if( NULL == First )
	{
		printf("Linked list is Empty.\n");
		return;
	}

	PNODE Temp = First;
	int i = 0 , *Arr = NULL;

	Arr = (int *)malloc(sizeof(int) * CountEle(First));

	if( Arr == NULL)
		printf("Failed to Allocate Memory.\n");

	while( Temp != NULL)
	{
		Arr[i++] = Temp->iData;
		Temp = Temp->Next;
	} 

	Temp = First;

	while( Temp != NULL )
	{
		Temp->iData = Arr[--i];
		Temp = Temp->Next;
	}

	
}//End of ReverseEachEle
*/


////////////////////////////////////////////////////////////
//
//  Name        :ReverseEachEle
//  Input       :PNODE , int
//  Returns     :void
//  Description :Function which ReverseEachEles each element in linked list
//  Author      :Rushikesh Godase
//  Date        :1 Sep 2020
//
////////////////////////////////////////////////////////////
void ReverseEachEle( PNODE First)
{
	if( NULL == First )
	{
		printf("Linked list is Empty.\n");
		return;
	}

	int iTemp = 0 , iRev = 0;

	while( First != NULL)
	{
		iTemp = First->iData;
		iRev = 0;

		while( iTemp != 0)
		{
			iRev = iRev*10 + (iTemp % 10);
			iTemp = iTemp / 10;
		}

		First->iData = iRev;

		First = First->Next;
	}
	
}//End of ReverseEachEle




////////////////////////////////////////////////////////////
//
//  Name        :DisplayPallindrome
//  Input       :PNODE
//  Returns     :void
//  Description :Display all Pallindrome elements in linked list
//  Author      :Rushikesh Godase
//  Date        :1 sep 2020
//
////////////////////////////////////////////////////////////
void DisplayPallindrome( PNODE First )
{

	if( NULL == First)
	{
		printf("Empty Linked List.\n");
		return;
	}

	int Temp = 0;
	int iRev = 0;
	char cFlag = 0;

	while( First != NULL)
	{
		Temp = First->iData;
		iRev = 0;

		while( Temp != 0)
		{
			iRev = iRev*10 + (Temp % 10);
			Temp = Temp / 10;
		}

		if( iRev == First->iData)
		{
			printf("%5d",First->iData);
			cFlag = 1;
		}


		First = First->Next;
	}

	if( cFlag == 0)
	{
		printf("There is no Pallindrome Number.\n");
	}


}//End of DisplayPallindrome


////////////////////////////////////////////////////////////
//
//  Name        :DisplayDigitProd
//  Input       :PNODE
//  Returns     :void
//  Description :Display Digit product of elements in linked list
//  Author      :Rushikesh Godase
//  Date        :1 sep 2020
//
////////////////////////////////////////////////////////////
void DisplayDigitProd( PNODE First )
{

	if( NULL == First)
	{
		printf("Empty Linked List.\n");
		return;
	}

	int iNo = 0;
	int iDigit = 0 , iProd = 0;

	while( First != NULL)
	{
		iNo = First->iData;

		if( iNo == 0)
		{
			iProd = 0;
			printf("%5d",iProd);
		}
		else
		{
			iDigit = 0;
			iProd = 1;
			while( iNo != 0)
			{
				iDigit = iNo % 10;

				if( iDigit != 0)	//(Don’t consider 0)
				{
					iProd = iProd * iDigit;
				}

				iNo = iNo / 10;
			}

			printf("%5d",iProd);
		}

		First = First->Next;
	}

}//End of DisplayDigitProd


////////////////////////////////////////////////////////////
//
//  Name        :SmallestDigit
//  Input       :PNODE
//  Returns     :void
//  Description :compute Smallest Digit from each number in LL
//  Author      :Rushikesh Godase
//  Date        :1 Sep 2020
//
////////////////////////////////////////////////////////////
void SmallestDigit(PNODE First )
{
	int iDigit = 0 , iNo = 0 , iMin = 0 ;
	char cFlag = 0;

	if( NULL == First)
	{
		printf("Empty Linked List.\n");
		return;
	}

	while( First != NULL)
	{
		iNo = First->iData;
		iDigit = 0;
		cFlag = 0;

		while( iNo != 0)
		{
			iDigit = iNo % 10;

			if( cFlag == 0)
			{
				iMin = iDigit;
			}
			else if( iDigit < iMin )
			{	
				iMin = iDigit;
			}

			cFlag = 1;
			iNo = iNo / 10;
		}

		printf("%5d",iMin);
		
		First = First -> Next;
	}


}//End of SmallestDigit


////////////////////////////////////////////////////////////
//
//  Name        :LargestDigit
//  Input       :PNODE
//  Returns     :void
//  Description :Fun compute Largest Digit from each number in LL
//  Author      :Rushikesh Godase
//  Date        :1 Sep 2020
//
////////////////////////////////////////////////////////////
void LargestDigit(PNODE First )
{
	int iDigit = 0 , iNo = 0 , iMax = 0 ;
	char cFlag = 0;

	if( NULL == First)
	{
		printf("Empty Linked List.\n");
		return;
	}

	while( First != NULL)
	{
		iNo = First->iData;
		iDigit = 0;
		cFlag = 0;

		while( iNo != 0)
		{
			iDigit = iNo % 10;

			if( cFlag == 0)
			{
				iMax = iDigit;
			}
			else if( iDigit > iMax )
			{	
				iMax = iDigit;
			}

			cFlag = 1;
			iNo = iNo / 10;
		}

		printf("%5d",iMax);
		
		First = First -> Next;
	}


}//End of LargestDigit



/*	OUTPUT :

--------------Implementation of Singly Linear Linked List---------------

Enter Number of Elements        : 6


Enter the Elements(Insert Last)         :
1203
159
494
65
66
236


Display Elements        :
| 1203 | -> | 159 | -> | 494 | -> | 65 | -> | 66 | -> | 236 | -> NULL


Total Number of Elements(Count)             :  6

Reverse each element of singly linked list  :
| 3021 | -> | 951 | -> | 494 | -> | 56 | -> | 66 | -> | 632 | -> NULL


Pallindrome Numbers in Linked List          :  494   66

Digit Product of Numbers in Linked List :    6   45  144   30   36   36

Smallest Digit from each Number.        :    0    1    4    5    6    2

Largest Digit from each Number.         :    3    9    9    6    6    6

*/