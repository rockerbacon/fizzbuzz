#include "generator.h"

using namespace std;
using namespace fizzbuzz;

generator::generator() :
	counter(0)
{}

string generator::generate() {
	counter++;
	string output;

	if (counter % 3 == 0) {
		output += "Fizz";
	}

	if (counter % 5 == 0) {
		output += "Buzz";
	}

	if (output.empty()) {
		output = to_string(counter);
	}

	return output;
}

