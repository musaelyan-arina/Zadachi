```c++
#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
	float a, b, c, x, x1, x2, D;
	setlocale(LC_ALL, "Russian");
	cout << "Введите значение a:";
	cin >> a;
	cout << "Введите значение b:";
	cin >> b;
	cout << "Введите значение с:";
	cin >> c;
	if (c == 0) {
		if (a == 0) {
			cout << "На ноль делить нельзя" << endl;
			return 0;
		 }
		x = -b / a;
		cout << "Первый корень  = 0" << endl;
		cout << "Второй корень =   " << x << endl;
		return 0;
	 }

		
	if (a == 0) {
		if (b == 0) {
			if (c == 0) {
				cout << "Множество решений";

			}
			else
				cout << "Нет решений";
		}
		else {
			cout << "Корень равен 0 " << endl;
			x = -c / b;
			cout << "Корень равен = " << x << endl;
		}
		    
	}
	else {
		D = b * b - 4 * a *c;
		if (D == 0) {
			x = -b / (2 * a);
			cout << "корень равен:" << x << endl;
		}
		if (D > 0) {
			x1 = (-b + sqrt(D)) / (2 * a);
			x2 = (-b - sqrt(D)) / (2 * a);
			cout << "Первый корень равен:" << x1 << endl;
			cout << "Второй корень равен:" << x2 << endl;
		}
		if (D < 0) {
			cout << "Решений нет" << endl;
		}
	}
     system("pause");
}





```

