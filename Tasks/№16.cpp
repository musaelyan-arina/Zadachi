~~~c++
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

void factorization(int n)
{
	vector<int> factors;
	int step;//степень
	for (int i = 2; i < n;)
	{
		if (n % i == 0)
		{
			factors.push_back(i);//добавляем ячейку в конец вектора
			n/=i;
			}
		else i++;
	}

```
if (n > 1) factors.push_back(n);//добавляем ячейку

for (int i = 0; i < factors.size(); i++)//2-так записывают функцию для длины вектора
{
	cout << factors[i];
	step = count(factors.begin(), factors.end(), factors[i]);//подсчет степени
	if (step != 1)
	{
		cout << "^" << step;
		i += step-1 ;//отвечает за пропуск ячеек с числом, которое встречается более одного раза
	       if (i != factors.size()-1) cout << "*";
	}
	else if (i != factors.size()-1) cout << "*";
}
```

}

int main()
{
	setlocale(LC_ALL, "rus");
	int n;
	cout << "Введите число: ";
	cin >> n;
	if (n == 1)
	{
		cout << "Число ни простое, ни составное";
		return 0;
	}
	else if (n <= 0)
	{
		cout << "Число не натуральное";
	}
	else
		cout << "Результат: ";
		factorization(n);
	return 0;
    
}
~~~

