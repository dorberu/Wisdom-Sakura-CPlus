#include <iostream>
using namespace std;

class Kitty {
public:
	char *str;
	Kitty() { this->str = "Kitty on your lap\n"; }
	Kitty(char *str) { this->str = str; }
} obj , ary[3] = { "Di Gi Gharat\n" , "Card Captor Sakura\n" , "LOVE HINA\n" };

int main() {
	cout << obj.str;
	for(int i = 0 ; i < 3 ; i++) cout << ary[i].str;
	return 0;
}
