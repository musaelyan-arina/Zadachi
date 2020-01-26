~~~c++
// 27.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdlib>
#include<time.h>
using namespace std;

enum IteamType
{
	SWORD,
	BOW,
	SPELL,
};

enum Element
{
	Fire,
	Air,
	Ground,
	Water,
};

struct Sword
{
	int damage;
};

struct Bow
{
	int damage;
	int charge_time;
	double distance;
};

struct Spell
{
	int damage;
	Element element;
	double distance;
};

struct Iteam
{
	IteamType iteam_type;

```
union
{
	Sword sword;
	Bow bow;
	Spell spell;
 };
```

};

//Создает и возвращает предмет со случайными характеристиками
Iteam getRandomIteam()
{
	Iteam res;
	res.iteam_type = static_cast<IteamType>(rand() % 3);

```
switch (res.iteam_type)
{
case SWORD:
	res.sword.damage = rand() % 1000;
	break;

case BOW:
	res.bow.damage = rand() % 300;
	res.bow.charge_time = rand() % 200;
	res.bow.distance = rand() % 50;
	break;

case SPELL:
	res.spell.damage = rand() % 600;
	res.spell.element = static_cast<Element>(rand() % 4);
	res.spell.distance = rand() % 20;
	break;
}
return res;
```

}

//Выводит на экан информацию о предмете
void printIteam(Iteam loot)

{
	switch (loot.iteam_type)
	{
	case SWORD:
		cout << "----------SWORD----------" << endl;
		cout << "DAMAGE:" << '\t'<<loot.sword.damage << endl;
		break;

```
case BOW:
	cout << "----------BOW----------" << endl;
	cout << "DAMAGE:" <<     '\t'<<'\t'<< loot.bow.damage << endl;
	cout << "CHARGE_TIME:" <<'\t'<< loot.bow.charge_time << endl;
	cout << "DISTANCE:" <<'\t'<< loot.bow.distance << endl;
	break;

case SPELL:
	cout << "----------SPELL----------" << endl;
	cout <<"DAMAGE:"<<'\t' <<'\t'<< loot.spell.damage << endl;
	cout << "DISTANCE:" <<'\t'<< loot.spell.distance << endl;
	cout << "ELEMENT:"<<'\t';
	switch (loot.spell.element)
	{
	case Fire:
		cout << "FIRE" << endl;
		break;
	case Air:
		cout << "AIR" << endl;
		break;
	case Ground:
		cout << "GROUND" << endl;
		break;
	case Water:
		cout << "WATER" << endl;
		break;
	}

}
```

}

int main()
{
	srand(time(NULL));
	Iteam mas[5];
	for (int i = 0; i < 5; i++)
	{
		printIteam(getRandomIteam());
		cout << endl;
		cout << endl;
	}
}


~~~

