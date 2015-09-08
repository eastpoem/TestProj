// MyConsoleApp1.cpp : 定義主控台應用程式的進入點。
//
#include "stdafx.h"
//#include "Source.cpp"

#include <iostream> 
#include <string>

using namespace std;

class Demo{
public:
	void setA(int n);
	void setB(int n);
	int getA();
	int getB();
	int do_something();

private:
	int a;
	int b;
};

int Demo::do_something(){
	return getA() + getB();
};

void Demo::setA(int n) { a = n; }
void Demo::setB(int n) { b = n; }
int Demo::getA() { return a; }
int Demo::getB() { return b; }


int _tmain(int argc, _TCHAR* argv[])
{
	cout << endl;

	Demo t;
	t.setA(11);
	t.setB(22);
	t.setB(22);

	cout << endl;

	cout << t.do_something() << endl;

	return 0;
}

