////////////////////////////////////////////////////////////////
//
//	Design one class which performs below basic activities by
//	inheriting the Array class[Previous class] such as,
//	1) Count Even Elements
//	2) Accept one number and count the frequency of that number
//	3) Accept one number and return it's first occurance
//	4) Accept one number and return it's last occurancce
//
////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

class Array
{
	protected :			//Access Specifier
			int Size;
			int *Arr;

	public :
			Array( int Value = 6)		//Parameterised Constructor
			{								//Memory content copy
				cout<<"\nInside Parameterised Constructor";

				if( Value < 0)		//Updater
					Value = -Value;

				this -> Size = Value;
				this -> Arr = new int[Size];
			}

			Array( Array &ref )			//Copy Constructor:Copy m/r Contents
			{
				cout<<"\nInside Copy Constructor";

				this -> Size = ref.Size;
				this -> Arr = new int[this->Size];	//Deep Copy
				//this -> Arr = ref.Arr;			//Shallow copy

				for( int i=0; i<this->Size; ++i)
				{
					this -> Arr[i] = ref.Arr[i];
				}
			}

			~Array()		//Destructor : Memory Deallocation
			{
				cout<<"\nInside Destructor.";
				delete []Arr;
			}
			//Behaviour : Utility Functions
			inline void Accept();
			inline void Display();
			
};

class ArrSearch : public Array
{
	public	:
		ArrSearch( int No = 6):Array(No)//Base member intialisation
		{}

		int Frequency(int);
		int SearchFirst(int);
		int LastOccur(int);
		int SecOccur(int);
		int SecondLastOccur(int);
};

///////////////////////////////////////////////////////////////////
//
//  Name        :Accept
//  Input       :void
//  Returns     :void
//  Description	 :Accepts N elements from user (through constructor)
//  Author      :Rushikesh Godase
//  Date        :15 Sept 2020
//
///////////////////////////////////////////////////////////////////
//void Array :: Accept( const Array *this )
void Array :: Accept()
{

	if( NULL == Arr)
	{
		cout<<"\n Array is Empty.";
		return;
	}

	cout<<"\nPlease Enter the values	:";

	for( int i=0; i<this->Size; i++)
	{
		cin>>Arr[i];
	}
}


///////////////////////////////////////////////////////////////////
//
//  Name        :Display
//  Input       :void
//  Returns     :void
//  Description :Displays Array elemets
//  Author      :Rushikesh Godase
//  Date        :15 Sept 2020
//
///////////////////////////////////////////////////////////////////
//void Array :: Display( const Array *this)
void Array :: Display()
{
	if( this->Arr == NULL)
	{
		cout<<"\nArray is Empty";
		return;
	}

	cout<<"\nElements are :";

	for( int i=0; i<this->Size; i++)
	{
		cout<<Arr[i]<<"\t";
	}

	cout<<"\n";
}


///////////////////////////////////////////////////////////////////
//
//  Name        :Frequency
//  Input       :int
//  Returns     :int
//  Description :Computes the frequency of element.
//  Author      :Rushikesh Godase
//  Date        :15 Sept 2020
//
///////////////////////////////////////////////////////////////////
int ArrSearch :: Frequency( int iValue)
{
	int iCnt = 0;

	if( this->Arr == NULL)
	{
		cout<<"\nArray is Empty";
		return -1;
	}


	for( int i=0; i<this->Size; i++)
	{
		if( this->Arr[i]==iValue)
		{
			iCnt++;
		}

	}

	return iCnt;

}

///////////////////////////////////////////////////////////////////
//
//  Name        :SearchFirst
//  Input       :int
//  Returns     :int
//  Description :Computes the first occurance of element.
//  Author      :Rushikesh Godase
//  Date        :15 Sept 2020
//
///////////////////////////////////////////////////////////////////
int ArrSearch :: SearchFirst( int iValue)
{

	if( this->Arr == NULL)
	{
		cout<<"\nArray is Empty";
		return -1;
	}

	int i = 0;
	for( i=0; i<this->Size; i++)
	{
		if( this->Arr[i]==iValue)
		{
			break;
		}

	}

	if( this->Size == i)
		return -1;
	else
		return i;

}


///////////////////////////////////////////////////////////////////
//
//  Name        :LastOccur
//  Input       :int
//  Returns     :int
//  Description :Computes the Last occurance of element.
//  Author      :Rushikesh Godase
//  Date        :15 Sept 2020
//
///////////////////////////////////////////////////////////////////
int ArrSearch :: LastOccur( int iValue)
{
	int iPos = -1;

	if( this->Arr == NULL)
	{
		cout<<"\nArray is Empty";
		return -1;
	}

	int i = 0;
	for( i=0; i<this->Size; i++)
	{
		if( this->Arr[i]==iValue)
		{
			iPos = i;
		}

	}

	if( iPos == -1)
		return -1;
	else
		return iPos;

}


///////////////////////////////////////////////////////////////////
//
//  Name        :SecOccur
//  Input       :int
//  Returns     :int
//  Description :Computes the Second occurance of element.
//  Author      :Rushikesh Godase
//  Date        :15 Sept 2020
//
///////////////////////////////////////////////////////////////////
int ArrSearch :: SecOccur( int iValue)
{
	int iPos = -1 , iCnt = 0;

	if( this->Arr == NULL)
	{
		cout<<"\nArray is Empty";
		return -1;
	}

	int i = 0;
	for( i=0; i<this->Size; i++)
	{
		if( this->Arr[i]==iValue)
		{
			iCnt++;
			iPos = i;

			if( iCnt == 2)
				break;
		}

	}

	if( iPos == -1)
		return -1;
	else
		return iPos;

}


///////////////////////////////////////////////////////////////////
//
//  Name        :SecondLastOccur
//  Input       :int
//  Returns     :int
//  Description :Computes the Second  Last occurance of element.
//  Author      :Rushikesh Godase
//  Date        :15 Sept 2020
//
///////////////////////////////////////////////////////////////////
int ArrSearch :: SecondLastOccur( int iValue)
{
	int iPos1 = -1 , iPos2 = -1 ,  iCnt = 0;

	if( this->Arr == NULL)
	{
		cout<<"\nArray is Empty";
		return -1;
	}

	int i = 0;
	for( i=0; i<this->Size; i++)
	{
		if( this->Arr[i]==iValue)
		{
			iPos2 = iPos1;
			iPos1 = i;
		}

	}

	if(iPos1 == -1)
    {
        return -1;
    }
    else if(iPos2 == -1)
    {
        return iPos1;
    }
    else
    {
        return iPos2;
    }

}



int main()
{
	int iRet = 0;

	cout<<"\nInside main.";

	/*Array obj1;
	obj1.Accept();		//Accept(&obj1)
	obj1.Display();		//Accept(&obj1)
	*/

	cout<<"\nEnter the size of Array	:";
	int iValue = 0;
	cin>>iValue;

	Array obj2(iValue);	//Array( obj2(4) )
	obj2.Accept();
	obj2.Display();

	Array obj3(obj2);
	obj3.Display();

	ArrSearch obj4;
	obj4.Accept();
	obj4.Display();
	cout<<"\nEnter the element for Frequency.";
	cin>>iValue;
	iRet = obj4.Frequency(iValue);
	cout<<"\nFrequency of "<<iValue<<" is  :"<<iRet;
	iRet = obj4.SearchFirst(iValue);
	cout<<"\nFirst Occurance of "<<iValue<<" is  :"<<iRet;

	iRet = obj4.LastOccur(iValue);
	cout<<"\nLast Occurance of "<<iValue<<" is  :"<<iRet;

	iRet = obj4.SecOccur(iValue);
	cout<<"\nSecond Occurance of "<<iValue<<" is  :"<<iRet;

	iRet = obj4.SecondLastOccur(iValue);
	cout<<"\nSecond Last Occurance of "<<iValue<<" is  :"<<iRet;


	return 0;

}

/*	OUTPUT :

Inside main.
Enter the size of Array :4

Inside Parameterised Constructor
Please Enter the values :46
89
75
16

Elements are :46        89      75      16

Inside Copy Constructor
Elements are :46        89      75      16

Inside Parameterised Constructor
Please Enter the values :12
46
56
46
66
66

Elements are :12        46      56      46      66      66

Enter the element for Frequency.46

Frequency of 46 is  :2
First Occurance of 46 is  :1
Last Occurance of 46 is  :3
Second Occurance of 46 is  :3
Second Last Occurance of 46 is  :1
Inside Destructor.
Inside Destructor.
Inside Destructor.

*/