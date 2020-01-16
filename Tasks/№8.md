```c++
#include "pch.h"
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	double a, b;
	char operation;
	setlocale(LC_ALL, "Russian");
	cout << "Введите данные" << endl;
	cout << "a = ";
	cin >> a;
		cout << "b = ";
		cin >> b;
		cout << "Введите operation";
		cin >> operation;
	switch (operation) 
	{
	case('+'):
		cout << "a+b=" << a + b << endl;
		break;
	case('-'):
		cout << "a-b=" << a - b << endl;
		break;
	case('*'):
		cout << "a*b=" << a * b << endl;
		break;
	case('/'):
		if (b == 0)
			cout << "Error!!!На 0 делить нельзя!!!";
		else
			cout << "a/b=" << a / b << endl;
	default:
		cout << "Error!! Неккоректо введены данные" << endl;
	}
		return 0;
	}

​	

​	

​	


```

