#include<iostream>
using namespace std;

namespace Kitten {
	class Kitty {};
	char *str = "Kitty on your lap\n";
	void sakura() { cout << "Crad Captor SAKURA\n"; }
}

int main() {
	Kitten::Kitty obj;
	cout << Kitten::str;
	Kitten::sakura();

	return 0;
}
