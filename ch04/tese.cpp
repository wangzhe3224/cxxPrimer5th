#include <iostream>

int main() {
	int x[10]; int *p = x;
	std::cout << sizeof(p)/sizeof(*p) << "\n";
	return 0;
}
