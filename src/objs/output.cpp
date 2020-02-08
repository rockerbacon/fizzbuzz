#include "output.h"

using namespace std;
using namespace fizzbuzz;

output::output(ostream& stream, fizzbuzz::generator& generator) :
	stream(stream),
	generator(generator)
{}

void output::outputNumber() {
	stream << generator.generate() << endl;
}
