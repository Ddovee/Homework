#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin >> a >> b;
	if (a < b)
	{
		cout << b << " is large.";
	}
	else if (a > b)
	{
		cout << a << " is large.";
	}
	else if (a == b)
	{
		cout << "These numbers are equal.";
	}
	return 0;
} 
