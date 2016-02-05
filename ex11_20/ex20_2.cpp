#include<iostream>
using namespace std;

class Kitty {
public:
	void nyan() { cout << "Kitty on your lap\n"; }
} ;

class Di_Gi_Gharat : public Kitty {
public:
	void nyan() { cout << "Di Gi Gharat\n"; }
} obj ;

int main() {
	obj.Kitty::nyan();
	obj.nyan();
	return 0;
}
