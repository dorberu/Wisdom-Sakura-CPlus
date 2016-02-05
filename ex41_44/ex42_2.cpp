#include<iostream>
using std::cout;

class Kitty {
public:
	void print() const {
		cout << "Kitty on your lap";
	}
};

int main() {
	// error: uninitialized const ‘obj’
	const Kitty obj = Kitty();
	obj.print();

	return 0;
}
