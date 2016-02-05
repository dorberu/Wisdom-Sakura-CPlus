#include <iostream>
using namespace std;

class Base {
public:
	char *str;
};

class Derived : public Base {
public:
	int i;
} obj ;

int main() {
	obj.str = "Kitty on your lap";

	Base *po = &obj;
	cout << po->str;

	return 0;
}
