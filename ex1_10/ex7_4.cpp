#include <iostream>
using namespace std;

char *str = "Di_Gi_Gharat\n";

class Kitty {
public:
	char *str;
	void print(char *str);
} obj ;

void Kitty::print(char *str) {
	cout << str << Kitty::str << ::str;
}

int main() {
	obj.str = "Kitty on your lap\n";
	obj.print("Card Captor Sakura\n");
	return 0;
}
