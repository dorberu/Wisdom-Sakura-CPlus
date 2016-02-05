#include <stdio.h>

/*C言語ではvoidを明示しなければならない*/
void func(void);

void func() {
	puts("kitty on your lap");
}

int main() {
	func();
	return 0;
}
