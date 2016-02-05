#include <iostream>
using namespace std;

template <class X1 , class X2> void println(X1 var1 , X2 var2) {
	cout << var1 << " : " << var2 << '\n';
}

int main() {
	println(1000 , 56.025);
	println('A' , "Di Gi Gharat");
	println("Kitty on your lap" , "LOVE HINA");

	return 0;
}
