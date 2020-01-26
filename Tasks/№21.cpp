~~~c++
#include <iostream>
#include <cstdlib>
#include<time.h>
using namespace std;

int main() {
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	int m, n, v;
	int M, N;
	do {
		int a[10][8]{ 0 };
		int i = 1;//попытки
		m = rand() % 10;//строки
		n = rand() % 8;//столбцы
		a[m][n] = 6;
		do {
			cout << "Введите значения : " << endl;
			cin >> M >> N;
			//cout << m << ' ' << n << endl;

```
		if (i == 5)
		{
			cout << "---Вы истратили все попытки. Вы проиграли!---" << endl;
			break;
		}

		else if (M >= 10 || N >= 8 || M < 0 || N < 0) 
		{
			cout << "---Недопустимые координаты---" << endl;
		}
          
		else if (a[M][N] == 6) 
		{
			cout << "---Юхуууу! Вы угадали! :)" << endl;
			break;
		}
```

​			

```
		else if (a[M][N] == 2)
		{
		cout << "---Вы уже вводили данные координаты---" << endl;
		
		}

		else 
		{
			a[M][N] = 2;
			cout << "---Неверные координаты---" << endl;	
			i++;
		}
	} while (true);

	cout << "---Нажмите 1, если хотите продолжить. Чтобы выйти, нажмите любую другую клавишу---" << endl;
	cin >> v;
} while (v == 1);
return 0;
```

}
~~~

