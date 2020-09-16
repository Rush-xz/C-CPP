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

class Array
{
	protected :			//Access Specifier
			int Size;
			int *Arr;

	public :
			Array( int Value = 10)		//Parameterised Constructor
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

int main()
{
	cout<<"\nInside main.";

	Array obj1;
	obj1.Accept();		//Accept(obj1)
	obj1.Display();		//Accept(obj1)

	cout<<"\nEnter the size of Array	:";
	int iValue = 0;
	cin>>iValue;

	Array obj2(iValue);	//Array( obj2(4) )
	obj2.Accept();
	obj2.Display();

	Array obj3(obj2);
	obj3.Display();

	return 0;
}