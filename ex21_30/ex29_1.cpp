#include <iostream>
using namespace std;

int main() {
	int *po;
	po = new int;

	*po = 100;
	cout << "動的に割り当てたメモリの内容 = " << *po;

	delete po;
	return 0;
}
