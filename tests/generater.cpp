#include <assertions-test/test.h>
#include <generator.h>

tests {
	test_suite ("when generating output using the generator") {
		test_case ("when generating numbers") {
			fizzbuzz::generator generator;

			auto number1 = generator.generate();

			assert(number1, ==, "1");
		};

		test_case ("when generating multiples of 3") {
			fizzbuzz::generator generator;

			for(int i = 0; i < 2; i++) generator.generate();
			auto number3 = generator.generate();

			for(int i = 0; i < 2; i++) generator.generate();
			auto number6 = generator.generate();

			assert(number3, ==, "Fizz");
			assert(number6, ==, "Fizz");
		};

		test_case ("when generating multiples of 5") {
			fizzbuzz::generator generator;

			for(int i = 0; i < 4; i++) generator.generate();
			auto number3 = generator.generate();

			for(int i = 0; i < 4; i++) generator.generate();
			auto number6 = generator.generate();

			assert(number3, ==, "Buzz");
			assert(number6, ==, "Buzz");
		};

		test_case ("when generating multiples of 3 and 5") {
			fizzbuzz::generator generator;

			for(int i = 0; i < 14; i++) generator.generate();
			auto fizzbuzz = generator.generate();

			assert(fizzbuzz, ==, "FizzBuzz");
		};
	}
}
