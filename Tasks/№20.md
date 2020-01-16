~~~c++
// 20.cpp : Этот фай+л содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdlib>
using namespace std;
void bubble(int size, int a[]) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size-(i+1); j++) {
			if (a[j] >a[j + 1]) {
				swap(a[j], a[j + 1]);
			}//меняем местами значения переменных в массиве
		}
	}
}// сортировка "пузырек"

void print(int a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
}

int main() {
	setlocale(LC_ALL, "rus");
	int size;
	cout << "Введите размер массива: " << endl;
	cin >> size;
	int* a = new int[size];//выделение памяти под массив

```
cout << "Введите числа для заполнения массива: " << endl;

for (int i = 0; i < size; i++) {
	cin >> a[i]; // вводим элементы
}

bubble(size, a);//вызов функции

cout << "Массив в отсортированном виде: ";
print(a, size);
delete[] a;//освоюождение памяти
return 0;
```

}
~~~

