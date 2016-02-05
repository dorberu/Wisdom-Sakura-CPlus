#include<iostream>
using std::cout;

class Kitty {
	static char *str;
public:
	char * getStr() { return str; }
};

char * Kitty::str = "Kitty on your lap\n";

int main() {
	Kitty obj1 , obj2;
	cout << "obj1.str = " << obj1.getStr();
	cout << "obj2.str = " << obj2.getStr();
	return 0;
}
