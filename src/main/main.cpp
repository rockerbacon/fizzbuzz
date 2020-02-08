#include <output.h>

#include <iostream>

int main() {
	fizzbuzz::generator gen;
	fizzbuzz::output out(std::cout, gen);

	for(int i = 0; i < 100; i++) out.outputNumber();

	return 0;
}
