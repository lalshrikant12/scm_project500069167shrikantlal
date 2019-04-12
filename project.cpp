#include<iostream>
using namespace std;
int main()
{cout<<"select the program you want to run"<<endl;
	cout<<"1. Use for loop to print the truth table for the expression XY+Z."<<endl;
	cout<<"2.Convert Decimal number into a Binary Number using 1D array."<<endl;
cout<<"3.	Use for loop to print the truth table for the expression XY+Z"
cout<<"4.	Base class ‘Temperature’ obtains temperature value in Celsius (c) through its parameterized constructor with default arguments and convert it into Fahrenheit value (f) and prints it using the function calculate(). Class ‘Temp’ inherits class ‘Temperature’ to obtain the temperature value in Fahrenheit and converts it into Kelvin value (k) and prints it using the redefined function calculate()."
cout<<"5.Addition of two matrices using operator overloading - C++"<<endl
	int x;
	cin>>x;
	switch(x)
	{
case1: int x,y,z;
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
	
	return 0;
	break;
case2 :    int num, bin;
    cout << "Enter the number : ";
    cin >> num;
    cout << "The binary equivalent of " << num << " is ";
    while (num > 0)
    {
        bin = num % 2;
        cout << bin;
        num /= 2;
    }
    return 0;
    break;
		default :cout<<"invalid choice"<<endl;
	}
case3 : 
 
 
int main()
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
	
	return 0;
}
case 4: 

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
case 5:class Complex
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
int main()
{
        Complex c1,c2, sum;      //Created Object of Class Complex i.e c1 and c2

        c1.accept();  //Accepting the values
        c2.accept();

        sum = c1+c2;   //Addition of object
    
        cout<<"\n Entered Values : \n";
        cout<<"\t";
        c1.display();    //Displaying user input values
        cout<<"\t";
        c2.display();
  
        cout<<"\n Addition of Real and Imaginary Numbers : \n";
        cout<<"\t";
        sum.display();  //Displaying the addition of real and imaginary numbers
     
        return 0;
}

