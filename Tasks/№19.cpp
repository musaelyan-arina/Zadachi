~~~c++
// Количество цифр № 19.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	srand(time(NULL));
	int n;
	int sum=0;
	cin >> n;
	int* a = new int[n];//динамический массив
	

```
for (int i = 0; i < n; i++) 
{
	a[i] = rand() % 10;
	cout << a[i] << " ";
}
   for (int k = 0; k < 10; k++)
   {
	   sum = 0;
	   for (int j = 0; j < n; j++) 
	   {
		   if (k == a[j]) {
			   sum++;
		   }
	   }
	     if (sum != 0) //чтобы не выводились цифры, количество которых не 0;	
		cout << endl << k << " : " << sum;
	    	
   }
delete[] a;
return 0;
```

}
~~~

