#include<iostream>
using namespace std;

class Animal
{
public:
	virtual void speak()
	{
		cout << "动物在说话" << endl;
	}
};

class Cat :public Animal
{
public:
	void speak()
	{
		cout << "小猫喵喵喵" << endl;
	}
};

class Dog :public Animal
{
public:
	void speak()
	{
	cout << "小狗汪汪汪" << endl;
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