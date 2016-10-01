#include <iostream>
using namespace std;

int valplus(int a,int b);


int main(void)
{
	int sum;
	int number1=10;
	int number2 = 20;
	cout << number1 << " " << number2 << endl;
	sum=valplus(number1, number2);
	cout << number1 << " " << number2 << endl;
	cout << sum<<endl;
	
//	cin >> number1;

	return 0;
	
}


int valplus(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	
	return a+b;
}