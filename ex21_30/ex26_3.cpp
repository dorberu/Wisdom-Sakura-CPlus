#include<iostream>
using namespace std;

class Base {
public:
	char *name;
};

class Derived1: virtual public Base {
public:
	int age;
};

class Derived2 : virtual private Base {
public:
	char *sex;
};

class Derived3 : public Derived1 , public Derived2 {
public:
	void print() {
		cout << "名前 : " << name;
		cout << "\t年齢 : " << age;
		cout << "\t性別 : " << sex << '\n';
	}
} obj ;


int main() {
	obj.name = "前原しのぶ";
	obj.age = 13;
	obj.sex = "女";
	obj.print();
	return 0;
}
