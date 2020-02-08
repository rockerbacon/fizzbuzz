#pragma once

#include <ostream>
#include "generator.h"

namespace fizzbuzz {
	class output {
		private:
			std::ostream& stream;
			fizzbuzz::generator& generator;

		public:
			output (std::ostream& stream, fizzbuzz::generator& generator);

			void outputNumber();
	};
}
