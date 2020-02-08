#pragma once

#include <string>

namespace fizzbuzz {
	class generator {
		private:
			unsigned counter;

		public:
			generator();

			std::string generate();
	};
}
