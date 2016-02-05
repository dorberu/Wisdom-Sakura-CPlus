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

void getRef(Base &obj) {
	cout << obj.str;
}

int main() {
	obj.str = "Kitty on your lap";
	getRef(obj);
	return 0;
}
