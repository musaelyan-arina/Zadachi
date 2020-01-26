~~~c++
// Возведение в степень

#include "pch.h"
#include <iostream>
#include<cmath>
#include"cstdlib"
#include <stdio.h>
#include<clocale>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double b, i, n;
	int c = 1;

```
cout << "Введите число" << endl;
cin >> b;
cout << "Введите степень" << endl;
cin >> i;
if (i >= 0) {
	for (n = 0; n < i; n++) {
		c *= b;
	}
	cout << c << endl;
}
else {
    if (b==0){
        cout << "Введены неверные данные" << endl;
        return 4;
    }
	for (n = 0; n > i; n--) {
		c *= (1 / b);
	}
	cout << c << endl;
}
```

}

​	



​     


~~~

