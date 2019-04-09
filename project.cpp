#include<iostream>
using namespace std;
int main()
{cout<<"select the program you want to run"<<endl;
	cout<<"1. Use for loop to print the truth table for the expression XY+Z."<<endl;
	cout<<"2.Convert Decimal number into a Binary Number using 1D array."<<endl;



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

