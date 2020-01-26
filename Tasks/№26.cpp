~~~c++
// 26.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

struct IntArray
{
	int* data;//массив из целых чисел
	int size;//размер
};

//Создаёт динамический массив размера size и сохраняет его в поле data переменной arr. Поле size структуры arr становится равным параметру size 
void create(IntArray* arr, int size)
{
	arr->data = new int[size];
	arr->size = size;
}

// Возвращает элемент массива с индексом index, при этом проверяет выход за границы массива. Если index лежит за пределами массива, вывести сообщение об ошибке и прервать работу программы 
int get(IntArray* arr, int index)
{
	if (index >= arr->size)
	{
		cout << "Выход за пределы массива";
		return 0;
	}
	else 
	return arr->data[index];
}

// Изменяет значение элемента массива с индексом index на значение параметра value, при этом проверяет выход за границы массива. Если index лежит за пределами массива, вывести сообщение об ошибке и прервать работу программы 
void set(IntArray* arr, int index, int value)
{
	if (index >= arr->size)
	{
		cout << "Выход за пределы массива";
	}
	else arr->data[index] = value;
}

// Выводит на экран содержимое массива в формате: [1, 2, 3] 
void print(IntArray* arr)
{
	cout << '[';
	for (int i =1;i < arr->size-1;i++)
	{
		cout << arr->data[i] << ",";
	}
	cout << arr->data[arr->size-1] << ']' << endl;
}

//Изменяет размер массива с сохранением элементов.Если новый размер меньше, хвостовые элементы обрезаются, если больше, то дополнительные элементы инициализируются нулём
void resize(IntArray* arr, int newSize)
{
	int* new_arr = new int[newSize];
	for (int i = 0; i < min(newSize, arr->size); i++) new_arr[i] = arr->data[i];
	delete[] arr->data;
	arr->data = new_arr;
	if (newSize > arr->size) for (int i = arr->size; i < newSize; i++) arr->data[i] = 0;
	arr->size = newSize;
	
}

// Освобождает память занятую массивом. Поле data становится равным nullptr, поле size становится равным нулю. Предусмотреть случай попытки удаления уже удалённого массива 
void free(IntArray* arr)
{
	if (arr->data == 0x0) cout << "Массив уже удален";
	delete[] arr->data;
	arr->data = nullptr;
	arr->size = 0;
}

int main()
{
	setlocale(LC_ALL, "rus");
	IntArray arr;
	create(&arr, 31);
	for (int i = 0; i < arr.size; i++) set(&arr, i, i);
	print(&arr);
	resize(&arr, 51);
	print(&arr);
	resize(&arr, 11);
	print(&arr);
	free(&arr);
	free(&arr);//для проверки удален ли массив

```
return 0;
```

}






~~~

