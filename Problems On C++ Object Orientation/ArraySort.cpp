////////////////////////////////////////////////////////////////
//
//	Design one class which performs all basic operations on Array
//	such as,
//	1) Memory Allocation
//	2) Memory Deallocation
//	3) Copy the contents from one memory into another memory
//	4) Accept the data and stored it into the Array
//	5) Display Contents of Array
//
////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;


//Class Array
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

class Sorting : public Array
{
	public :
		Sorting( int No = 6):Array(No)
		{}

		void BubbleSort();
		void BubbleSortX();
		void SelectionSort();
		void InsertionSort();
};

///////////////////////////////////////////////////////////////////
//
//  Name        :Accept
//  Input       :void
//  Returns     :void
//  Description :Accepts N elements from user (through constructor)
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

	cout<<"\nPlease Enter the values	:\n";

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
//  Name        :BubbleSort
//  Input       :void
//  Returns     :void
//  Description :Sorts Array elemets using bubble sort[increasing order].
//  Author      :Rushikesh Godase
//  Date        :18 Sept 2020
//	Best Case and Worst Time Complexity is O(N^2)	
//
///////////////////////////////////////////////////////////////////
void Sorting :: BubbleSort()
{
	cout<<"\nInside Bubble Sort.";

	for(int Pass = 1; Pass<Size; Pass++)
	{
		for( int i=0; i<Size-Pass; i++)
		{
			if( Arr[i] > Arr[i+1])
			{
				int Temp 	 = Arr[i];
					Arr[i] 	 = Arr[i+1];
					Arr[i+1] = Temp;
			}
		}
	}
}


///////////////////////////////////////////////////////////////////
//
//  Name        :BubbleSortX
//  Input       :void
//  Returns     :void
//  Description :Sorts Array elemets using bubble sort[increasing order].
//  Author      :Rushikesh Godase
//  Date        :18 Sept 2020
//	Best Case TC is O(N) & Worst Case TC is O(N^2)	
//
///////////////////////////////////////////////////////////////////
void Sorting :: BubbleSortX()//Optimised Code 
{
	cout<<"\nInside Efficient Bubble Sort.";
	BOOL Sort = FALSE;

	for(int Pass = 1; Pass<Size; Pass++)
	{
		Sort = FALSE;

		for( int i=0; i<Size-Pass; i++)
		{
			if( Arr[i] > Arr[i+1])
			{
				int Temp 	 = Arr[i];
					Arr[i] 	 = Arr[i+1];
					Arr[i+1] = Temp;

				Sort = TRUE;
			}
		}

		if( Sort = FALSE)
		{
			break;
		}
	}
}


int main()
{
	cout<<"\nInside main.";

	int iValue = 0;

	cout<<"\nEnter the Number of elements  :";
	cin>>iValue;

	Sorting obj1(iValue);
	obj1.Accept();
	obj1.Display();
	obj1.BubbleSort();
	obj1.Display();


	return 0;
}