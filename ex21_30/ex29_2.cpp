#include <iostream>
using namespace std;

class Kitty {
public:
	Kitty(char *str) {
		cout << str;
	}
};
int main() {
	Kitty *obj;
	obj = new Kitty("Kitty on your lap\n");

	delete obj;
	return 0;
}
