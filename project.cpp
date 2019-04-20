i#include<iostream>
using namespace std;

void truthtable()
{
	int x,y,z;
	cout<<"X\tY\tZ\tXY+Z";
	
	for(x=0;x<=1;++x)
		for(y=0;y<=1;++y)
			for(z=0;z<=1;++z)
			{
				if(x*y+z==2)
					cout<<"\n\n"<<x<<"\t"<<y<<"\t"<<z<<"\t1";
				else
					cout<<"\n\n"<<x<<"\t"<<y<<"\t"<<z<<"\t"<<x*y+z;
			}
void decimaltobinary()
{
int num, bin;
    cout << "Enter the number : ";
    cin >> num;
    cout << "The binary equivalent of " << num << " is ";
    while (num > 0)
    {
        bin = num % 2;
        cout << bin;
        num /= 2;
    }

void temp()
{{
	int x,y,z;
	cout<<"X\tY\tZ\tXY+Z";

	for(x=0;x<=1;++x)
		for(y=0;y<=1;++y)
			for(z=0;z<=1;++z)
			{
				if(x*y+z==2)
					cout<<"\n\n"<<x<<"\t"<<y<<"\t"<<z<<"\t1";
				else
					cout<<"\n\n"<<x<<"\t"<<y<<"\t"<<z<<"\t"<<x*y+z;
			}

}
	
void temperature()
class TEMP
{
    float f,c;
   public:
      float  getdata();
      void display(void);
};

 float  TEMP :: getdata()
{
cout<<"Enter Value for farenheit degree to find for celsius:- ";
cin>>f;
c = (f-32)/1.8;
return(c);
}

void TEMP :: display(void)
{
float v;
 v=getdata();
cout<<"CELSIUS DEGREE = "<<v;
}

void  main()
{
TEMP c;
c.display();
}

void complex()
{class Complex
{
        int num1, num2;
    public:
        void accept()
       {
                cout<<"\n Enter Two Complex Numbers : ";
                cin>>num1>>num2;
        }

        //Overloading '+' operator using Friend function
        friend Complex operator+(Complex c1, Complex c2);   
                           
        void display()
        {
                cout<<num1<<"+"<<num2<<"i"<<"\n";
        }
};
Complex operator+(Complex c1, Complex c2)
{
        Complex c;
        c.num1=c1.num1+c2.num1;
        c.num2=c1.num2+c2.num2;
        return(c);
}

void matrix()
{
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}
void matrixmultiplication()
	{
   {
    int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;

    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    // If column of first matrix in not equal to row of second matrix,
    // ask the user to enter the size of matrix again.
    while (c1!=r2)
    {
        cout << "Error! column of first matrix not equal to row of second.";

        cout << "Enter rows and columns for first matrix: ";
        cin >> r1 >> c1;

        cout << "Enter rows and columns for second matrix: ";
        cin >> r2 >> c2;
    }

    // Storing elements of first matrix.
    cout << endl << "Enter elements of matrix 1:" << endl;
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c1; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }

    // Storing elements of second matrix.
    cout << endl << "Enter elements of matrix 2:" << endl;
    for(i = 0; i < r2; ++i)
        for(j = 0; j < c2; ++j)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }

    // Initializing elements of matrix mult to 0.
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
        {
            mult[i][j]=0;
        }

    // Multiplying matrix a and b and storing in array mult.
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
            for(k = 0; k < c1; ++k)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }

    // Displaying the multiplication of two matrix.
    cout << endl << "Output Matrix: " << endl;
    for(i = 0; i < r1; ++i)
    for(j = 0; j < c2; ++j)
    {
        cout << " " << mult[i][j];
        if(j == c2-1)
            cout << endl;
    }
void bubblesort()
{	template<class bubble>
void bubble(bubble a[], int n)
{
    int i, j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                bubble element;
                element = a[i];
                a[i] = a[j];
                a[j] = element;
            }
        }
    }
}

void main()
{
    int a[6]={1,2,3,4,4,3};
    char b[4]={'s','b','d','e'};
    clrscr();
    bubble(a,6);
    cout<<"\nSorted Order Integers: ";
    for(int i=0;i<6;i++)
        cout<<a[i]<<"\t";
    bubble(b,4);

    cout<<"\nSorted Order Characters: ";
    for(int j=0;j<4;j++)
        cout<<b[j]<<"\t";
   
}
void stackgenericclass()


// define default capacity of stack
#define SIZE 10


// Class for stack
template <class X>
class stack
{
	X *arr;
	int top;
	int capacity;

public:
	stack(int size = SIZE);	// constructor

	void push(X);
	X pop();
	X peek();

	int size();
	bool isEmpty();
	bool isFull();
};

// Constructor to initialize stack
template <class X>
stack<X>::stack(int size)
{
	arr = new X[size];
	capacity = size;
	top = -1;
}

// function to add an element x in the stack
template <class X>
void stack<X>::push(X x)
{
	if (isFull())
	{
		cout << "OverFlow\nProgram Terminated\n";
		exit(EXIT_FAILURE);
	}

	cout << "Inserting " << x << endl;
	arr[++top] = x;
}

// function to pop top element from the stack
template <class X>
X stack<X>::pop()
{
	// check for stack underflow
	if (isEmpty())
	{
		cout << "UnderFlow\nProgram Terminated\n";
		exit(EXIT_FAILURE);
	}

	cout << "Removing " << peek() << endl;

	// decrease stack size by 1 and (optionally) return the popped element
	return arr[top--];
}

// function to return top element in a stack
template <class X>
X stack<X>::peek()
{
	if (!isEmpty())
		return arr[top];
	else
		exit(EXIT_FAILURE);
}

// Utility function to return the size of the stack
template <class X>
int stack<X>::size()
{
	return top + 1;
}

// Utility function to check if the stack is empty or not
template <class X>
bool stack<X>::isEmpty()
{
	return top == -1;	// or return size() == 0;
}

// Utility function to check if the stack is full or not
template <class X>
bool stack<X>::isFull()
{
	return top == capacity - 1;	// or return size() == capacity;
}

// main function
int main()
{
	stack<string> pt(2);

	pt.push("A");
	pt.push("B");

	pt.pop();
	pt.pop();

	pt.push("C");

 	// Prints the top of the stack
 	cout << "Top element is: " << pt.peek() << endl;

	// Returns the number of elements present in the stack
	cout << "Stack size is " << pt.size() << endl;

	pt.pop();

	// check if stack is empty or not
	if (pt.isEmpty())
		cout << "Stack Is Empty\n";
	else
		cout << "Stack Is Not Empty\n";
}

int main()
	

{cout<<"select the program you want to run"<<endl;
	cout<<"1. Use for loop to print the truth table for the expression XY+Z."<<endl;
	cout<<"2.Convert Decimal number into a Binary Number using 1D array."<<endl;
cout<<"3.	Use for loop to print the truth table for the expression XY+Z"
c  out<<"4.	Base class ‘Temperature’ obtains temperature value in Celsius (c) through its parameterized constructor with default arguments and convert it into Fahrenheit value (f) and prints it using the function calculate(). Class ‘Temp’ inherits class ‘Temperature’ to obtain the temperature value in Fahrenheit and converts it into Kelvin value (k) and prints it using the redefined function calculate()."
cout<<"5.Addition of two matrices using operator overloading - C++"<<endl
cout<<"7 write a program to print half pyramid 1"<<endl
                                               1 2
                                               1 2 3
					       1 2 3 4
					       1 2 3 4 5
cout<<"6.Write a program to multiply a matrix"<<endl;
cout<<"7.	Write a generic function to sort the given elements in ascending order using bubble sort algorithm. This generic function must support integer and float types<<endl;
cout<<"8.2.	Write a generic class to implement the operations of a stack data structure using arrays. This generic class must support integer and float types.<<endl;
}


int x;
	cin>>x;
	switch(x)
	{
case 1: truthtable();
       break;
case 2: decimaltoobinary();
       break;
case 3: temp();
       break;}

case 4: temperature();
        break;

case 5: Complex();
        break;

        
case 6: matrix();
        break;

case 7: matrixmultiplication();
        break;
case 8: bubblesort();
	break;
case 9: stakgenericclass()
	break;
