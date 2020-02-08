#include <assertions-test/test.h>
#include <generator.h>
#include <output.h>

tests {
	test_suite("when output values") {
		test_case("should output numbers") {
			fizzbuzz::generator generator;
			std::stringstream stream;
			fizzbuzz::output output(stream, generator);

			output.outputNumber();

			assert(stream.str(), ==, "1\n");
		};

		test_case("should output multiple numbers") {
			fizzbuzz::generator generator;
			std::stringstream stream;
			fizzbuzz::output output(stream, generator);

			for(int i = 0; i < 15; i++) output.outputNumber();

			std::cerr << stream.str() << std::endl;

			assert(stream.str(), ==,
			"1\n"
			"2\n"
			"Fizz\n"
			"4\n"
			"Buzz\n"
			"Fizz\n"
			"7\n"
			"8\n"
			"Fizz\n"
			"Buzz\n"
			"11\n"
			"Fizz\n"
			"13\n"
			"14\n"
			"FizzBuzz\n"
			);
		};
	};
}
