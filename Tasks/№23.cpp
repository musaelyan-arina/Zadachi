~~~c++
// Полиндром №23.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

 bool palindrom (char s1[], int length)
 {
	string s;
	for (int i = 0; i < length; i++) 
	{
     //проверяет аргумент,является ли он десятичной цифрой
	 if (isdigit(s1[i]))  s += s1[i];
	  else
		   if (isalpha(s1[i])) //параметр проверяет, является ли аргумент буквой алфавита
			{
			  s += tolower(s1[i]);//преобразование загланых букв в строчные
			}
	}
	int len = s.length(); //длина строки

```
for (int i = 0; i <= len/2; i++) 
{
	if (s[i] != s[len - i - 1])	return false;
}
return true;
```

 }

int main() {
	setlocale(LC_ALL, "Russian");
	char s1[21]{ 0 };
	cout << "Введите проверяемую строку" << endl;
	int length = strlen(s1);
	cin.getline(s1, 21);// ввод полной строки + включая пробелов)
	if (palindrom(s1, length))   cout << "Палиндром";
	else    cout << "Не палиндром";
	return 0;
}
~~~

