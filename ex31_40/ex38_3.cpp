#include<iostream>
using namespace std;

namespace Kitten {
	namespace Kitty {
		char *str = "Kitty on your lap\n";
	}
	void print() {
		cout << Kitty::str;
	}
}

int main() {
	Kitten::print();
	cout << Kitten::Kitty::str;
	return 0;
}
