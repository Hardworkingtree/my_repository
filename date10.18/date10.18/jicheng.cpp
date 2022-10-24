#include<iostream>
using namespace std;

class Animal
{
public:
	Animal()
	{
		cout << "基类的构造函数" << endl;
	}
	virtual void speak() = 0;
	virtual ~Animal()
	{
		cout << "基类的析构函数" << endl;
	}
};

class Cat :public Animal
{
public:
	Cat(string name)
	{
		cout << "子类的构造函数" << endl;
		m_name = new string(name);
		
	}
	void speak()
	{
		cout << "小猫喵喵喵" << endl;
		
	}
	~Cat()
	{
		cout << "子类的析构函数" << endl;
		if (m_name != NULL)
		{
			delete m_name;
			m_name = NULL;
		}
	}
public:
	string *m_name;
};

void test01()
{
	Animal *a = new Cat("tom");
	a->speak();
	delete a;
}


int main()
{
	test01();
	system("pause");
	return 0;
}