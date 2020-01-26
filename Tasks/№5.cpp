```c++
#include "pch.h"
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	double x0, v0, t, x1, x2;
	double g = -9.8;
	cin >> x0 >> v0 >> t;
	x1 = x0 + v0 * t + g * t*t / 2;
	x2 = x0 + v0 * t + 1.0 / 2 * g*t*t;
	cout << x1 << endl;
	cout << x2 << endl;
	system("pause");
}
```

