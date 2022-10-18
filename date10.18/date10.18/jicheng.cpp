#include<iostream>
using namespace std;

class Animal
{
public:
	virtual void speak()
	{
		cout << "������˵��" << endl;
	}
};

class Cat :public Animal
{
public:
	void speak()
	{
		cout << "Сè������" << endl;
	}
};

class Dog :public Animal
{
public:
	void speak()
	{
	cout << "С��������" << endl;
	}
};

void doSpeak(Animal &a)
{
	a.speak();
}

void test01()
{
	Cat c1;
	doSpeak(c1);
	Dog d2;
	doSpeak(d2);
}

int main()
{
	test01();
	system("pause");
	return 0;
}