#include<iostream>
using namespace std;
int main()
{
	//a)使用一条语句，包含一个流插入运算符
	cout << "1 2 3 4";
	//b)使用一条语句，包含四个流插入运算符
	cout << endl;
	cout << "1 " << "2 " << "3 " << "4";
	//c)使用四条语句
	cout << endl;
	cout << "1 " ;
	cout << "2 " ;
	cout << "3 " ;
	cout << "4" << endl;
	return 0;
} 
