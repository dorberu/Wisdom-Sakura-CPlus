#include <iostream>
using namespace std;

class Kitty {
public:
	virtual void paint() { cout << "Kitty on your lap\n"; }
};

class Chobits : public Kitty {
public:
	void paint() { cout << "Chobits\n"; }
} obj1 ;

class Di_Gi_Gharat : public Chobits {
} obj2 ;

int main() {
	Kitty *po = &obj2;

	po->paint();
	return 0;
}
