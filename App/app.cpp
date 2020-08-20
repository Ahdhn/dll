#include <stdio.h>
#include <string>
#include "mylib.h"
int main() {
	f();

	int num = 5;
	X<int> x_int(5);
	x_int.mX();

	std::string name = "name";
	X<std::string> x_str(name);
	x_str.mX();

	return 0;
}