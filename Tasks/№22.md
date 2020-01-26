```c++
// 22.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

 void swap(int* n, int* m)
{
	int b = *n;
	*n = *m;
	*m = b;
}
  int msort(int* n, int* m, int* g)
{
	if (*n > * m)
	{
		swap(n, m);
	}
	if (*m > * g)
	{
		swap(m, g);
	}
	if (*n > * g)
	{
		swap(n, g);
	}
	return *g;
}
 void info(int* d)
{
	cout << "Адрес : " << d << ' ' << "Значение : " << *d << ' ';
}
 int* add(int* n, const int* m)
 {
	 *n = *n + *m;
	 return n;
}

int main()
{
	setlocale(LC_ALL, "rus");
	int a = 1, b = 2, c = 3;
	int* ai = &a;
	int* bi = &b;
	int* ci = &c;
	info(ai);
	cout << endl;
	info(bi);
	cout << endl;
	info(ci);
	cout << endl;
	cout << "Maximum : " << msort(ai, bi, ci) << endl;
	cout << "Адрес:" << &a << ' ' << "Значение: " << *add(add(ai, bi), ci);;
}



​	
```


