#include <iostream>
using namespace std;

class Kitty {
public:
	~Kitty() { cout << "Kitty on your lap\n"; }
};

int main() {
	Kitty *obj;
	obj = new Kitty[10];

	delete [] obj;
	return 0;
}
