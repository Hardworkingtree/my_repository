#include<iostream>
using namespace std;

class Animal
{
public:
	Animal()
	{
		cout << "����Ĺ��캯��" << endl;
	}
	virtual void speak() = 0;
	virtual ~Animal()
	{
		cout << "�������������" << endl;
	}
};

class Cat :public Animal
{
public:
	Cat(string name)
	{
		cout << "����Ĺ��캯��" << endl;
		m_name = new string(name);
		
	}
	void speak()
	{
		cout << "Сè������" << endl;
		
	}
	~Cat()
	{
		cout << "�������������" << endl;
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