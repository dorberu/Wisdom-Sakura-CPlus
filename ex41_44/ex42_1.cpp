#include<iostream>
using std::cout;

class Kitty {
public:
	char *str;
	void print() const {
		//str = "Chobits";
		cout << str;
	}
	Kitty(char *str) { this->str = str; }
};

int main() {
	Kitty obj("Kitty on your lap\n");
	obj.print();
	return 0;
}
