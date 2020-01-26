```c++
#include "pch.h"
#include <iostream>
#include<cstdlib>
#include "time.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));//установка генератора базы псевдослучайных чисел;устанавливает в качестве базы текущее время
	int a, v;

	do {
		int i = 0;//счетчик попыток
		int n = rand() % 101;//генерация случайных чисел;диапазон
		do {
			if (i == 5) {
			cout << "You've lost 5 attempts. Hidden number is" << n  << endl;
				break;
			}
			cout << " Hello! Let's play a game 'Guess the number' " << endl;
			cin >> a;
			if (a == n) {
				cout << "Congratulations! You guess!!!" << endl;
				break;
			}
			if (a > n) {
				cout << "The hidden number is less" << endl;
			}
			if (a < n) {
				cout << "The hidden number is bigger" << endl;
			}
			i++;
		} while(4)
			 cout << "Press 1 to continue or another buttom if you wanna leave" << endl;
			 cin >> v;
	} while (v == 1);
		  
	return 0;
}





```

