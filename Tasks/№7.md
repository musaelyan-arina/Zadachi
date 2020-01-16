~~~c++
// Дан треугольник со сторонами и координатами вершин. Напишите программу, рассчитывающую площадь треугольника.

//Программа должна поддерживать два способа ввода параметров и давать пользователю возможность выбрать нужный способ:
 //через длины сторон;
//через координаты вершин.
 //Параметры и координаты могут быть любым вещественным числом/ 

#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите 1, если нужно рассчитать площадь через длины сторон. Введите 2, если нужно рассчитать площадь через координаты вершин";
	int B;
	cin >> B;
	if (B == 1)
	{
		double a, b, c, p, S;
		cout << "a=";
		cin >> a;
		cout << "b=";
		cin >> b;
		cout << "c=";
		cin >> c;
		if (a < b + c && b < a + c && c < a + b)
		{
			cout << "Треугольник существует" << endl;

```
		p = (a + b + c) / 2;
		cout << "p=" << p << endl;
		S = sqrt(p*(p - a)*(p - b)*(p - c));
		cout << "S=" << S;
	}
	else
	{
		cout << "Треугольника не существует";
	}
}
else if (B == 2)

{
	double x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	cin >> x3 >> y3;

	double a1, a2, a3, p2, S2;
	a1 = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
	cout << "a1=" << a1 << endl;
	a2 = sqrt((x1 - x3)*(x1 - x3) + (y1 - y3)*(y1 - y3));
	cout << "a2=" << a2 << endl;
	a3 = sqrt((x2 - x3)*(x2 - x3) + (y2 - y3)*(y2 - y3));
	cout << "a3 =" << a3 << endl;
	p2 = (a1 + a2 + a3) / 2;
	cout << "p2=" << p2 << endl;
	S2 = (sqrt(p2*(p2 - a1)*(p2 - a2)*(p2 - a3)));
	cout << "S=" << S2;
}
else
{
	cout << "Ошибка" << endl;
}
```

}








~~~

