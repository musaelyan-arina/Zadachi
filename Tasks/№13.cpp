```c++
// Степень двойки.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	long long int x;
	long long int pow = 1;
	int k = 1;//результат
	cout << "Введите число " << endl;
	cin >> x;
	if (x == 0) {
		cout << 0;
	}
	else
		while ((pow *= 2) <= x) 
			k++;
	cout << k;
	return 0;
}
```

