#include <iostream>
using namespace std;

template <class X> class stack {
	X box[64];
	int index;
public:
	bool push(X var) {
		if (index > 63) return false;
		box[index] = var;
		index++;
		return true;
	}
	X pop() {
		if (index == 0) return NULL;
		return box[--index];
	}
	stack() { index = 0; }
};

int main() {
	stack < int > n_obj;
	n_obj.push(10);
	n_obj.push(100);

	cout << n_obj.pop() << '\n';
	cout << n_obj.pop() << '\n';

	stack < char * > cp_obj;
	cp_obj.push("Kitty on your lap\n");
	cp_obj.push("Chobits\n");

	cout << cp_obj.pop();
	cout << cp_obj.pop();
	return 0;
}
