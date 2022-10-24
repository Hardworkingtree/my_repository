#include<iostream>
using namespace std;
#include<string>

class Person1
{
public:
	Person1()
	{
		cout << "父类构造函数调用" << endl;
	}
	virtual void ss1(string name) = 0;
	
	virtual ~Person1()
	{
		cout << "父类析构函数调用" << endl;
	}
};


class Person2 :public Person1
{
public:
	Person2()
	{
		cout << "子类构造函数调用" << endl;
		
	}
	void ss1(string name)
	{
		cout << "ss2" << endl;
		m_Name = new string(name);
	}
	~Person2()
	{
		cout << "子类析构函数调用" << endl;
		if (m_Name != NULL)
		{
			delete m_Name;
			m_Name = NULL;
		}
	}
public:
	string *m_Name;
};

void test01()
{
	Person1 *p1 = new Person2;
	p1->ss1("戴拿");
	delete p1;
}

int main()
{
	test01();
	system("pause");
	return 0;
}