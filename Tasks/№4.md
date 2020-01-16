```c++
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	{
		int a, c;
		double b;//доп. переменная
		cin >> a >> b;
		c = a;
		a = b;
		b = c;
		cout << "a = " << a << endl;
		cout << "b = " << b << endl;
		system("pause");
	}
	cout << endl;
	{
		int a;
		double b;
		cin >> a >> b;
		a = a + b;
		b = a - b;
		a = a - b;
		cout << "a = " << a << endl;
		cout << "b = " << b;
	}
}
```

