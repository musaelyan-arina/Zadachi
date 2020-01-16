~~~c++
/ Min и Max в одномернома массиве(18).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<ctime>
#include <cstdlib>
using namespace std;

int main()
{
	srand(time(NULL));
	int a[20];
	for (int i = 0; i < 20; i++) {
		a[i] = rand() % 201 -100;
		cout << a[i] << " ";
	}
		int max = -100;
		int min = 100;
		for (int i = 0; i < 20; i++) {

```
		if (a[i] > max) {
			max = a[i];
		}
		if (a[i] < min) {
			min = a[i];
		}
	
     }
	cout << endl;
	cout << " max = " << max<< endl << " min = " << min << endl;
	return 0;
}
```


~~~

