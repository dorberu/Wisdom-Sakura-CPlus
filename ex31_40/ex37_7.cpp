#include<iostream>
using namespace std;

int main() {
	char *str = "A";
	// error: cast from ‘char*’ to ‘int’ loses precision
	int var = reinterpret_cast < int > (str);

	cout << var;

	return 0;
}
