~~~c++
// Индекс массы тела(17).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
 double BMI(double weight, double height) {
	 double index = (weight / (height * height));
		return index;
}
  void printBMI(double BMI) {
	if (BMI < 18.5)
	{
		cout << "Underweight(недостаточная масса)";
	}
	if ((18.5 <= BMI) && (BMI < 25.0))
	{
		cout << "Normal weight(норма)";
	}
	if ((25.0 <= BMI) && (BMI < 30.0))
	{
		cout << "Overweight(избыточная масса)";
	}
	if (30.0 <= BMI)
	{
		cout << "Obesity(ожирение)";
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	double weight, height;
	cout << "Укажите вес в килограммах и рост в сантиметрах" << endl;
	cin >> weight >> height;

```
printBMI(BMI(weight/100, height));

return 0;
```

}
~~~

