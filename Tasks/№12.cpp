```c++
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "Введите число " << endl;
	cin >> a;
	for (int i = 2; i < sqrt(a); i++) {
		if (a % i == 0) {
			cout << "Число составное " << endl;//т.к делится на 2
		}
		else
			cout << "Число простое" << endl;
		return 0;
	}
	

}
```



```c++

```

