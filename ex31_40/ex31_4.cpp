#include <iostream>
using namespace std;

class Test1 {
public:
	virtual void func() { cout << "Kitty on your lap\n"; }
	~Test1() { this->func(); }
};

class Test2 : public Test1 {
public:
	void func() {
		cout << "Tokyo mew mew\n";
		Test1::func();
	}
} obj ;

int main() { return 0; }
