#include<iostream>
using namespace std;

class Kitty {
public:
	Kitty() { cout << "Kitty on your lap\n"; }
};

class LOVE_HINA : public Kitty {
public:
	LOVE_HINA() { cout << "LOVE HINA\n"; }
} obj ;

int main() {
	return 0;
}
