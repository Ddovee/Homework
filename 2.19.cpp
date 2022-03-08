#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout << "Input three different integers: ";
	cin >> a >> b >> c;
	int i = a + b + c;
	cout << "Sum is " << i <<endl;
	cout << "Average is " << i/3 << endl;
	cout << "Prodduct is " << a * b * c << endl;
	int max,min;
	if (a < b)
	{
		max = b;
		min = a;
	}
	else
	{
		max = a;
		min = b;
	}
	if (max < c)
	{
		max = c;
	}
	if (min > c)
	{
		min = c;
	}
	cout << "Smallest is " << min << endl;
	cout << "Largest is " << max << endl;
	return 0;
}
