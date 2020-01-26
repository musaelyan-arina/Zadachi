~~~c++
// Факториал.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

int main()
{
	int a;
	int result = 1;
	int i;
	cin >> a;
for (i = 1; i <= a; i++) {
	result = result * i;
};
cout << result << endl;
system("pause");


}
		

  


~~~

