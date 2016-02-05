#include<iostream>
using namespace std;

namespace Kitten {
	void Kitty();
	char *str = "Kitty on your lap\n";
}

int main() {
	Kitten::Kitty();
	return 0;
}

namespace Kitten {
	void Kitty() { cout << str; }
}
