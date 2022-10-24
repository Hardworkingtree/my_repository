#include<iostream>
using namespace std;
#include<string>

class Person1
{
public:
	virtual void ss1(string name) = 0;

};

class Person2 :public Person1
{
public:
	void ss1(string name)
	{
		cout << name << endl;
	};

};


void test01()
{
	Person1 *p1 = new Person2;
	p1->ss1("ÄÈÄÈ");
	delete p1;
}
int main()
{
	test01();
	system("pause");
	return 0;
}