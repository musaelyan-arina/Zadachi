```c++
/ 15.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <algorithm>

using namespace std;

void sort(int* array, int lenght)
{
	for (int i = lenght; i >= 0; i--) // cортировка по убыванию
	{
		for (int j = 0; j < i - 1; j++)
		{
			if (array[j] > array[j + 1]) swap(array[j], array[j + 1]);
			
		}
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	int size;
	cout << "Введите количество сигналов: "; cin >> size;
	int* a = new int[size];
	cout << "Введите элементы массива: ";
	for (int i = 0; i < size; i++)
	{
		cin >> a[i]; 
		sort(a, i+1); 
		for (int j = i; j >= 0; j--) 
		{
			if (j >= 5) j = 4;
			cout << a[j] << " ";
		}
		cout << endl;

	}
	delete[] a;
	return 0;
}

