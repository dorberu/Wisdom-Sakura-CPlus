#include <iostream>
using namespace std;

class Kitty {
public:
	char *str;
	Kitty(char *str) { this->str = str; }
	void call();
} obj[3] = { "Kitty on your lap\n" , "Di Gi Gharat\n" , "Card Captor Sakura\n" };

void print(Kitty *obj) {
	cout << obj->str;
}

void Kitty::call() {
	print(this);
}

int main() {
	for (int i = 0 ; i < 3 ; i++) obj[i].call();
	return 0;
}
